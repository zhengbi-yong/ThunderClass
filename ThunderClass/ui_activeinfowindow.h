/********************************************************************************
** Form generated from reading UI file 'activeinfowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVEINFOWINDOW_H
#define UI_ACTIVEINFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ActiveInfoWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ActiveInfoWindow)
    {
        if (ActiveInfoWindow->objectName().isEmpty())
            ActiveInfoWindow->setObjectName(QString::fromUtf8("ActiveInfoWindow"));
        ActiveInfoWindow->resize(1006, 679);
        verticalLayout_2 = new QVBoxLayout(ActiveInfoWindow);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(ActiveInfoWindow);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOK = new QPushButton(ActiveInfoWindow);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setMinimumSize(QSize(100, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        btnOK->setFont(font);
        btnOK->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(btnOK);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ActiveInfoWindow);

        QMetaObject::connectSlotsByName(ActiveInfoWindow);
    } // setupUi

    void retranslateUi(QDialog *ActiveInfoWindow)
    {
        ActiveInfoWindow->setWindowTitle(QCoreApplication::translate("ActiveInfoWindow", "\345\255\246\347\224\237\346\263\250\346\204\217\345\212\233\344\277\241\346\201\257", nullptr));
        btnOK->setText(QCoreApplication::translate("ActiveInfoWindow", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActiveInfoWindow: public Ui_ActiveInfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVEINFOWINDOW_H
