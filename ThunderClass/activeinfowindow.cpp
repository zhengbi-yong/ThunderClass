#include "activeinfowindow.h"
#include "ui_activeinfowindow.h"

ActiveInfoWindow::ActiveInfoWindow(QWidget *parent, vector<StuTimeInfo> TimeInfo) :
    QDialog(parent),
    ui(new Ui::ActiveInfoWindow)
{
    ui->setupUi(this);
    //获取时间
    time_t Time = time(NULL);
    char cTime[64] = {0};
    strftime(cTime, sizeof(cTime) - 1, "%Y-%m-%d %H:%M:%S", localtime(&Time));//年-月-日 时-分-秒
    string sEndTime = cTime;
    //设置表格
    model = new QStandardItemModel();
    model->setColumnCount(4);//列数为4
    //设置表头
    model->setHeaderData(0, Qt::Horizontal, QString::fromStdString("用户名"));
    model->setHeaderData(1, Qt::Horizontal, QString::fromStdString("进入课堂时间"));
    model->setHeaderData(2, Qt::Horizontal, QString::fromStdString("退出课堂时间"));
    model->setHeaderData(3, Qt::Horizontal, QString::fromStdString("注意力百分比"));
    //设定参数
    ui->tableView->setModel(model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//表格不可编辑
    ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);//表头居左
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//改变列宽使其充满屏幕
    //清空所有单元格
    model->removeRows(0, model->rowCount() - 1);
    //设定单元格内容
    /*遍历时间列表。*/
    for (unsigned int i = 0; i < TimeInfo.size(); i++)
    {
        //用户名
        model->setItem(i, 0, new QStandardItem(QString::fromStdString(TimeInfo[i].GetName())));
        //model->item(i, 0)->setTextAlignment(Qt::AlignCenter);//设置字符位置
        //开始时间
        model->setItem(i, 1, new QStandardItem(QString::fromStdString(TimeInfo[i].GetBeginTime())));
        //model->item(i, 0)->setTextAlignment(Qt::AlignCenter);//设置字符位置
        if (TimeInfo[i].GetEndTime() != "")
        {
            //结束时间
            model->setItem(i, 2, new QStandardItem(QString::fromStdString(TimeInfo[i].GetEndTime())));
            //model->item(i, 0)->setTextAlignment(Qt::AlignCenter);//设置字符位置
        }
        else//如果学生结束信息为空，则结束时间为强制下课时间，设置为点击下课的时间。
        {
            model->setItem(i, 2, new QStandardItem(QString::fromStdString(sEndTime)));
            //model->item(i, 0)->setTextAlignment(Qt::AlignCenter);//设置字符位置
        }
        //注意力比例
        model->setItem(i, 3, new QStandardItem(QString::fromStdString(TimeInfo[i].GetActInfo()) + "%"));
        model->item(i, 3)->setForeground(QBrush(QColor(255, 0, 0)));//设置字符颜色
        //model->item(i, 3)->setTextAlignment(Qt::AlignCenter);//设置字符位置
    }
}

ActiveInfoWindow::~ActiveInfoWindow()
{
    delete ui;
}

void ActiveInfoWindow::on_btnOK_clicked()
{
    //关闭界面
    this->close();
}
