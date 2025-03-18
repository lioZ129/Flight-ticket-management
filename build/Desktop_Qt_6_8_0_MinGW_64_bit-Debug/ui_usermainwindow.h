/********************************************************************************
** Form generated from reading UI file 'usermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMAINWINDOW_H
#define UI_USERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserMainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
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
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserMainWindow)
    {
        if (UserMainWindow->objectName().isEmpty())
            UserMainWindow->setObjectName("UserMainWindow");
        UserMainWindow->resize(917, 811);
        centralwidget = new QWidget(UserMainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        widget_22 = new QWidget(centralwidget);
        widget_22->setObjectName("widget_22");
        horizontalLayout_13 = new QHBoxLayout(widget_22);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

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

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_14);


        verticalLayout->addWidget(widget_22);

        UserMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(UserMainWindow);
        statusbar->setObjectName("statusbar");
        UserMainWindow->setStatusBar(statusbar);

        retranslateUi(UserMainWindow);

        QMetaObject::connectSlotsByName(UserMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UserMainWindow)
    {
        UserMainWindow->setWindowTitle(QCoreApplication::translate("UserMainWindow", "MainWindow", nullptr));
        label_22->setText(QCoreApplication::translate("UserMainWindow", "\350\265\267\347\202\271", nullptr));
        ReverseBtn->setText(QCoreApplication::translate("UserMainWindow", "\351\242\240\345\200\222", nullptr));
        label_23->setText(QCoreApplication::translate("UserMainWindow", "\347\273\210\347\202\271", nullptr));
        FilterBtn->setText(QCoreApplication::translate("UserMainWindow", "\347\255\233\351\200\211", nullptr));
        label_24->setText(QCoreApplication::translate("UserMainWindow", "\346\220\234\347\264\242\350\210\252\347\217\255", nullptr));
        SeekBtn->setText(QCoreApplication::translate("UserMainWindow", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserMainWindow: public Ui_UserMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMAINWINDOW_H
