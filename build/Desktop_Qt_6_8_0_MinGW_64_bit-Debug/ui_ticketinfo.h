/********************************************************************************
** Form generated from reading UI file 'ticketinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETINFO_H
#define UI_TICKETINFO_H

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

class Ui_TicketInfo
{
public:
    QHBoxLayout *horizontalLayout_5;
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
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *SeatIdLine;
    QPushButton *RefundTicketBtn;

    void setupUi(QWidget *TicketInfo)
    {
        if (TicketInfo->objectName().isEmpty())
            TicketInfo->setObjectName("TicketInfo");
        TicketInfo->resize(770, 200);
        TicketInfo->setMinimumSize(QSize(0, 200));
        horizontalLayout_5 = new QHBoxLayout(TicketInfo);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        widget_6 = new QWidget(TicketInfo);
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
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227\357\274\214\344\270\216\345\257\271\350\257\235\346\241\206\345\222\214\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262\347\233\270\345\220\214 */\n"
"    font-size: 14px; /* \344\270\216\346\214\211\351\222\256\343\200\201\345\257\271\350\257\235\346\241\206\345\222\214\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\347\233\270\345\220\214\347\232\204\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-weight: normal; /* \351\273\230\350\256\244\345\255\227\344\275\223\347\262\227\347\273\206\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    margin: 5px 0; /* \344\270\212\344\270\213\345\244\226\350\276\271\350\267\235\357\274\214\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    background-color: transparent; /* \351\200"
                        "\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\350\246\206\347\233\226\346\240\207\347\255\276\344\270\213\347\232\204\345\206\205\345\256\271 */\n"
"}\n"
"\n"
"QLabel:disabled {\n"
"    color: #888888; /* \347\246\201\347\224\250\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\345\217\230\346\232\227\357\274\214\344\270\216\347\246\201\347\224\250\347\212\266\346\200\201\347\232\204\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\344\270\200\350\207\264 */\n"
"}"));

        horizontalLayout->addWidget(label);

        StartPoint = new QLineEdit(widget);
        StartPoint->setObjectName("StartPoint");
        StartPoint->setMaximumSize(QSize(50, 16777215));
        StartPoint->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #e0f7fa; /* \346\265\205\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"    border: 2px solid #4fc3f7; /* \350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 4px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    color: #005f6a; /* \346\267\261\350\223\235\350\211\262\346\226\207\346\234\254 */\n"
"    selection-background-color: #4fc3f7; /* \351\200\211\344\270\255\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    selection-color: #ffffff; /* \351\200\211\344\270\255\346\227\266\347\232\204\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #00796b; /* \350\201\232\347\204\246\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\346\267\261 */\n"
"    box-shadow: 0 0 4px rgba(0, 121, 107, 0.5); /* \350\201\232\347\204\246\346\227\266\351\230\264\345\275\261\346"
                        "\225\210\346\236\234 */\n"
"}\n"
"\n"
"QLineEdit:disabled {\n"
"    background-color: #d3e5f3; /* \347\246\201\347\224\250\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\345\217\230\346\265\205 */\n"
"    border-color: #a1c4dd; /* \347\246\201\347\224\250\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\346\265\205 */\n"
"    color: #6d8cac; /* \347\246\201\347\224\250\346\227\266\346\226\207\346\234\254\351\242\234\350\211\262\345\217\230\346\232\227 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #6d8cac; /* \345\215\240\344\275\215\347\254\246\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    font-style: italic; /* \345\215\240\344\275\215\347\254\246\346\226\207\346\234\254\346\226\234\344\275\223 */\n"
"}"));
        StartPoint->setReadOnly(true);

        horizontalLayout->addWidget(StartPoint);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(70, 50));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227\357\274\214\344\270\216\345\257\271\350\257\235\346\241\206\345\222\214\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262\347\233\270\345\220\214 */\n"
"    font-size: 14px; /* \344\270\216\346\214\211\351\222\256\343\200\201\345\257\271\350\257\235\346\241\206\345\222\214\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\347\233\270\345\220\214\347\232\204\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-weight: normal; /* \351\273\230\350\256\244\345\255\227\344\275\223\347\262\227\347\273\206\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    margin: 5px 0; /* \344\270\212\344\270\213\345\244\226\350\276\271\350\267\235\357\274\214\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    background-color: transparent; /* \351\200"
                        "\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\350\246\206\347\233\226\346\240\207\347\255\276\344\270\213\347\232\204\345\206\205\345\256\271 */\n"
