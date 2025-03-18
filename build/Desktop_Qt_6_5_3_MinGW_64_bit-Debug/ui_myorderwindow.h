/********************************************************************************
** Form generated from reading UI file 'myorderwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYORDERWINDOW_H
#define UI_MYORDERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyOrderWindow
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *TicketShowArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *MyOrderWindow)
    {
        if (MyOrderWindow->objectName().isEmpty())
            MyOrderWindow->setObjectName("MyOrderWindow");
        MyOrderWindow->resize(630, 484);
        verticalLayout = new QVBoxLayout(MyOrderWindow);
        verticalLayout->setObjectName("verticalLayout");
        TicketShowArea = new QScrollArea(MyOrderWindow);
        TicketShowArea->setObjectName("TicketShowArea");
        TicketShowArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 610, 464));
        TicketShowArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(TicketShowArea);


        retranslateUi(MyOrderWindow);

        QMetaObject::connectSlotsByName(MyOrderWindow);
    } // setupUi

    void retranslateUi(QWidget *MyOrderWindow)
    {
        MyOrderWindow->setWindowTitle(QCoreApplication::translate("MyOrderWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyOrderWindow: public Ui_MyOrderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYORDERWINDOW_H
