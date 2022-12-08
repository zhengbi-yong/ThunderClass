/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QTableView *tableView;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *edtName;
    QLineEdit *edtPassword;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QRadioButton *rbtnTeacher;
    QRadioButton *rbtnStudent;
    QPushButton *btnAddUser;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *edtDeleteName;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnDeleteUser;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *edtChangeName;
    QLineEdit *edtChangedName;
    QLineEdit *edtChangedPassword;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rbtnTeacher2;
    QRadioButton *rbtnStudent2;
    QPushButton *btnChangeUser;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QString::fromUtf8("AdminWindow"));
        AdminWindow->resize(1000, 618);
        AdminWindow->setMinimumSize(QSize(1000, 618));
        AdminWindow->setMaximumSize(QSize(1000, 618));
        AdminWindow->setStyleSheet(QString::fromUtf8("#AdminWindow\n"
"{\n"
"border-image: url(:/new/prefix1/Thunder.jpg);\n"
"}"));
        tableView = new QTableView(AdminWindow);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 30, 441, 561));
        verticalLayoutWidget_6 = new QWidget(AdminWindow);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(630, 40, 331, 541));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        edtName = new QLineEdit(verticalLayoutWidget_6);
        edtName->setObjectName(QString::fromUtf8("edtName"));
        edtName->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        edtName->setFont(font);

        verticalLayout_6->addWidget(edtName);

        edtPassword = new QLineEdit(verticalLayoutWidget_6);
        edtPassword->setObjectName(QString::fromUtf8("edtPassword"));
        edtPassword->setMinimumSize(QSize(0, 40));
        edtPassword->setFont(font);
        edtPassword->setEchoMode(QLineEdit::Password);

        verticalLayout_6->addWidget(edtPassword);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rbtnTeacher = new QRadioButton(verticalLayoutWidget_6);
        rbtnTeacher->setObjectName(QString::fromUtf8("rbtnTeacher"));
        rbtnTeacher->setFont(font);
        rbtnTeacher->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(rbtnTeacher);

        rbtnStudent = new QRadioButton(verticalLayoutWidget_6);
        rbtnStudent->setObjectName(QString::fromUtf8("rbtnStudent"));
        rbtnStudent->setFont(font);
        rbtnStudent->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(rbtnStudent);


        horizontalLayout->addLayout(verticalLayout);

        btnAddUser = new QPushButton(verticalLayoutWidget_6);
        btnAddUser->setObjectName(QString::fromUtf8("btnAddUser"));
        btnAddUser->setMinimumSize(QSize(0, 40));
        btnAddUser->setFont(font);
        btnAddUser->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(btnAddUser);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout);


        verticalLayout_8->addLayout(verticalLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        edtDeleteName = new QLineEdit(verticalLayoutWidget_6);
        edtDeleteName->setObjectName(QString::fromUtf8("edtDeleteName"));
        edtDeleteName->setMinimumSize(QSize(0, 40));
        edtDeleteName->setFont(font);

        verticalLayout_5->addWidget(edtDeleteName);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnDeleteUser = new QPushButton(verticalLayoutWidget_6);
        btnDeleteUser->setObjectName(QString::fromUtf8("btnDeleteUser"));
        btnDeleteUser->setMinimumSize(QSize(0, 40));
        btnDeleteUser->setMaximumSize(QSize(100, 16777215));
        btnDeleteUser->setFont(font);
        btnDeleteUser->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(btnDeleteUser);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_8->addLayout(verticalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, -1, -1, -1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        edtChangeName = new QLineEdit(verticalLayoutWidget_6);
        edtChangeName->setObjectName(QString::fromUtf8("edtChangeName"));
        edtChangeName->setMinimumSize(QSize(309, 40));
        edtChangeName->setMaximumSize(QSize(30000, 16777215));

        verticalLayout_3->addWidget(edtChangeName);

        edtChangedName = new QLineEdit(verticalLayoutWidget_6);
        edtChangedName->setObjectName(QString::fromUtf8("edtChangedName"));
        edtChangedName->setMinimumSize(QSize(0, 40));
        edtChangedName->setFont(font);

        verticalLayout_3->addWidget(edtChangedName);

        edtChangedPassword = new QLineEdit(verticalLayoutWidget_6);
        edtChangedPassword->setObjectName(QString::fromUtf8("edtChangedPassword"));
        edtChangedPassword->setMinimumSize(QSize(0, 40));
        edtChangedPassword->setFont(font);
        edtChangedPassword->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(edtChangedPassword);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rbtnTeacher2 = new QRadioButton(verticalLayoutWidget_6);
        rbtnTeacher2->setObjectName(QString::fromUtf8("rbtnTeacher2"));
        rbtnTeacher2->setMaximumSize(QSize(100, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setBold(false);
        font1.setWeight(50);
        rbtnTeacher2->setFont(font1);
        rbtnTeacher2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(rbtnTeacher2);

        rbtnStudent2 = new QRadioButton(verticalLayoutWidget_6);
        rbtnStudent2->setObjectName(QString::fromUtf8("rbtnStudent2"));
        rbtnStudent2->setMaximumSize(QSize(100, 16777215));
        rbtnStudent2->setFont(font);
        rbtnStudent2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(rbtnStudent2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        btnChangeUser = new QPushButton(verticalLayoutWidget_6);
        btnChangeUser->setObjectName(QString::fromUtf8("btnChangeUser"));
        btnChangeUser->setMinimumSize(QSize(60, 40));
        btnChangeUser->setMaximumSize(QSize(100, 16777215));
        btnChangeUser->setFont(font);
        btnChangeUser->setStyleSheet(QString::fromUtf8(""));
        btnChangeUser->setIconSize(QSize(16, 16));

        horizontalLayout_3->addWidget(btnChangeUser);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_8->addLayout(verticalLayout_4);


        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminWindow)
    {
        AdminWindow->setWindowTitle(QCoreApplication::translate("AdminWindow", "Admin", nullptr));
        edtName->setText(QString());
        edtName->setPlaceholderText(QCoreApplication::translate("AdminWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        edtPassword->setText(QString());
        edtPassword->setPlaceholderText(QCoreApplication::translate("AdminWindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        rbtnTeacher->setText(QCoreApplication::translate("AdminWindow", "\350\200\201\345\270\210", nullptr));
        rbtnStudent->setText(QCoreApplication::translate("AdminWindow", "\345\255\246\347\224\237", nullptr));
        btnAddUser->setText(QCoreApplication::translate("AdminWindow", "\345\242\236\345\212\240\347\224\250\346\210\267", nullptr));
        edtDeleteName->setPlaceholderText(QCoreApplication::translate("AdminWindow", "\350\257\267\350\276\223\345\205\245\346\202\250\350\246\201\345\210\240\351\231\244\347\232\204\347\224\250\346\210\267\345\220\215", nullptr));
        btnDeleteUser->setText(QCoreApplication::translate("AdminWindow", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        edtChangeName->setPlaceholderText(QCoreApplication::translate("AdminWindow", "\350\246\201\346\233\264\346\224\271\347\232\204\347\224\250\346\210\267\345\220\215", nullptr));
        edtChangedName->setText(QString());
        edtChangedName->setPlaceholderText(QCoreApplication::translate("AdminWindow", "\350\257\267\350\276\223\345\205\245\346\233\264\346\224\271\345\220\216\347\224\250\346\210\267\345\220\215", nullptr));
        edtChangedPassword->setText(QString());
        edtChangedPassword->setPlaceholderText(QCoreApplication::translate("AdminWindow", "\350\257\267\350\276\223\345\205\245\346\233\264\346\224\271\345\220\216\345\257\206\347\240\201", nullptr));
        rbtnTeacher2->setText(QCoreApplication::translate("AdminWindow", "\350\200\201\345\270\210", nullptr));
        rbtnStudent2->setText(QCoreApplication::translate("AdminWindow", "\345\255\246\347\224\237", nullptr));
        btnChangeUser->setText(QCoreApplication::translate("AdminWindow", "\346\233\264\346\224\271\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