"}\n"
"\n"
"QLabel:disabled {\n"
"    color: #888888; /* \347\246\201\347\224\250\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\345\217\230\346\232\227\357\274\214\344\270\216\347\246\201\347\224\250\347\212\266\346\200\201\347\232\204\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\344\270\200\350\207\264 */\n"
"}"));

        horizontalLayout->addWidget(label_5);

        FlightId = new QLineEdit(widget);
        FlightId->setObjectName("FlightId");
        FlightId->setMaximumSize(QSize(80, 16777215));
        FlightId->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #e6e6fa; /* \346\265\205\347\264\253\350\211\262\350\203\214\346\231\257 */\n"
"    border: 2px solid #9b59b6; /* \347\264\253\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 4px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    color: #4b0082; /* \346\267\261\347\264\253\350\211\262\346\226\207\346\234\254\357\274\210\344\270\216\346\265\205\347\264\253\350\211\262\350\203\214\346\231\257\345\275\242\346\210\220\345\257\271\346\257\224\357\274\211 */\n"
"    selection-background-color: #9b59b6; /* \351\200\211\344\270\255\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\210\344\270\216\350\276\271\346\241\206\351\242\234\350\211\262\347\233\270\345\220\214\357\274\211 */\n"
"    selection-color: #ffffff; /* \351\200\211\344\270\255\346\227\266\347\232\204\346\226\207\346\234\254\351\242\234\350\211\262\357\274\210\347\231\275\350\211\262\357\274\211 "
                        "*/\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #6a0dad; /* \350\201\232\347\204\246\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\346\267\261\344\270\272\346\267\261\347\264\253\350\211\262 */\n"
"    box-shadow: 0 0 4px rgba(106, 13, 173, 0.5); /* \350\201\232\347\204\246\346\227\266\351\230\264\345\275\261\346\225\210\346\236\234\344\275\277\347\224\250\346\267\261\347\264\253\350\211\262RGBA */\n"
"}\n"
"\n"
"QLineEdit:disabled {\n"
"    background-color: #d8bfd8; /* \347\246\201\347\224\250\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\345\217\230\344\270\272\346\233\264\346\265\205\347\232\204\347\264\253\350\211\262 */\n"
"    border-color: #b09cd9; /* \347\246\201\347\224\250\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\344\270\272\346\233\264\346\265\205\347\232\204\347\264\253\350\211\262 */\n"
"    color: #800080; /* \347\246\201\347\224\250\346\227\266\346\226\207\346\234\254\351\242\234\350\211\262\345\217\230\344\270\272"
                        "\344\270\255\347\264\253\350\211\262 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #800080; /* \345\215\240\344\275\215\347\254\246\346\226\207\346\234\254\351\242\234\350\211\262\344\275\277\347\224\250\344\270\255\347\264\253\350\211\262 */\n"
"    font-style: italic; /* \345\215\240\344\275\215\347\254\246\346\226\207\346\234\254\346\226\234\344\275\223 */\n"
"}"));
        FlightId->setReadOnly(true);

        horizontalLayout->addWidget(FlightId);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(50, 50));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227\357\274\214\344\270\216\345\257\271\350\257\235\346\241\206\345\222\214\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262\347\233\270\345\220\214 */\n"
"    font-size: 14px; /* \344\270\216\346\214\211\351\222\256\343\200\201\345\257\271\350\257\235\346\241\206\345\222\214\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\347\233\270\345\220\214\347\232\204\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-weight: normal; /* \351\273\230\350\256\244\345\255\227\344\275\223\347\262\227\347\273\206\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    margin: 5px 0; /* \344\270\212\344\270\213\345\244\226\350\276\271\350\267\235\357\274\214\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    background-color: transparent; /* \351\200"
                        "\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\350\246\206\347\233\226\346\240\207\347\255\276\344\270\213\347\232\204\345\206\205\345\256\271 */\n"
"}\n"
"\n"
"QLabel:disabled {\n"
"    color: #888888; /* \347\246\201\347\224\250\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\345\217\230\346\232\227\357\274\214\344\270\216\347\246\201\347\224\250\347\212\266\346\200\201\347\232\204\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\344\270\200\350\207\264 */\n"
"}"));

        horizontalLayout->addWidget(label_2);

        EndPoint = new QLineEdit(widget);
        EndPoint->setObjectName("EndPoint");
        EndPoint->setMaximumSize(QSize(50, 16777215));
        EndPoint->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffe6e6; /* \346\265\205\347\272\242\350\211\262\350\203\214\346\231\257 */\n"
