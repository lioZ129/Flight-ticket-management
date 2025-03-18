/********************************************************************************
** Form generated from reading UI file 'userhomepage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERHOMEPAGE_H
#define UI_USERHOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserHomePage
{
public:
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
    QScrollArea *UserShowFlightIArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *UserHomePage)
    {
        if (UserHomePage->objectName().isEmpty())
            UserHomePage->setObjectName("UserHomePage");
        UserHomePage->resize(833, 634);
        verticalLayout = new QVBoxLayout(UserHomePage);
        verticalLayout->setObjectName("verticalLayout");
        widget_22 = new QWidget(UserHomePage);
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


        verticalLayout->addWidget(widget_22);

        UserShowFlightIArea = new QScrollArea(UserHomePage);
        UserShowFlightIArea->setObjectName("UserShowFlightIArea");
        UserShowFlightIArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 813, 567));
        UserShowFlightIArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(UserShowFlightIArea);


        retranslateUi(UserHomePage);

        QMetaObject::connectSlotsByName(UserHomePage);
    } // setupUi

    void retranslateUi(QWidget *UserHomePage)
    {
        UserHomePage->setWindowTitle(QCoreApplication::translate("UserHomePage", "Form", nullptr));
        label_22->setText(QCoreApplication::translate("UserHomePage", "\350\265\267\347\202\271", nullptr));
        ReverseBtn->setText(QCoreApplication::translate("UserHomePage", "\351\242\240\345\200\222", nullptr));
        label_23->setText(QCoreApplication::translate("UserHomePage", "\347\273\210\347\202\271", nullptr));
        FilterBtn->setText(QCoreApplication::translate("UserHomePage", "\347\255\233\351\200\211", nullptr));
        label_24->setText(QCoreApplication::translate("UserHomePage", "\346\220\234\347\264\242\350\210\252\347\217\255", nullptr));
        SeekBtn->setText(QCoreApplication::translate("UserHomePage", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserHomePage: public Ui_UserHomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERHOMEPAGE_H
