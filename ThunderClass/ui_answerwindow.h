/********************************************************************************
** Form generated from reading UI file 'answerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANSWERWINDOW_H
#define UI_ANSWERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AnswerWindow
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *txtedtQues;
    QHBoxLayout *horizontalLayout;
    QTextEdit *txtedtAnswer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *ckbOptA;
    QLabel *lblOptionA;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *ckbOptB;
    QLabel *lblOptionB;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *ckbOptC;
    QLabel *lblOptionC;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *ckbOptD;
    QLabel *lblOptionD;
    QPushButton *btnSubmit;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *AnswerWindow)
    {
        if (AnswerWindow->objectName().isEmpty())
            AnswerWindow->setObjectName(QString::fromUtf8("AnswerWindow"));
        AnswerWindow->resize(890, 565);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        AnswerWindow->setFont(font);
        verticalLayout_3 = new QVBoxLayout(AnswerWindow);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(40);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        txtedtQues = new QTextEdit(AnswerWindow);
        txtedtQues->setObjectName(QString::fromUtf8("txtedtQues"));
        txtedtQues->setReadOnly(true);

        verticalLayout_2->addWidget(txtedtQues);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(40);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txtedtAnswer = new QTextEdit(AnswerWindow);
        txtedtAnswer->setObjectName(QString::fromUtf8("txtedtAnswer"));
        txtedtAnswer->setAcceptRichText(true);

        horizontalLayout->addWidget(txtedtAnswer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ckbOptA = new QCheckBox(AnswerWindow);
        ckbOptA->setObjectName(QString::fromUtf8("ckbOptA"));
        ckbOptA->setMinimumSize(QSize(0, 40));
        ckbOptA->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_4->addWidget(ckbOptA);

        lblOptionA = new QLabel(AnswerWindow);
        lblOptionA->setObjectName(QString::fromUtf8("lblOptionA"));
        lblOptionA->setMinimumSize(QSize(200, 0));

        horizontalLayout_4->addWidget(lblOptionA);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ckbOptB = new QCheckBox(AnswerWindow);
        ckbOptB->setObjectName(QString::fromUtf8("ckbOptB"));
        ckbOptB->setMinimumSize(QSize(0, 40));
        ckbOptB->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_3->addWidget(ckbOptB);

        lblOptionB = new QLabel(AnswerWindow);
        lblOptionB->setObjectName(QString::fromUtf8("lblOptionB"));

        horizontalLayout_3->addWidget(lblOptionB);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ckbOptC = new QCheckBox(AnswerWindow);
        ckbOptC->setObjectName(QString::fromUtf8("ckbOptC"));
        ckbOptC->setMinimumSize(QSize(0, 40));
        ckbOptC->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(ckbOptC);

        lblOptionC = new QLabel(AnswerWindow);
        lblOptionC->setObjectName(QString::fromUtf8("lblOptionC"));

        horizontalLayout_2->addWidget(lblOptionC);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        ckbOptD = new QCheckBox(AnswerWindow);
        ckbOptD->setObjectName(QString::fromUtf8("ckbOptD"));
        ckbOptD->setMinimumSize(QSize(0, 40));
        ckbOptD->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_6->addWidget(ckbOptD);

        lblOptionD = new QLabel(AnswerWindow);
        lblOptionD->setObjectName(QString::fromUtf8("lblOptionD"));

        horizontalLayout_6->addWidget(lblOptionD);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout->addLayout(verticalLayout);

        btnSubmit = new QPushButton(AnswerWindow);
        btnSubmit->setObjectName(QString::fromUtf8("btnSubmit"));
        btnSubmit->setMinimumSize(QSize(100, 40));
        btnSubmit->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(btnSubmit);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(AnswerWindow);

        QMetaObject::connectSlotsByName(AnswerWindow);
    } // setupUi

    void retranslateUi(QDialog *AnswerWindow)
    {
        AnswerWindow->setWindowTitle(QCoreApplication::translate("AnswerWindow", "\350\257\267\345\233\236\347\255\224\351\227\256\351\242\230...", nullptr));
        txtedtQues->setDocumentTitle(QString());
        txtedtQues->setMarkdown(QString());
        txtedtQues->setPlaceholderText(QCoreApplication::translate("AnswerWindow", "\350\200\201\345\270\210\347\232\204\351\227\256\351\242\230...", nullptr));
        ckbOptA->setText(QCoreApplication::translate("AnswerWindow", "A", nullptr));
        lblOptionA->setText(QCoreApplication::translate("AnswerWindow", "AnswA", nullptr));
        ckbOptB->setText(QCoreApplication::translate("AnswerWindow", "B", nullptr));
        lblOptionB->setText(QCoreApplication::translate("AnswerWindow", "AnswB", nullptr));
        ckbOptC->setText(QCoreApplication::translate("AnswerWindow", "C", nullptr));
        lblOptionC->setText(QCoreApplication::translate("AnswerWindow", "AnswC", nullptr));
        ckbOptD->setText(QCoreApplication::translate("AnswerWindow", "D", nullptr));
        lblOptionD->setText(QCoreApplication::translate("AnswerWindow", "AnswD", nullptr));
        btnSubmit->setText(QCoreApplication::translate("AnswerWindow", "\346\217\220\344\272\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnswerWindow: public Ui_AnswerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANSWERWINDOW_H