"    border: 2px solid #ff6347; /* \351\262\234\347\272\242\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 4px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    color: #8b0000; /* \346\232\227\347\272\242\350\211\262\346\226\207\346\234\254 */\n"
"    selection-background-color: #ff4500; /* \351\200\211\344\270\255\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\210\346\251\231\350\211\262\347\272\242\357\274\211 */\n"
"    selection-color: #ffffff; /* \351\200\211\344\270\255\346\227\266\347\232\204\346\226\207\346\234\254\351\242\234\350\211\262\357\274\210\347\231\275\350\211\262\357\274\211 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #dc143c; /* \350\201\232\347\204\246\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\344\270\272\346"
                        "\233\264\346\267\261\347\232\204\347\272\242\350\211\262 */\n"
"    box-shadow: 0 0 4px rgba(220, 20, 60, 0.5); /* \350\201\232\347\204\246\346\227\266\351\230\264\345\275\261\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"QLineEdit:disabled {\n"
"    background-color: #f5dcdc; /* \347\246\201\347\224\250\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\345\217\230\346\265\205 */\n"
"    border-color: #e9967a; /* \347\246\201\347\224\250\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\346\265\205 */\n"
"    color: #a52a2a; /* \347\246\201\347\224\250\346\227\266\346\226\207\346\234\254\351\242\234\350\211\262\345\217\230\346\232\227 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #a52a2a; /* \345\215\240\344\275\215\347\254\246\346\226\207\346\234\254\351\242\234\350\211\262\357\274\210\346\232\227\347\272\242\350\211\262\357\274\211 */\n"
"    font-style: italic; /* \345\215\240\344\275\215\347\254\246\346\226\207\346\234\254\346\226\234\344\275\223 */\n"
"}"));
        EndPoint->setReadOnly(true);

        horizontalLayout->addWidget(EndPoint);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(100, 16777215));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227\357\274\214\344\270\216\345\257\271\350\257\235\346\241\206\345\222\214\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262\347\233\270\345\220\214 */\n"
"    font-size: 14px; /* \344\270\216\346\214\211\351\222\256\343\200\201\345\257\271\350\257\235\346\241\206\345\222\214\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\347\233\270\345\220\214\347\232\204\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-weight: normal; /* \351\273\230\350\256\244\345\255\227\344\275\223\347\262\227\347\273\206\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    margin: 5px 0; /* \344\270\212\344\270\213\345\244\226\350\276\271\350\267\235\357\274\214\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    background-color: transparent; /* \351\200"
                        "\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\350\246\206\347\233\226\346\240\207\347\255\276\344\270\213\347\232\204\345\206\205\345\256\271 */\n"
"}\n"
"\n"
"QLabel:disabled {\n"
"    color: #888888; /* \347\246\201\347\224\250\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\345\217\230\346\232\227\357\274\214\344\270\216\347\246\201\347\224\250\347\212\266\346\200\201\347\232\204\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\344\270\200\350\207\264 */\n"
"}"));

        horizontalLayout_2->addWidget(label_3);

        StartTime = new QDateTimeEdit(widget_2);
        StartTime->setObjectName("StartTime");
        StartTime->setReadOnly(true);

        horizontalLayout_2->addWidget(StartTime);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        FlyTime = new QLineEdit(widget_2);
        FlyTime->setObjectName("FlyTime");
        FlyTime->setMinimumSize(QSize(50, 0));
        FlyTime->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #e0ffe0; /* \346\265\205\347\273\277\350\211\262\350\203\214\346\231\257 */\n"
"    border: 2px solid #32cd32; /* \347\273\277\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 4px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    color: #000000; /* \351\273\221\350\211\262\346\226\207\346\234\254\357\274\210\344\270\216\346\265\205\347\273\277\350\211\262\350\203\214\346\231\257\345\275\242\346\210\220\345\257\271\346\257\224\357\274\211 */\n"
"    selection-background-color: #90ee90; /* \351\200\211\344\270\255\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\210\346\257\224\350\276\271\346\241\206\347\250\215\346\265\205\347\232\204\347\273\277\350\211\262\357\274\211 */\n"
"    selection-color: #000000; /* \351\200\211\344\270\255\346\227\266\347\232\204\346\226\207\346\234\254\351\242\234\350\211\262\357\274\210\351\273\221\350\211\262\357\274\211 "
                        "*/\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #006400; /* \350\201\232\347\204\246\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\346\267\261\344\270\272\346\267\261\347\273\277\350\211\262 */\n"
