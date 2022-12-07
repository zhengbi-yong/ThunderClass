//版权声明：本文为博主原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接和本声明。
//原文链接：https://blog.csdn.net/xiaoyink/article/details/79721481
#include "log.h"

#include <QString>
#include <QLoggingCategory>
#include <QIODevice>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QDateTime>
#include <QMutex>
#include <QApplication>
#include <QRegExp>

static QString logDirectory;
static QString logFileName;
static QMutex mutex;
static QFile file;
static QTextStream textStream;


void outputMessage(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    QString text;
    switch(type)
    {
    case QtDebugMsg:
        text = QString("[Debug]");
        break;
    case QtInfoMsg:
        text = QString("[Info]");
        break;
    case QtWarningMsg:
        text = QString("[Warning]");
        break;
    case QtCriticalMsg:
        text = QString("[Critical]");
        break;
    case QtFatalMsg:
        text = QString("[Fatal]");
    }
    /*将报错或者调试信息输出到log文件中。*/
    text.append(QString(" [%1] ").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")));
    text.append(QString(" [%1: Line: %2] ").arg(QString(context.file)).arg(context.line));
    text.append(QString(" [Function: %1] ").arg(QString(context.function)));
    mutex.lock();
    file.setFileName(logFileName);
    file.open(QIODevice::WriteOnly | QIODevice::Append);
    textStream.setDevice(&file);
    textStream << text << endl << QString("Message: %1").arg(msg) << endl;
    file.close();
    mutex.unlock();
}

void logInit()
{
    /*logDirectory为日志所在路径。*/
    logDirectory  = QApplication::applicationDirPath() + "/Log/";
    /*初始化一个QDir对象*/
    QDir dir(logDirectory);
    /*如果路径不存在则创建文件夹*/
    if(!dir.exists())
        dir.mkdir(logDirectory);
    /*将日志的名字设置为App的名字*/
    logFileName = logDirectory + (QApplication::applicationName()+".log");

    /*以下这段代码的含义是初始化时检查日志文件是否存在一个月之前的日志，如果存在删除之*/
    {
        /*创建一个锁*/
        QMutexLocker locker(&mutex);
        //mutex.lock();
        /*创建一个文件对象*/
        QFile file(logFileName);
        /*将文件以只读的方式打开。*/
        file.open(QIODevice::ReadOnly);
        /*创建一个便于读写文本的对象*/
        QTextStream textStream(&file);
        /*创建一个Qt专属string，这种字符串比较容易操作。*/
        QString temp;
        /*创建一个字符串组成的列表，这个列表就相当于平常的txt。表达力相当于二维的字符数组。*/
        QStringList tempList;
        /*正则表达式，用于模式匹配。*/
        QRegExp regExp(".*(20\\d\\d-\\d\\d-\\d\\d).*");
        /*进入while的条件是日志文件非空。*/
        while ((temp = textStream.readLine()).isEmpty() == false)
        {
            /*如果在某个位置匹配到了regExp所设置的模式则进入if。*/
            if(temp.indexOf(regExp) >= 0)
            {
                /*将匹配到的地方转换为Qt能看懂的date类。*/
                QDate date = QDate::fromString(regExp.cap(1), "yyyy-MM-dd");
                /*获取目前的时间。*/
                QDate currentDate = QDate::currentDate();
                /*判断当前行所记载的日期和现今的日期天数之差是否大于记录该条日志时的那个月的天数*/
                /*如果小于，则将该条记录加入列表。*/
                if(date.daysTo(currentDate) < date.day())
                {
                    tempList << temp;
                    tempList << textStream.readLine();
                }
            }
        }
        file.close();
        /*将文件以只写的方式打开，将上述列表中的内容写回文件。*/
        file.open(QIODevice::Truncate | QIODevice::WriteOnly);
        textStream.setDevice(&file);
        for(auto iterator = tempList.begin(); iterator != tempList.end(); iterator++)
        {
            textStream << *iterator << endl;
        }
        file.close();
        //mutex.unlock();
    }
    /*安装上述自定义函数*/
    qInstallMessageHandler(outputMessage);
}
