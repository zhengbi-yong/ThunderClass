/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btnExit;
    QPushButton *btnLogin;
    QLineEdit *edtPassword;
    QLineEdit *edtName;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(801, 711);
        LoginWindow->setMinimumSize(QSize(801, 711));
        LoginWindow->setMaximumSize(QSize(801, 711));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(102, 8, 116, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        LoginWindow->setPalette(palette);
        LoginWindow->setStyleSheet(QString::fromUtf8("#LoginWindow\n"
"{\n"
"border-image: url(:/new/prefix1/door1.jpg);\n"
"}"));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(801, 711));
        centralwidget->setMaximumSize(QSize(801, 711));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 801, 711));
        label->setMinimumSize(QSize(801, 711));
        label->setMaximumSize(QSize(801, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/door3.jpg);"));
        btnExit = new QPushButton(centralwidget);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setGeometry(QRect(340, 600, 111, 41));
        btnExit->setFont(font);
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(340, 540, 111, 41));
        btnLogin->setFont(font);
        btnLogin->setStyleSheet(QString::fromUtf8(""));
        edtPassword = new QLineEdit(centralwidget);
        edtPassword->setObjectName(QString::fromUtf8("edtPassword"));
        edtPassword->setGeometry(QRect(270, 470, 261, 51));
        edtPassword->setFont(font);
        edtPassword->setEchoMode(QLineEdit::Password);
        edtName = new QLineEdit(centralwidget);
        edtName->setObjectName(QString::fromUtf8("edtName"));
        edtName->setGeometry(QRect(270, 390, 261, 51));
        edtName->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 100, 141, 121));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/ThunderClass.png);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 240, 241, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(20);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(105, 0, 157);"));
        LoginWindow->setCentralWidget(centralwidget);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "\351\233\267\350\257\276\345\240\202\347\231\273\345\275\225", nullptr));
        label->setText(QString());
        btnExit->setText(QCoreApplication::translate("LoginWindow", "\351\200\200\345\207\272", nullptr));
        btnLogin->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        edtPassword->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        edtName->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("LoginWindow", "\346\254\242\350\277\216\344\275\277\347\224\250\351\233\267\350\257\276\345\240\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
