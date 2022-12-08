/*************************************************************************
【文件名】Pixel.cpp
【功能模块和目的】像素类非内联函数定义
【开发者及日期】范静涛(fanjingtao@tsinghua.edu.cn) 2020-5-3
【版权信息】范静涛(fanjingtao@tsinghua.edu.cn)声明放弃对全部代码的任何版权诉求，任何使用者可做出任何修改、用于任何目的
【更改记录】
    2020-05-10 由范静涛做了命名规范化修改
    2020-05-15 由范静涛增加注释
*************************************************************************/

#include "Pixel.h"

/*构造函数，设定红绿蓝三色分量值的内联函数。
  全部为入口参数，依次为0~255，红色分量值；0~255，绿色分量值；0~255，蓝色分量值。
*/
Pixel::Pixel(unsigned char Red, unsigned char Green, unsigned char Blue)
    :R(m_ucR), G(m_ucG), B(m_ucB){
    Set(Red, Green, Blue);
}

/*析构函数。*/
Pixel::~Pixel(){
}

/*拷贝构造函数。*/
Pixel::Pixel(const Pixel& aPixel):R(m_ucR), G(m_ucG), B(m_ucB){
     Set(aPixel.GetR(), aPixel.GetG(), aPixel.GetB());
}

/*赋值运算符函数。*/
Pixel& Pixel::operator= (const Pixel& aPixel){
    if (this  != &aPixel) {
        Set(aPixel.GetR(), aPixel.GetG(), aPixel.GetB());
    }
    return *this;
}
