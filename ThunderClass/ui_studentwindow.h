/********************************************************************************
** Form generated from reading UI file 'studentwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTWINDOW_H
#define UI_STUDENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentWindow
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *lblSharedScreen;
    QHBoxLayout *horizontalLayout;
    QLineEdit *edtIP;
    QPushButton *btnEnterClass;
    QPushButton *btnExitClass;
    QSpacerItem *horizontalSpacer;
    QComboBox *cmbChatList;
    QLineEdit *edtChat;
    QPushButton *btnSend;

    void setupUi(QDialog *StudentWindow)
    {
        if (StudentWindow->objectName().isEmpty())
            StudentWindow->setObjectName(QString::fromUtf8("StudentWindow"));
        StudentWindow->resize(1027, 677);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        StudentWindow->setFont(font);
        gridLayout = new QGridLayout(StudentWindow);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(StudentWindow);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1920, 1080));
        scrollAreaWidgetContents->setMinimumSize(QSize(1920, 1080));
        lblSharedScreen = new QLabel(scrollAreaWidgetContents);
        lblSharedScreen->setObjectName(QString::fromUtf8("lblSharedScreen"));
        lblSharedScreen->setGeometry(QRect(0, 0, 1920, 1080));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        edtIP = new QLineEdit(StudentWindow);
        edtIP->setObjectName(QString::fromUtf8("edtIP"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(edtIP->sizePolicy().hasHeightForWidth());
        edtIP->setSizePolicy(sizePolicy);
        edtIP->setClearButtonEnabled(false);

        horizontalLayout->addWidget(edtIP);

        btnEnterClass = new QPushButton(StudentWindow);
        btnEnterClass->setObjectName(QString::fromUtf8("btnEnterClass"));

        horizontalLayout->addWidget(btnEnterClass);

        btnExitClass = new QPushButton(StudentWindow);
        btnExitClass->setObjectName(QString::fromUtf8("btnExitClass"));

        horizontalLayout->addWidget(btnExitClass);

        horizontalSpacer = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cmbChatList = new QComboBox(StudentWindow);
        cmbChatList->setObjectName(QString::fromUtf8("cmbChatList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbChatList->sizePolicy().hasHeightForWidth());
        cmbChatList->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(cmbChatList);

        edtChat = new QLineEdit(StudentWindow);
        edtChat->setObjectName(QString::fromUtf8("edtChat"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(edtChat->sizePolicy().hasHeightForWidth());
        edtChat->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(edtChat);

        btnSend = new QPushButton(StudentWindow);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        horizontalLayout->addWidget(btnSend);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(StudentWindow);

        QMetaObject::connectSlotsByName(StudentWindow);
    } // setupUi

    void retranslateUi(QDialog *StudentWindow)
    {
        StudentWindow->setWindowTitle(QCoreApplication::translate("StudentWindow", "Dialog", nullptr));
        lblSharedScreen->setText(QString());
        edtIP->setText(QCoreApplication::translate("StudentWindow", "127.0.0.1", nullptr));
        edtIP->setPlaceholderText(QCoreApplication::translate("StudentWindow", "\350\257\267\350\276\223\345\205\245\346\225\231\345\270\210\347\253\257IP", nullptr));
        btnEnterClass->setText(QCoreApplication::translate("StudentWindow", "\350\277\233\345\205\245\350\257\276\345\240\202", nullptr));
        btnExitClass->setText(QCoreApplication::translate("StudentWindow", "\351\200\200\345\207\272\350\257\276\345\240\202", nullptr));
        btnSend->setText(QCoreApplication::translate("StudentWindow", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentWindow: public Ui_StudentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTWINDOW_H
