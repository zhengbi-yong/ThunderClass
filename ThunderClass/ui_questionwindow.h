/********************************************************************************
** Form generated from reading UI file 'questionwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONWINDOW_H
#define UI_QUESTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QuestionWindow
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *txtedtQues;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *edtQptionA;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *edtQptionB;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *edtQptionC;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *edtQptionD;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLabel *lblSendToName;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QTextEdit *txtedtAnswer;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QPushButton *btnSend;
    QPushButton *btnCount;
    QPushButton *btnQuit;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *QuestionWindow)
    {
        if (QuestionWindow->objectName().isEmpty())
            QuestionWindow->setObjectName(QString::fromUtf8("QuestionWindow"));
        QuestionWindow->resize(960, 554);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        QuestionWindow->setFont(font);
        verticalLayout_5 = new QVBoxLayout(QuestionWindow);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(40);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        txtedtQues = new QTextEdit(QuestionWindow);
        txtedtQues->setObjectName(QString::fromUtf8("txtedtQues"));
        txtedtQues->setFont(font);

        horizontalLayout_2->addWidget(txtedtQues);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(QuestionWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        edtQptionA = new QLineEdit(QuestionWindow);
        edtQptionA->setObjectName(QString::fromUtf8("edtQptionA"));
        edtQptionA->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(edtQptionA);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(QuestionWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        edtQptionB = new QLineEdit(QuestionWindow);
        edtQptionB->setObjectName(QString::fromUtf8("edtQptionB"));
        edtQptionB->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(edtQptionB);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(QuestionWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        edtQptionC = new QLineEdit(QuestionWindow);
        edtQptionC->setObjectName(QString::fromUtf8("edtQptionC"));
        edtQptionC->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(edtQptionC);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(QuestionWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        edtQptionD = new QLineEdit(QuestionWindow);
        edtQptionD->setObjectName(QString::fromUtf8("edtQptionD"));
        edtQptionD->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(edtQptionD);


        verticalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        label = new QLabel(QuestionWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        lblSendToName = new QLabel(QuestionWindow);
        lblSendToName->setObjectName(QString::fromUtf8("lblSendToName"));
        lblSendToName->setMinimumSize(QSize(100, 0));
        lblSendToName->setFont(font);

        verticalLayout_3->addWidget(lblSendToName);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        txtedtAnswer = new QTextEdit(QuestionWindow);
        txtedtAnswer->setObjectName(QString::fromUtf8("txtedtAnswer"));
        txtedtAnswer->setReadOnly(true);

        horizontalLayout_6->addWidget(txtedtAnswer);

        tableView = new QTableView(QuestionWindow);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        horizontalLayout_6->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnSend = new QPushButton(QuestionWindow);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setMinimumSize(QSize(100, 40));
        btnSend->setFont(font);

        verticalLayout->addWidget(btnSend);

        btnCount = new QPushButton(QuestionWindow);
        btnCount->setObjectName(QString::fromUtf8("btnCount"));
        btnCount->setMinimumSize(QSize(100, 40));

        verticalLayout->addWidget(btnCount);

        btnQuit = new QPushButton(QuestionWindow);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));
        btnQuit->setMinimumSize(QSize(100, 40));
        btnQuit->setFont(font);

        verticalLayout->addWidget(btnQuit);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout_5->addLayout(verticalLayout_2);


        retranslateUi(QuestionWindow);

        QMetaObject::connectSlotsByName(QuestionWindow);
    } // setupUi

    void retranslateUi(QDialog *QuestionWindow)
    {
        QuestionWindow->setWindowTitle(QCoreApplication::translate("QuestionWindow", "\350\257\267\347\274\226\350\276\221\351\227\256\351\242\230...", nullptr));
        txtedtQues->setPlaceholderText(QCoreApplication::translate("QuestionWindow", "\350\257\267\350\276\223\345\205\245\351\227\256\351\242\230...", nullptr));
        label_3->setText(QCoreApplication::translate("QuestionWindow", "A", nullptr));
        edtQptionA->setPlaceholderText(QString());
        label_4->setText(QCoreApplication::translate("QuestionWindow", "B", nullptr));
        edtQptionB->setPlaceholderText(QString());
        label_5->setText(QCoreApplication::translate("QuestionWindow", "C", nullptr));
        edtQptionC->setText(QString());
        edtQptionC->setPlaceholderText(QString());
        label_6->setText(QCoreApplication::translate("QuestionWindow", "D", nullptr));
        edtQptionD->setPlaceholderText(QString());
        label->setText(QCoreApplication::translate("QuestionWindow", "\345\217\221\351\200\201\350\207\263\357\274\232", nullptr));
        lblSendToName->setText(QCoreApplication::translate("QuestionWindow", "\345\205\250\347\217\255\345\220\214\345\255\246", nullptr));
        txtedtAnswer->setPlaceholderText(QCoreApplication::translate("QuestionWindow", "\345\255\246\347\224\237\347\232\204\345\233\236\347\255\224...", nullptr));
        btnSend->setText(QCoreApplication::translate("QuestionWindow", "\345\217\221\351\200\201", nullptr));
        btnCount->setText(QCoreApplication::translate("QuestionWindow", "\347\273\237\350\256\241", nullptr));
        btnQuit->setText(QCoreApplication::translate("QuestionWindow", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuestionWindow: public Ui_QuestionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONWINDOW_H
