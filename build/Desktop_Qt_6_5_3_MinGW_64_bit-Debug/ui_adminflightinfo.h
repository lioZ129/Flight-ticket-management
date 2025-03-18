/********************************************************************************
** Form generated from reading UI file 'adminflightinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINFLIGHTINFO_H
#define UI_ADMINFLIGHTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminFlightInfo
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
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
    QLineEdit *FlyTime;
    QLabel *label_6;
    QLabel *label_4;
    QDateTimeEdit *EndTime;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *PriceLine;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *RemainSeatsNum;
    QPushButton *ShowPassInfoBtn;
    QCheckBox *ChangeInfoBox;
    QPushButton *SaveChangeBtn;

    void setupUi(QWidget *AdminFlightInfo)
    {
        if (AdminFlightInfo->objectName().isEmpty())
            AdminFlightInfo->setObjectName("AdminFlightInfo");
        AdminFlightInfo->resize(720, 221);
        verticalLayout_3 = new QVBoxLayout(AdminFlightInfo);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget_5 = new QWidget(AdminFlightInfo);
        widget_5->setObjectName("widget_5");
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        widget_3 = new QWidget(widget_5);
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

        FlyTime = new QLineEdit(widget_2);
        FlyTime->setObjectName("FlyTime");
        FlyTime->setReadOnly(true);

        horizontalLayout_2->addWidget(FlyTime);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(label_4);

        EndTime = new QDateTimeEdit(widget_2);
        EndTime->setObjectName("EndTime");
        EndTime->setReadOnly(true);

        horizontalLayout_2->addWidget(EndTime);


        verticalLayout->addWidget(widget_2);


        horizontalLayout_3->addWidget(widget_3);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName("widget_4");
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName("widget_6");
        widget_6->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_7 = new QLabel(widget_6);
        label_7->setObjectName("label_7");

        horizontalLayout_4->addWidget(label_7);

        PriceLine = new QLineEdit(widget_6);
        PriceLine->setObjectName("PriceLine");
        PriceLine->setReadOnly(true);

        horizontalLayout_4->addWidget(PriceLine);


        verticalLayout_2->addWidget(widget_6);

        widget_7 = new QWidget(widget_4);
        widget_7->setObjectName("widget_7");
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_8 = new QLabel(widget_7);
        label_8->setObjectName("label_8");

        horizontalLayout_5->addWidget(label_8);

        RemainSeatsNum = new QLineEdit(widget_7);
        RemainSeatsNum->setObjectName("RemainSeatsNum");

        horizontalLayout_5->addWidget(RemainSeatsNum);


        verticalLayout_2->addWidget(widget_7);

        ShowPassInfoBtn = new QPushButton(widget_4);
        ShowPassInfoBtn->setObjectName("ShowPassInfoBtn");

        verticalLayout_2->addWidget(ShowPassInfoBtn);

        ChangeInfoBox = new QCheckBox(widget_4);
        ChangeInfoBox->setObjectName("ChangeInfoBox");

        verticalLayout_2->addWidget(ChangeInfoBox);

        SaveChangeBtn = new QPushButton(widget_4);
        SaveChangeBtn->setObjectName("SaveChangeBtn");

        verticalLayout_2->addWidget(SaveChangeBtn);


        horizontalLayout_3->addWidget(widget_4);


        verticalLayout_3->addWidget(widget_5);


        retranslateUi(AdminFlightInfo);

        QMetaObject::connectSlotsByName(AdminFlightInfo);
    } // setupUi

    void retranslateUi(QWidget *AdminFlightInfo)
    {
        AdminFlightInfo->setWindowTitle(QCoreApplication::translate("AdminFlightInfo", "Form", nullptr));
        label->setText(QCoreApplication::translate("AdminFlightInfo", "\350\265\267\347\202\271", nullptr));
        label_5->setText(QCoreApplication::translate("AdminFlightInfo", "\350\210\252\347\217\255\347\274\226\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("AdminFlightInfo", "\347\273\210\347\202\271", nullptr));
        label_3->setText(QCoreApplication::translate("AdminFlightInfo", "\351\242\204\350\256\241\350\265\267\351\243\236\346\227\266\351\227\264", nullptr));
        label_6->setText(QCoreApplication::translate("AdminFlightInfo", "\345\260\217\346\227\266", nullptr));
        label_4->setText(QCoreApplication::translate("AdminFlightInfo", "\351\242\204\350\256\241\351\231\215\350\220\275\346\227\266\351\227\264", nullptr));
        label_7->setText(QCoreApplication::translate("AdminFlightInfo", "\347\245\250\344\273\267", nullptr));
        label_8->setText(QCoreApplication::translate("AdminFlightInfo", "\345\211\251\344\275\231\347\245\250\346\225\260", nullptr));
        ShowPassInfoBtn->setText(QCoreApplication::translate("AdminFlightInfo", "\346\237\245\347\234\213\344\271\230\345\256\242\344\277\241\346\201\257", nullptr));
        ChangeInfoBox->setText(QCoreApplication::translate("AdminFlightInfo", "\344\277\256\346\224\271\350\210\252\347\217\255\344\277\241\346\201\257", nullptr));
        SaveChangeBtn->setText(QCoreApplication::translate("AdminFlightInfo", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminFlightInfo: public Ui_AdminFlightInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINFLIGHTINFO_H