"    box-shadow: 0 0 4px rgba(0, 100, 0, 0.5); /* \350\201\232\347\204\246\346\227\266\351\230\264\345\275\261\346\225\210\346\236\234\344\275\277\347\224\250\346\267\261\347\273\277\350\211\262RGBA */\n"
"}\n"
"\n"
"QLineEdit:disabled {\n"
"    background-color: #d3f5d3; /* \347\246\201\347\224\250\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\345\217\230\344\270\272\346\233\264\346\265\205\347\232\204\347\273\277\350\211\262 */\n"
"    border-color: #98fb98; /* \347\246\201\347\224\250\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\344\270\272\344\270\216\346\265\205\347\273\277\350\211\262\347\233\270\345\215\217\350\260\203\347\232\204\346\265\205\350\211\262 */\n"
"    color: #556b2f; /* \347\246\201\347\224\250\346\227\266\346\226\207\346"
                        "\234\254\351\242\234\350\211\262\345\217\230\344\270\272\346\267\261\347\273\277\350\211\262\357\274\210\344\270\216\346\265\205\347\273\277\350\211\262\347\233\270\345\215\217\350\260\203\357\274\211 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #556b2f; /* \345\215\240\344\275\215\347\254\246\346\226\207\346\234\254\351\242\234\350\211\262\344\275\277\347\224\250\346\267\261\347\273\277\350\211\262\357\274\210\344\270\216\346\265\205\347\273\277\350\211\262\347\233\270\345\215\217\350\260\203\357\274\211 */\n"
"    font-style: italic; /* \345\215\240\344\275\215\347\254\246\346\226\207\346\234\254\346\226\234\344\275\223 */\n"
"}"));
        FlyTime->setReadOnly(true);

        horizontalLayout_2->addWidget(FlyTime);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227\357\274\214\344\270\216\345\257\271\350\257\235\346\241\206\345\222\214\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262\347\233\270\345\220\214 */\n"
"    font-size: 14px; /* \344\270\216\346\214\211\351\222\256\343\200\201\345\257\271\350\257\235\346\241\206\345\222\214\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\347\233\270\345\220\214\347\232\204\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-weight: normal; /* \351\273\230\350\256\244\345\255\227\344\275\223\347\262\227\347\273\206\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    margin: 5px 0; /* \344\270\212\344\270\213\345\244\226\350\276\271\350\267\235\357\274\214\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    background-color: transparent; /* \351\200"
                        "\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\350\246\206\347\233\226\346\240\207\347\255\276\344\270\213\347\232\204\345\206\205\345\256\271 */\n"
"}\n"
"\n"
"QLabel:disabled {\n"
"    color: #888888; /* \347\246\201\347\224\250\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\345\217\230\346\232\227\357\274\214\344\270\216\347\246\201\347\224\250\347\212\266\346\200\201\347\232\204\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\344\270\200\350\207\264 */\n"
"}"));

        horizontalLayout_2->addWidget(label_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(100, 16777215));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227\357\274\214\344\270\216\345\257\271\350\257\235\346\241\206\345\222\214\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262\347\233\270\345\220\214 */\n"
"    font-size: 14px; /* \344\270\216\346\214\211\351\222\256\343\200\201\345\257\271\350\257\235\346\241\206\345\222\214\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\347\233\270\345\220\214\347\232\204\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-weight: normal; /* \351\273\230\350\256\244\345\255\227\344\275\223\347\262\227\347\273\206\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    margin: 5px 0; /* \344\270\212\344\270\213\345\244\226\350\276\271\350\267\235\357\274\214\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    background-color: transparent; /* \351\200"
                        "\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\350\246\206\347\233\226\346\240\207\347\255\276\344\270\213\347\232\204\345\206\205\345\256\271 */\n"
