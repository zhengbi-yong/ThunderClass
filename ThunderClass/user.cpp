#include "user.h"
#include "admin.h"
#include "teacher.h"
#include "student.h"

/*全局的用户计数变量。*/
unsigned int User::m_uUserCount = 0;
/*返回一个只读类型的值。*/
const unsigned int& User::UserCount = User::m_uUserCount;
/*用户列表。*/
vector<User*> User::m_UserList;
/*初始化刚登录的用户指针。*/
User* User::m_LoginedUser = nullptr;

/*正常的构造函数。*/
User::User(const string& Name, const string& Password, const string& Type):Type(m_sType){
    m_sName = Name;
    m_sPassword = Password;
    m_sType = Type;
    m_uUserCount++;
}

/*通过输入文件流去构造。*/
User::User(ifstream& inFile):Type(m_sType){
    getline(inFile, m_sName);
    getline(inFile, m_sPassword);
    getline(inFile, m_sType);
    m_uUserCount++;
}

/*析构函数。*/
User::~User(){
    m_uUserCount--;
}

/*复制构造函数。*/
User::User(const User& anUser):Type(m_sType){
    m_sName = anUser.m_sName;
    m_sPassword = anUser.m_sPassword;
    m_sType = anUser.m_sType;
}

/*赋值运算符。*/
User& User::operator=(const User& anUser){
    if (this != &anUser) {
        m_sName = anUser.m_sName;
        m_sPassword = anUser.m_sPassword;
        m_sType = anUser.m_sType;
    }
    /*返回左值。*/
    return *this;
}

Message User::ToMessage() const {
    /*姓名的长度。*/
    unsigned int NameLen = m_sName.length();
    /*密码的长度。*/
    unsigned int PasswordLen = m_sPassword.length();
    /*Buffer用于整理这些信息，转换成消息格式之后就删除。*/
    unsigned char* Buffer = new unsigned char[NameLen + PasswordLen + 2 * sizeof (NameLen)];
    /*开始整理。*/
    /*前几个字符为用户名长度。*/
    memcpy(Buffer, (char*)&NameLen, sizeof(NameLen));
    /*之后再跟着c_str类型的用户名。*/
    memcpy(Buffer + sizeof(NameLen), m_sName.c_str(), NameLen);
    /*再之后跟着密码的长度。*/
    memcpy(Buffer + sizeof(NameLen) + NameLen, (char*)&PasswordLen, sizeof(PasswordLen));
    /*再之后跟着密码的字符串。*/
    memcpy(Buffer +  2 * sizeof(NameLen) + NameLen, m_sPassword.c_str(), PasswordLen);
    /*将上述字符串封装成一个消息。*/
    Message ret(MSG_ID_PSW, Buffer, NameLen + PasswordLen + 2 * sizeof (NameLen));
    /*删除用作整理的Buffer。*/
    delete [] Buffer;
    /*返回这个消息。*/
    return ret;
}

/*将用户的信息输出到文件当中，其中参数是输出文件流。*/
void User::SaveToFileStream(ofstream& OutFile) const {
    OutFile << m_sName << endl;
    OutFile << m_sPassword << endl;
    OutFile << m_sType << endl;
}

/*获取用户名。*/
string User::GetName() const{
    return m_sName;
}

/*检验密码是否正确。*/
bool User::TestPassword(const string& Password) const {
    if (Password == m_sPassword) {
        return true;
    }
    else {
        return false;
    }
}

bool User::AddUser(const string& Name, const string& Password, const string& Type){
    Admin* p = nullptr;
    p = dynamic_cast<Admin*>(this);
    //检查用户名是否为空
    if (Name == "" || Name == "Admin")//增加不能添加Admin的规则
    {
        return false;
    }
    //检查密码是否为空
    if (Password == "")
    {
        return false;
    }
    //检查用户名是否重复
    for (unsigned int i  = 0; i < m_UserList.size(); i++)
    {
        if (m_UserList[i]->GetName() == Name)
        {
            return false;
        }
    }
    /*如果有指针指向的对象则进入if*/
    if (p != nullptr) {
        /*看该指针类型是不是管理员。*/
        if (Type == "Admin") {
            /*检查用户列表，如果用户列表中有管理员，则返回错误。因为管理员必须是唯一的。*/
            for (unsigned int i  = 0; i < m_UserList.size(); i++) {
                if (m_UserList[i]->Type == "Admin") {
                    return false;
                }
            }
            /*没有错误则将该用户添加到用户列表当中。因为管理员是唯一的，并且用户名和密码都
             *是固定的，所以不需要再传入用户名和密码的参数。*/
            m_UserList.push_back(new Admin());
            return true;
        }
        /*如果是老师或者同学，则需要将用户名和密码传入。*/
        else if (Type == "Teacher"){
            m_UserList.push_back(new Teacher(Name, Password));
            return true;
        }
        else {
            m_UserList.push_back((User*) new Student(Name, Password));
            return true;
        }
    }
    else {
        return false;
    }
}

