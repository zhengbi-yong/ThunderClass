#include "loginwindow.h"

#include <QApplication>

#include "log.h"

int main(int argc, char *argv[])
{
    //放在main中的第一行
    /*该行代码允许App在高分辨率下正常运行。*/
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication a(argc, argv);
    LoginWindow w;
    /*该函数主要用于对日志做初始化工作，将outputMessage函数安装到qt中。*/
    logInit();
    w.show();
    return a.exec();
}
