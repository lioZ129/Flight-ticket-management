/********************************************************************************
** Form generated from reading UI file 'adminmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMAINWINDOW_H
#define UI_ADMINMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_11;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_22;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_22;
    QLineEdit *StartPointLine;
    QPushButton *ReverseBtn;
    QLabel *label_23;
    QLineEdit *EndPointLine;
    QPushButton *FilterBtn;
    QLabel *label_24;
    QLineEdit *SeekLine;
    QPushButton *SeekBtn;
    QSpacerItem *horizontalSpacer_14;
    QScrollArea *AdminShowFlightArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminMainWindow)
    {
        if (AdminMainWindow->objectName().isEmpty())
            AdminMainWindow->setObjectName("AdminMainWindow");
        AdminMainWindow->resize(736, 624);
        centralwidget = new QWidget(AdminMainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_11 = new QVBoxLayout(centralwidget);
        verticalLayout_11->setObjectName("verticalLayout_11");
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_22 = new QWidget(widget_2);
        widget_22->setObjectName("widget_22");
        horizontalLayout_13 = new QHBoxLayout(widget_22);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_13);

        label_22 = new QLabel(widget_22);
        label_22->setObjectName("label_22");

        horizontalLayout_13->addWidget(label_22);

        StartPointLine = new QLineEdit(widget_22);
        StartPointLine->setObjectName("StartPointLine");
        StartPointLine->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_13->addWidget(StartPointLine);

        ReverseBtn = new QPushButton(widget_22);
        ReverseBtn->setObjectName("ReverseBtn");

        horizontalLayout_13->addWidget(ReverseBtn);

        label_23 = new QLabel(widget_22);
        label_23->setObjectName("label_23");

        horizontalLayout_13->addWidget(label_23);

        EndPointLine = new QLineEdit(widget_22);
        EndPointLine->setObjectName("EndPointLine");
        EndPointLine->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_13->addWidget(EndPointLine);

        FilterBtn = new QPushButton(widget_22);
        FilterBtn->setObjectName("FilterBtn");

        horizontalLayout_13->addWidget(FilterBtn);

        label_24 = new QLabel(widget_22);
        label_24->setObjectName("label_24");

        horizontalLayout_13->addWidget(label_24);

        SeekLine = new QLineEdit(widget_22);
        SeekLine->setObjectName("SeekLine");
        SeekLine->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_13->addWidget(SeekLine);

        SeekBtn = new QPushButton(widget_22);
        SeekBtn->setObjectName("SeekBtn");

        horizontalLayout_13->addWidget(SeekBtn);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_14);


        verticalLayout_2->addWidget(widget_22);

        AdminShowFlightArea = new QScrollArea(widget_2);
        AdminShowFlightArea->setObjectName("AdminShowFlightArea");
        AdminShowFlightArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 698, 519));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        AdminShowFlightArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(AdminShowFlightArea);


        verticalLayout_11->addWidget(widget_2);

        AdminMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AdminMainWindow);
        statusbar->setObjectName("statusbar");
        AdminMainWindow->setStatusBar(statusbar);

        retranslateUi(AdminMainWindow);

        QMetaObject::connectSlotsByName(AdminMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminMainWindow)
    {
        AdminMainWindow->setWindowTitle(QCoreApplication::translate("AdminMainWindow", "MainWindow", nullptr));
        label_22->setText(QCoreApplication::translate("AdminMainWindow", "\350\265\267\347\202\271", nullptr));
        ReverseBtn->setText(QCoreApplication::translate("AdminMainWindow", "\351\242\240\345\200\222", nullptr));
        label_23->setText(QCoreApplication::translate("AdminMainWindow", "\347\273\210\347\202\271", nullptr));
        FilterBtn->setText(QCoreApplication::translate("AdminMainWindow", "\347\255\233\351\200\211", nullptr));
        label_24->setText(QCoreApplication::translate("AdminMainWindow", "\346\220\234\347\264\242\350\210\252\347\217\255", nullptr));
        SeekBtn->setText(QCoreApplication::translate("AdminMainWindow", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMainWindow: public Ui_AdminMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMAINWINDOW_H
