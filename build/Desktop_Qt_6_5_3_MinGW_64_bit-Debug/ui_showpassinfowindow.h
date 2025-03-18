/********************************************************************************
** Form generated from reading UI file 'showpassinfowindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWPASSINFOWINDOW_H
#define UI_SHOWPASSINFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowPassInfoWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QScrollArea *ShowPassArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *ShowPassInfoWindow)
    {
        if (ShowPassInfoWindow->objectName().isEmpty())
            ShowPassInfoWindow->setObjectName("ShowPassInfoWindow");
        ShowPassInfoWindow->resize(500, 403);
        horizontalLayout = new QHBoxLayout(ShowPassInfoWindow);
        horizontalLayout->setObjectName("horizontalLayout");
        ShowPassArea = new QScrollArea(ShowPassInfoWindow);
        ShowPassArea->setObjectName("ShowPassArea");
        ShowPassArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 480, 383));
        ShowPassArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(ShowPassArea);


        retranslateUi(ShowPassInfoWindow);

        QMetaObject::connectSlotsByName(ShowPassInfoWindow);
    } // setupUi

    void retranslateUi(QWidget *ShowPassInfoWindow)
    {
        ShowPassInfoWindow->setWindowTitle(QCoreApplication::translate("ShowPassInfoWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowPassInfoWindow: public Ui_ShowPassInfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPASSINFOWINDOW_H
