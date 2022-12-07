#ifndef LOGINPROCESS_H
#define LOGINPROCESS_H
#include <vector>
#include <string>
#include <QString>
#include "user.h"
/*该处报的警告应该被忽略，因为LoginProcess中使用到了user类。*/
using namespace std;
/*登录的几种情况：没有该用户、管理员、老师、学生*/
enum LoginResult {LR_NOUSER, LR_ADMIN, LR_TEACHER, LR_STUDENT};
/*登录流程管理类*/
class LoginProcess
{
public:
    /*登录的预处理，将信息从txt文件中读取出来。*/
    LoginProcess();
    /*根据登录的用户名和密码来返回一个登录结果。*/
    LoginResult Login(const QString& UserName, const QString& Password);
    //函数判断是否登陆失败三次
    bool IsNoUserThreeTimes();
private:
    //登陆失败的次数
    static unsigned int m_uNoUserTimes;
};

#endif // LOGINPROCESS_H
