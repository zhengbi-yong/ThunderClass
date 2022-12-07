/*************************************************************************
【文件名】adminprocess.cpp
【功能模块和目的】管理员业务流程类定义
【开发者及日期】范静涛(fanjingtao@tsinghua.edu.cn) 2020-5-10
【版权信息】开发者范静涛(fanjingtao@tsinghua.edu.cn)声明放弃任何版权诉求，任何使用者可做出任何修改、用于任何目的
【更改记录】2020-5-15 由范静涛增加注释
*************************************************************************/

#include "adminprocess.h"
#include "admin.h"

/*管理员业务流程类构造函数，不允许在类外显性构造管理员对象（友元User类除外）*/
AdminProcess::AdminProcess() {
    //Admin::LoadFromFile(USERINFOFILENAME);
    m_pAdmin = (Admin*)Admin::GetUser("Admin");
}

/*增加用户并保存本地文件*/
bool AdminProcess::AddUser(const string& Name, const string& Password, const string &Type)
{
    /*用于标记是否成功添加了用户。*/
    bool flag;
    flag = m_pAdmin->AddUser(Name, Password, Type);
    /*将添加后的记录写到文件中去，避免下次运行程序信息丢失。*/
    Admin::SaveToFile(USERINFOFILENAME);
    return flag;
}

/*删除用户，删除成功则返回true。*/
bool AdminProcess::DeleteUser(const string& Name)
{
    bool flag;
    flag = m_pAdmin->DeleteUser(Name);
    /*删除之后同样需要写回文件，保证删除成功进行。*/
    Admin::SaveToFile(USERINFOFILENAME);
    return flag;
}

/*更改用户的信息。只能更改用户名。*/
bool AdminProcess::ChangeUser(const string& Name, const string& ChangedName, const string& Password, const string &Type)
{
    return (DeleteUser(Name) && AddUser(ChangedName, Password, Type));
}

//函数GetName返回第n个用户名;
/*
string AdminProcess::GetNthName(unsigned int n)
{
    return m_pAdmin->GetNthName(n);
}
//函数GetPassword返回第n个密码
string AdminProcess::GetNthPassword(unsigned int n)
{
    return m_pAdmin->GetNthPassword(n);
}
//函数GetType返回第n个用户类型
string AdminProcess::GetNthType(unsigned int n)
{
    return m_pAdmin->GetNthType(n);
}
//返回用户数
unsigned int AdminProcess::GetUserCount()
{
    Admin::LoadFromFile(USERINFOFILENAME);
    return m_pAdmin->GetUserCount();
}
*/

/*找到第n个用户的信息，将这些信息写在函数的参数中。*/
bool AdminProcess::GetNthUserInfo(unsigned int n, string& Name, string& Password, string& Type)
{
    return m_pAdmin->GetNthUserInfo(n, Name, Password, Type);
}
