/*************************************************************************
【文件名】Pixel.h
【功能模块和目的】像素类的声明与内联函数定义
【开发者及日期】范静涛(fanjingtao@tsinghua.edu.cn) 2020-5-3
【版权信息】范静涛(fanjingtao@tsinghua.edu.cn)声明放弃对全部代码的任何版权诉求，任何使用者可做出任何修改、用于任何目的
【更改记录】
    2020-05-10 由范静涛做了命名规范化修改
    2020-05-15 由范静涛增加注释
*************************************************************************/

#ifndef PixelH
#define PixelH

/*************************************************************************
用于操作像素对象及分量
    构造函数Pixel用红绿蓝三个颜色分量构造一个像素对象;
    析构函数~Pixel();
    拷贝构造函数Pixel(const Pixel& aPixel);
    赋值运算符函数operator=
    内联函数GetR返回红色分量值
    内联函数GetG返回绿色分量值
    内联函数GetB返回蓝色分量值
    内联函数SetR设定红色分量值
    内联函数SetG设定绿色分量值
    内联函数SetB设定蓝色分量值
    内联函数Set同时设定三色分量值
    常引用R表示红色分量值
    常引用G表示绿色分量值
    常引用B表示蓝色分量值
*************************************************************************/
class Pixel{
public:
    //构造函数Pixel用红绿蓝三个颜色分量构造一个像素对象;
    Pixel(unsigned char Red = 0, unsigned char Green = 0, unsigned char Blue = 0);
    //析构函数~Pixel();
    ~Pixel();
    //拷贝构造函数Pixel(const Pixel& aPixel);
    Pixel(const Pixel& aPixel);
    //赋值运算符函数operator=
    Pixel& operator= (const Pixel& aPixel);
    //内联函数GetR返回红色分量值
    inline unsigned char GetR() const;
    //内联函数GetG返回绿色分量值
    inline unsigned char GetG() const;
    //内联函数GetB返回蓝色分量值
    inline unsigned char GetB() const;
    //内联函数SetR设定红色分量值
    inline void SetR(unsigned char Red);
    //内联函数SetG设定绿色分量值
    inline void SetG(unsigned char Green);
    //内联函数SetB设定蓝色分量值
    inline void SetB(unsigned char Blue);
    //内联函数Set同时设定三色分量值
    inline void Set(unsigned char Red = 0, unsigned char Green = 0, unsigned char Blue = 0);
    //常引用R表示红色分量值
    const unsigned char& R;
    //常引用G表示绿色分量值
    const unsigned char& G;
    //常引用B表示蓝色分量值
    const unsigned char& B;
private:
    //红色分量
    unsigned char m_ucR;
    //绿色分量
    unsigned char m_ucG;
    //蓝色分量
    unsigned char m_ucB;
};

/*返回红色分量值的内联函数。*/
unsigned char Pixel::GetR() const {
    return m_ucR;
}

/*返回绿色分量值的内联函数。*/
unsigned char Pixel::GetG() const {
    return m_ucG;
}

/*返回蓝色分量值的内联函数。*/
unsigned char Pixel::GetB() const {
    return m_ucB;
}

/*设定红色分量值的内联函数。*/
void Pixel::SetR(unsigned char Red){
    m_ucR = Red;
    //Set(Red, 0, 0);
}

/*设定绿色分量值的内联函数。*/
void Pixel::SetG(unsigned char Green){
    m_ucG = Green;
}

/*设定蓝色分量值的内联函数。*/
void Pixel::SetB(unsigned char Blue){
    m_ucB = Blue;
}

/*设定红绿蓝三色分量值的内联函数。*/
void Pixel::Set(unsigned char Red, unsigned char Green, unsigned char Blue){
    m_ucR = Red;
    m_ucG = Green;
    m_ucB = Blue;
}

#endif