"}\n"
"\n"
"QLabel:disabled {\n"
"    color: #888888; /* \347\246\201\347\224\250\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\345\217\230\346\232\227\357\274\214\344\270\216\347\246\201\347\224\250\347\212\266\346\200\201\347\232\204\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\344\270\200\350\207\264 */\n"
"}"));

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
        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName("widget_4");
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_6 = new QLabel(widget_4);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227\357\274\214\344\270\216\345\257\271\350\257\235\346\241\206\345\222\214\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262\347\233\270\345\220\214 */\n"
"    font-size: 14px; /* \344\270\216\346\214\211\351\222\256\343\200\201\345\257\271\350\257\235\346\241\206\345\222\214\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\347\233\270\345\220\214\347\232\204\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-weight: normal; /* \351\273\230\350\256\244\345\255\227\344\275\223\347\262\227\347\273\206\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    margin: 5px 0; /* \344\270\212\344\270\213\345\244\226\350\276\271\350\267\235\357\274\214\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    background-color: transparent; /* \351\200"
                        "\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\350\246\206\347\233\226\346\240\207\347\255\276\344\270\213\347\232\204\345\206\205\345\256\271 */\n"
"}\n"
"\n"
"QLabel:disabled {\n"
"    color: #888888; /* \347\246\201\347\224\250\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\345\217\230\346\232\227\357\274\214\344\270\216\347\246\201\347\224\250\347\212\266\346\200\201\347\232\204\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\344\270\200\350\207\264 */\n"
"}"));

        horizontalLayout_3->addWidget(label_6);

        SeatIdLine = new QLineEdit(widget_4);
        SeatIdLine->setObjectName("SeatIdLine");
        SeatIdLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #e0ffe0; /* \346\265\205\351\235\222\350\211\262\350\203\214\346\231\257 */\n"
"    border: 2px solid #7fffd4; /* \351\235\222\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 4px; /* \345\234\206\350\247\222\350\276\271\346\241\206\344\277\235\346\214\201\344\270\215\345\217\230 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235\344\277\235\346\214\201\344\270\215\345\217\230 */\n"
"    color: #006400; /* \346\267\261\347\273\277\350\211\262\346\226\207\346\234\254\357\274\214\344\270\216\351\235\222\350\211\262\345\275\242\346\210\220\345\257\271\346\257\224 */\n"
"    selection-background-color: #7fffd4; /* \351\200\211\344\270\255\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\344\270\216\350\276\271\346\241\206\351\242\234\350\211\262\347\233\270\345\220\214 */\n"
"    selection-color: #000000; /* \351\200\211\344\270\255\346\227\266\347\232\204\346\226\207\346\234\254\351\242\234\350\211\262\344\270\272\351\273\221\350"
                        "\211\262\357\274\214\347\241\256\344\277\235\345\217\257\350\257\273\346\200\247 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #008000; /* \350\201\232\347\204\246\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\344\270\272\346\233\264\346\267\261\347\232\204\351\235\222\350\211\262\357\274\210\346\210\226\347\273\277\350\211\262\357\274\211 */\n"
"    box-shadow: 0 0 4px rgba(0, 128, 0, 0.5); /* \350\201\232\347\204\246\346\227\266\351\230\264\345\275\261\346\225\210\346\236\234\344\270\272\351\235\222\350\211\262 */\n"
"}\n"
"\n"
"QLineEdit:disabled {\n"
"    background-color: #d3f5d3; /* \347\246\201\347\224\250\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\233\264\346\265\205\347\232\204\351\235\222\350\211\262 */\n"
"    border-color: #a8dadc; /* \347\246\201\347\224\250\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\344\270\272\346\233\264\346\265\205\347\232\204\351\235\222\350\211\262 */\n"
"    color: #556b2f; /* \347\246\201\347\224\250"
                        "\346\227\266\346\226\207\346\234\254\351\242\234\350\211\262\344\270\272\350\276\203\346\232\227\347\232\204\351\235\222\350\211\262\357\274\210\346\210\226\347\273\277\350\211\262\357\274\211 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #556b2f; /* \345\215\240\344\275\215\347\254\246\346\226\207\346\234\254\351\242\234\350\211\262\344\270\216\347\246\201\347\224\250\346\227\266\346\226\207\346\234\254\351\242\234\350\211\262\347\233\270\345\220\214 */\n"
