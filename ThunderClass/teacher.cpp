/*************************************************************************
【文件名】teacher.cpp
【功能模块和目的】教师类定义
【开发者及日期】范静涛(fanjingtao@tsinghua.edu.cn) 2020-5-10
【版权信息】开发者范静涛(fanjingtao@tsinghua.edu.cn)声明放弃任何版权诉求，任何使用者可做出任何修改、用于任何目的
【更改记录】2020-5-15 由范静涛增加注释
*************************************************************************/

#include "teacher.h"

/*按用户名、密码构造一个教师对象。*/
Teacher::Teacher(const string& Name, const string& Password) : User(Name, Password, "Teacher")
{

}
