#include "stutimeinfo.h"

/*构造函数，初始化赋值。*/
StuTimeInfo::StuTimeInfo(unsigned int ConnIdex, string Name, string BeginTime, string ActInfo, string EndTime)
{
    m_uConnIdex = ConnIdex;
    m_sName = Name;
    m_sBeginTime = BeginTime;
    m_sActInfo = ActInfo;
    m_sEndTime = EndTime;
}

/*析构函数。*/
StuTimeInfo::~StuTimeInfo()
{

}

/*拷贝构造函数。*/
StuTimeInfo::StuTimeInfo(const StuTimeInfo& ATimeInfo)
{
    m_uConnIdex = ATimeInfo.m_uConnIdex;
    m_sName = ATimeInfo.m_sName;
    m_sBeginTime = ATimeInfo.m_sBeginTime;
    m_sActInfo = ATimeInfo.m_sActInfo;
    m_sEndTime = ATimeInfo.m_sEndTime;
}

/*=重载。*/
StuTimeInfo& StuTimeInfo::operator=(const StuTimeInfo& ATimeInfo)
{
    if (this != &ATimeInfo)
    {
        this->m_uConnIdex = ATimeInfo.m_uConnIdex;
        this->m_sName = ATimeInfo.m_sName;
        this->m_sBeginTime = ATimeInfo.m_sBeginTime;
        this->m_sActInfo = ATimeInfo.m_sActInfo;
        this->m_sEndTime = ATimeInfo.m_sEndTime;
    }
    return *this;
}

/*设置注意力数据。*/
void StuTimeInfo::SetActInfo(string ActInfo)
{
    m_sActInfo = ActInfo;
}

/*设置结束时间。*/
void StuTimeInfo::SetEndTime(string EndTime)
{
    m_sEndTime = EndTime;
}

/*返回端口号数据。*/
unsigned int StuTimeInfo::GetConnIdex()
{
    return m_uConnIdex;
}

/*返回用户名。*/
string StuTimeInfo::GetName()
{
    return m_sName;
}

/*返回开始时间。*/
string StuTimeInfo::GetBeginTime()
{
    return m_sBeginTime;
}


/*返回注意力数据。*/
string StuTimeInfo::GetActInfo()
{
    return m_sActInfo;
}

/*返回结束时间。*/
string StuTimeInfo::GetEndTime()
{
    return m_sEndTime;
}