"    font-style: italic; /* \345\215\240\344\275\215\347\254\246\346\226\207\346\234\254\346\226\234\344\275\223\344\277\235\346\214\201\344\270\215\345\217\230 */\n"
"}"));
        SeatIdLine->setReadOnly(true);

        horizontalLayout_3->addWidget(SeatIdLine);


        verticalLayout_2->addWidget(widget_4);

        RefundTicketBtn = new QPushButton(widget_5);
        RefundTicketBtn->setObjectName("RefundTicketBtn");
        RefundTicketBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF5733; /* \347\272\242\350\211\262\350\203\214\346\231\257 */\n"
"    border: 2px solid #B22222; /* \346\267\261\347\272\242\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 8px; /* \345\234\206\350\247\222\350\276\271\346\241\206\344\277\235\346\214\201\344\270\215\345\217\230 */\n"
"    color: #ffffff; /* \347\231\275\350\211\262\346\226\207\346\234\254\344\277\235\346\214\201\344\270\215\345\217\230 */\n"
"    padding: 10px 20px; /* \345\206\205\350\276\271\350\267\235\344\277\235\346\214\201\344\270\215\345\217\230 */\n"
"    font-size: 16px; /* \345\255\227\344\275\223\345\244\247\345\260\217\344\277\235\346\214\201\344\270\215\345\217\230 */\n"
"    min-width: 100px; /* \346\234\200\345\260\217\345\256\275\345\272\246\344\277\235\346\214\201\344\270\215\345\217\230 */\n"
"    transition: background-color 0.3s, border-color 0.3s; /* \345\271\263\346\273\221\350\277\207\346\270\241\346\225\210\346\236\234\344\277\235\346\214\201\344\270\215\345\217\230"
                        " */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #FF7F50; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\345\217\230\344\270\272\346\265\205\347\272\242\350\211\262 */\n"
"    border-color: #FF4500; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\344\270\272\346\251\231\350\211\262\347\272\242 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C70039; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\345\217\230\344\270\272\346\267\261\347\272\242\350\211\262 */\n"
"    border-color: #8B0000; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\344\270\272\346\233\264\346\267\261\347\232\204\347\272\242\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #FFCCCC; /* \347\246\201\347\224\250\346\227\266\350\203\214\346\231\257\351\242"
                        "\234\350\211\262\345\217\230\344\270\272\346\265\205\347\262\211\347\272\242\350\211\262 */\n"
"    border-color: #FF6347; /* \347\246\201\347\224\250\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\344\270\272\347\225\252\350\214\204\347\272\242 */\n"
"    color: #888888; /* \347\246\201\347\224\250\346\227\266\346\226\207\346\234\254\351\242\234\350\211\262\344\277\235\346\214\201\344\270\272\347\201\260\350\211\262\357\274\214\346\210\226\345\217\257\346\240\271\346\215\256\351\234\200\346\261\202\350\260\203\346\225\264 */\n"
"}"));

        verticalLayout_2->addWidget(RefundTicketBtn);


        horizontalLayout_4->addWidget(widget_5);


        horizontalLayout_5->addWidget(widget_6);


        retranslateUi(TicketInfo);

        QMetaObject::connectSlotsByName(TicketInfo);
    } // setupUi

    void retranslateUi(QWidget *TicketInfo)
    {
        TicketInfo->setWindowTitle(QCoreApplication::translate("TicketInfo", "Form", nullptr));
        label->setText(QCoreApplication::translate("TicketInfo", "\350\265\267\347\202\271", nullptr));
        label_5->setText(QCoreApplication::translate("TicketInfo", "\350\210\252\347\217\255\347\274\226\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("TicketInfo", "\347\273\210\347\202\271", nullptr));
        label_3->setText(QCoreApplication::translate("TicketInfo", "\351\242\204\350\256\241\350\265\267\351\243\236\346\227\266\351\227\264", nullptr));
        label_7->setText(QCoreApplication::translate("TicketInfo", "\345\260\217\346\227\266", nullptr));
        label_4->setText(QCoreApplication::translate("TicketInfo", "\351\242\204\350\256\241\351\231\215\350\220\275\346\227\266\351\227\264", nullptr));
        label_6->setText(QCoreApplication::translate("TicketInfo", "\345\272\247\344\275\215\345\217\267", nullptr));
        RefundTicketBtn->setText(QCoreApplication::translate("TicketInfo", "\351\200\200\347\245\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicketInfo: public Ui_TicketInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETINFO_H
