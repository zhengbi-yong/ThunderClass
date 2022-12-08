#include "loginprocess.h"


//设置初始登录错误次数为0
unsigned int LoginProcess::m_uNoUserTimes = 0;

LoginProcess::LoginProcess()
{
    /*将用户的信息加载进来。由于没有学过数据库所以直接使用txt文件进行明文保存。*/
    User::LoadFromFile("UserInformation.txt");
}

LoginResult LoginProcess::Login(const QString& UserName, const QString& Password){
    /*通过用户名和密码返回一个指向user的指针。*/
    const User* pCurrentUser = User::GetUser(UserName.toStdString(), Password.toStdString());
    /*如果返回的是空指针则说明用户名或密码错误。*/
    if (pCurrentUser == nullptr) {
        m_uNoUserTimes++;//如果不对则错误次数+1
        return LR_NOUSER;
    }
    /*如果指针存在则判断到底是哪一种登录用户。但此处的顺序有待调整，因为管理员、老师、学生的人数是不一样多的，
      这种情况下学生要进行两次if判断才能够登录。*/
    if (pCurrentUser->Type == "Admin") {
        return LR_ADMIN;
    }
    else if (pCurrentUser->Type == "Teacher") {
        return LR_TEACHER;
    }
    else {
        return LR_STUDENT;
    }
}

//判断登录过程中是否错误了三次
bool LoginProcess::IsNoUserThreeTimes()
{
    if (m_uNoUserTimes == 3)//如果是
    {
        m_uNoUserTimes = 0;//重置
        return true;//返回真
    }
    else
    {
        return false;
    }
}