//删除一个用户
bool User::DeleteUser(const string& Name)
{
    if (Name == "Admin")//增加不能删除Admin的规则
    {
        return false;
    }
    /*换一种遍历用户列表的方式，用迭代器。*/
    for(vector<User*>::iterator iter = m_UserList.begin(); iter != m_UserList.end(); iter++)
    {
        //从vector中删除指定的某一个元素
        if((*iter)->GetName() == Name)
        {
            m_UserList.erase(iter);
            return true;
        }
    }
    return false;
}

//范静涛增加了未找到文件则自动创建只包含Admin用户的功能
//范静涛修改了重复调用此函数导致用户数翻倍的问题，感谢李浦豪同学发现此问题
/*将装有用户信息的文件的文件名传入，加载用户列表。*/
void User::LoadFromFile(const string& FileName) {
    /*创建一个输入文件流对象。*/
    ifstream inFile(FileName.c_str());
    /*如果没有找到该文件则创建一个只包含管理员的文件。*/
    if (inFile.fail()) {
        ofstream OutFile(FileName.c_str(), ios::out | ios::app);
        OutFile << 1 << endl << "Admin" << endl << "Admin" << endl << "Admin" << endl;
        OutFile.close();
    }
    inFile.close();
    inFile.open(FileName.c_str());
    //新增开始
    /*将用户列表的所有人全部删除，避免人数翻倍。*/
    for (int i = m_UserList.size() - 1; i >= 0 ; i--) {
        User* pUser = m_UserList[i];
        delete pUser;
    }
    //新增结束
    m_UserList.clear();
    unsigned int UserCount;
    inFile >> UserCount;
    inFile.get();
    /*将所有人加载到用户列表中。*/
    for (unsigned int i  = 0; i < UserCount; i++) {
        string Name;
        string Password;
        string Type;
        getline(inFile, Name);
        getline(inFile, Password);
        getline(inFile, Type);
        if (Type == "Admin"){
            m_UserList.push_back(new Admin());
        }
        else if (Type == "Teacher"){
            m_UserList.push_back(new Teacher(Name, Password));
        }
        else {
            m_UserList.push_back((User*)new Student(Name, Password));
        }
    }
    inFile.close();
}

//将文件内容清空，重新写
void User::SaveToFile(const string& FileName)
{
    ofstream OutFile(FileName.c_str());
    OutFile << m_UserList.size() << endl;
    for (unsigned int i = 0; i < m_UserList.size(); i++) {
        m_UserList[i]->SaveToFileStream(OutFile);
    }
    OutFile.close();
}

/*该函数返回一个指向用户类的指针。*/
const User* User::GetUser(const string& Name, const string& Password){
    /*初始的时候该指针为空。*/
    const User* Current = nullptr;
    /*遍历整个用户列表来寻找该用户是否存在。*/
    for (unsigned int i  = 0; i < m_UserList.size(); i++) {
        /*如果名字能对的上并且密码输入正确，那就将指针指向该用户。*/
        if (m_UserList[i]->GetName() == Name && m_UserList[i]->TestPassword(Password)) {
            Current = m_UserList[i];
            m_LoginedUser = m_UserList[i];
            break;
        }
    }
    return Current;
}

/*重载GetUser函数，只使用用户名去找这个用户。*/
const User* User::GetUser(const string& Name) {
    const User* Current = nullptr;
    for (unsigned int i  = 0; i < m_UserList.size(); i++) {
        if (m_UserList[i]->GetName() == Name) {
            Current = m_UserList[i];
            break;
        }
    }
    return Current;
}

/*返回刚刚登录的这个用户。*/
User* User::GetLoginedUser() {
    return m_LoginedUser;
}

/*将所有的学生全部离线。*/
void User::OfflineAllStudents(){
    Student* pStudent;
    /*遍历整个用户列表，如果类型是学生则将其下线。*/
    for (unsigned int i  = 0; i < m_UserList.size(); i++) {
        if (m_UserList[i]->Type == "Student") {
            pStudent = dynamic_cast<Student*>(m_UserList[i]);
            pStudent->Offline();
        }
    }
}

/*
string User::GetNthName(unsigned int n)
{
    return m_UserList[n]->m_sName;
}
string User::GetNthPassword(unsigned int n)
{
    return m_UserList[n]->m_sPassword;
}
string User::GetNthType(unsigned int n)
{
    return m_UserList[n]->m_sType;
}
*/

//找到第n个用户，将其信息赋给参数中的变量，返回是否找到
/*根据索引去寻找用户，并得到用户信息。*/
bool User::GetNthUserInfo(unsigned int n, string& Name, string& Password, string& Type)
{
    if (n < m_UserList.size())
    {
        Name = m_UserList[n]->m_sName;
        Password = m_UserList[n]->m_sPassword;
        Type = m_UserList[n]->m_sType;
        return true;
    }
    return false;
}

