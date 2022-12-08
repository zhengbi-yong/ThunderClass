#ifndef STUTIMEINFO_H
#define STUTIMEINFO_H

#include <string>
using namespace std;

/*学生关于时间的信息类*/
//存储学生登录信息
class StuTimeInfo
{

public:
    //构造函数
    StuTimeInfo(unsigned int m_uConnIdex = 0, string Name = "", string BeginTime = "", string ActInfo = "", string EndTime = "");
    //析构函数
    ~StuTimeInfo();
    //拷贝构造函数
    StuTimeInfo(const StuTimeInfo& ATimeInfo);
    //=重载
    StuTimeInfo& operator=(const StuTimeInfo& ATimeInfo);
    //设置变量成员的值
    void SetActInfo(string ActInfo);
    void SetEndTime(string EndTime);
    unsigned int GetConnIdex();
    //获取变量成员的值
    string GetName();
    string GetBeginTime();
    string GetActInfo();
    string GetEndTime();

private:
    //唯一的标识，Server的连接号
    unsigned int m_uConnIdex;
    string m_sName;     //用户名
    string m_sBeginTime;//进入课堂时间
    string m_sActInfo;  //注意力比例
    string m_sEndTime;  //退出课堂时间

};

#endif // STUTIMEINFO_H
