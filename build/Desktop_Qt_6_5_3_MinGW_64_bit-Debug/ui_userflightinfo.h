/********************************************************************************
** Form generated from reading UI file 'userflightinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERFLIGHTINFO_H
#define UI_USERFLIGHTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserFlightInfo
{
public:
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *StartPoint;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QLineEdit *FlightId;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLineEdit *EndPoint;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDateTimeEdit *StartTime;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *FlyTime;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QDateTimeEdit *EndTime;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *PriceLine;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *RemainSeatsNum;
    QPushButton *BuyTicketBtn;

    void setupUi(QWidget *UserFlightInfo)
    {
        if (UserFlightInfo->objectName().isEmpty())
            UserFlightInfo->setObjectName("UserFlightInfo");
        UserFlightInfo->resize(722, 185);
        verticalLayout_4 = new QVBoxLayout(UserFlightInfo);
        verticalLayout_4->setObjectName("verticalLayout_4");
        widget_6 = new QWidget(UserFlightInfo);
        widget_6->setObjectName("widget_6");
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        widget_3 = new QWidget(widget_6);
        widget_3->setObjectName("widget_3");
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(widget_3);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(label);

        StartPoint = new QLineEdit(widget);
        StartPoint->setObjectName("StartPoint");
        StartPoint->setMaximumSize(QSize(50, 16777215));
        StartPoint->setReadOnly(true);

        horizontalLayout->addWidget(StartPoint);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(label_5);

        FlightId = new QLineEdit(widget);
        FlightId->setObjectName("FlightId");
        FlightId->setMaximumSize(QSize(80, 16777215));
        FlightId->setReadOnly(true);

        horizontalLayout->addWidget(FlightId);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(label_2);

        EndPoint = new QLineEdit(widget);
        EndPoint->setObjectName("EndPoint");
        EndPoint->setMaximumSize(QSize(50, 16777215));
        EndPoint->setReadOnly(true);

        horizontalLayout->addWidget(EndPoint);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(label_3);

        StartTime = new QDateTimeEdit(widget_2);
        StartTime->setObjectName("StartTime");
        StartTime->setReadOnly(true);

        horizontalLayout_2->addWidget(StartTime);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        FlyTime = new QLineEdit(widget_2);
        FlyTime->setObjectName("FlyTime");
        FlyTime->setReadOnly(true);

        horizontalLayout_2->addWidget(FlyTime);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");

        horizontalLayout_2->addWidget(label_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(label_4);

        EndTime = new QDateTimeEdit(widget_2);
        EndTime->setObjectName("EndTime");
        EndTime->setReadOnly(true);
        EndTime->setCurrentSection(QDateTimeEdit::Section::YearSection);

        horizontalLayout_2->addWidget(EndTime);


        verticalLayout->addWidget(widget_2);


        horizontalLayout_4->addWidget(widget_3);

        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName("widget_5");
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_7 = new QWidget(widget_5);
        widget_7->setObjectName("widget_7");
        verticalLayout_3 = new QVBoxLayout(widget_7);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget_8 = new QWidget(widget_7);
        widget_8->setObjectName("widget_8");
        widget_8->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_5 = new QHBoxLayout(widget_8);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_8 = new QLabel(widget_8);
        label_8->setObjectName("label_8");

        horizontalLayout_5->addWidget(label_8);

        PriceLine = new QLineEdit(widget_8);
        PriceLine->setObjectName("PriceLine");

        horizontalLayout_5->addWidget(PriceLine);


        verticalLayout_3->addWidget(widget_8);


        verticalLayout_2->addWidget(widget_7);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName("widget_4");
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_6 = new QLabel(widget_4);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        RemainSeatsNum = new QLineEdit(widget_4);
        RemainSeatsNum->setObjectName("RemainSeatsNum");
        RemainSeatsNum->setMinimumSize(QSize(50, 0));
        RemainSeatsNum->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(RemainSeatsNum);


        verticalLayout_2->addWidget(widget_4);

        BuyTicketBtn = new QPushButton(widget_5);
        BuyTicketBtn->setObjectName("BuyTicketBtn");

        verticalLayout_2->addWidget(BuyTicketBtn);


        horizontalLayout_4->addWidget(widget_5);


        verticalLayout_4->addWidget(widget_6);


        retranslateUi(UserFlightInfo);

        QMetaObject::connectSlotsByName(UserFlightInfo);
    } // setupUi

    void retranslateUi(QWidget *UserFlightInfo)
    {
        UserFlightInfo->setWindowTitle(QCoreApplication::translate("UserFlightInfo", "Form", nullptr));
        label->setText(QCoreApplication::translate("UserFlightInfo", "\350\265\267\347\202\271", nullptr));
        label_5->setText(QCoreApplication::translate("UserFlightInfo", "\350\210\252\347\217\255\347\274\226\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("UserFlightInfo", "\347\273\210\347\202\271", nullptr));
        label_3->setText(QCoreApplication::translate("UserFlightInfo", "\351\242\204\350\256\241\350\265\267\351\243\236\346\227\266\351\227\264", nullptr));
        label_7->setText(QCoreApplication::translate("UserFlightInfo", "\345\260\217\346\227\266", nullptr));
        label_4->setText(QCoreApplication::translate("UserFlightInfo", "\351\242\204\350\256\241\351\231\215\350\220\275\346\227\266\351\227\264", nullptr));
        label_8->setText(QCoreApplication::translate("UserFlightInfo", "\347\245\250\344\273\267", nullptr));
        label_6->setText(QCoreApplication::translate("UserFlightInfo", "\345\211\251\344\275\231\347\245\250\346\225\260", nullptr));
        BuyTicketBtn->setText(QCoreApplication::translate("UserFlightInfo", "\350\264\255\347\245\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserFlightInfo: public Ui_UserFlightInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERFLIGHTINFO_H
