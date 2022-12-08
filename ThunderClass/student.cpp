/*************************************************************************
【文件名】student.cpp
【功能模块和目的】学生类定义
【开发者及日期】范静涛(fanjingtao@tsinghua.edu.cn) 2020-5-10
【版权信息】开发者范静涛(fanjingtao@tsinghua.edu.cn)声明放弃任何版权诉求，任何使用者可做出任何修改、用于任何目的
【更改记录】2020-5-15 由范静涛增加注释
*************************************************************************/

#include "student.h"

/*按用户名、密码构造一个学生对象。*/
Student::Student(const string& Name, const string& Password):User(Name, Password, "Student") {
    //教师端使用，默认没有连接到教师端
    m_iConnectionIndex = -1;
}

/*用于教师端，判断一个学生是否在线，在Server的哪个Connection上。*/
bool Student::IsOnline(int& ConnectionIndex) const {
    if (m_iConnectionIndex >= 0) {
        ConnectionIndex = m_iConnectionIndex;
        return  true;
    }
    return false;
}

/*用于教师端，设定一个学生在线，以及在Server的哪个Connection上。*/
void Student::Online(unsigned int ConnectionIndex) {
    m_iConnectionIndex = ConnectionIndex;
}

/*用于教师端，设定一个学生离线。*/
void Student::Offline(){
    m_iConnectionIndex = -1;
}
