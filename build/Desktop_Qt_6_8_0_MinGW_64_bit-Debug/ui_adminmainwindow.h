/********************************************************************************
** Form generated from reading UI file 'adminmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *AddFlightBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *ExitBtn;
    QSpacerItem *horizontalSpacer_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminMainWindow)
    {
        if (AdminMainWindow->objectName().isEmpty())
            AdminMainWindow->setObjectName("AdminMainWindow");
        AdminMainWindow->resize(791, 691);
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
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_13);

        label_22 = new QLabel(widget_22);
        label_22->setObjectName("label_22");
        label_22->setStyleSheet(QString::fromUtf8("QLabel {\n"
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

        horizontalLayout_13->addWidget(label_22);

        StartPointLine = new QLineEdit(widget_22);
        StartPointLine->setObjectName("StartPointLine");
        StartPointLine->setMaximumSize(QSize(50, 16777215));
        StartPointLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_13->addWidget(StartPointLine);

        ReverseBtn = new QPushButton(widget_22);
        ReverseBtn->setObjectName("ReverseBtn");
        ReverseBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #8f8f91; /* \350\256\276\347\275\256\346\214\211\351\222\256\350\276\271\346\241\206 */\n"
"    border-radius: 10px; /* \350\256\276\347\275\256\346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"    padding: 10px 20px; /* \350\256\276\347\275\256\346\214\211\351\222\256\345\206\205\350\276\271\350\267\235 */\n"
"    background-color: #d3d3d3; /* \350\256\276\347\275\256\346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: black; /* \350\256\276\347\275\256\346\226\207\346\234\254\351\242\234\350\211\262\344\270\272\351\273\221\350\211\262\357\274\214\347\241\256\344\277\235\345\234\250\346\265\205\347\201\260\350\211\262\350\203\214\346\231\257\344\270\212\346\270\205\346\231\260\345\217\257\350\247\201 */\n"
"}\n"
" \n"
"QPushButton:hover {\n"
"    background-color: #c0c0c0; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\250\215\345\276\256\346\267\261"
                        "\344\270\200\347\202\271\347\232\204\346\265\205\347\201\260\350\211\262 */\n"
"}\n"
" \n"
"QPushButton:pressed {\n"
"    background-color: #a9a9a9; /* \346\214\211\351\222\256\346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\345\206\215\346\267\261\344\270\200\347\202\271\347\232\204\346\265\205\347\201\260\350\211\262 */\n"
"}"));

        horizontalLayout_13->addWidget(ReverseBtn);

        label_23 = new QLabel(widget_22);
        label_23->setObjectName("label_23");
        label_23->setStyleSheet(QString::fromUtf8("QLabel {\n"
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

        horizontalLayout_13->addWidget(label_23);

        EndPointLine = new QLineEdit(widget_22);
        EndPointLine->setObjectName("EndPointLine");
        EndPointLine->setMaximumSize(QSize(50, 16777215));
        EndPointLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_13->addWidget(EndPointLine);

        FilterBtn = new QPushButton(widget_22);
        FilterBtn->setObjectName("FilterBtn");
        FilterBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #8f8f91; /* \350\256\276\347\275\256\346\214\211\351\222\256\350\276\271\346\241\206 */\n"
"    border-radius: 10px; /* \350\256\276\347\275\256\346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"    padding: 10px 20px; /* \350\256\276\347\275\256\346\214\211\351\222\256\345\206\205\350\276\271\350\267\235 */\n"
"    background-color: #90ee90; /* \350\256\276\347\275\256\346\265\205\347\273\277\350\211\262\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #80e080; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\250\215\345\276\256\346\267\261\344\270\200\347\202\271\347\232\204\346\265\205\347\273\277\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #70d070; /* \346\214\211\351\222\256\346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\345\206\215\346\267"
                        "\261\344\270\200\347\202\271\347\232\204\346\265\205\347\273\277\350\211\262 */\n"
"}"));

        horizontalLayout_13->addWidget(FilterBtn);

        label_24 = new QLabel(widget_22);
        label_24->setObjectName("label_24");
        label_24->setStyleSheet(QString::fromUtf8("QLabel {\n"
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

        horizontalLayout_13->addWidget(label_24);

        SeekLine = new QLineEdit(widget_22);
        SeekLine->setObjectName("SeekLine");
        SeekLine->setMaximumSize(QSize(80, 16777215));
        SeekLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_13->addWidget(SeekLine);

        SeekBtn = new QPushButton(widget_22);
        SeekBtn->setObjectName("SeekBtn");
        SeekBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #8f8f91; /* \350\256\276\347\275\256\346\214\211\351\222\256\350\276\271\346\241\206 */\n"
"    border-radius: 10px; /* \350\256\276\347\275\256\346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"    padding: 10px 20px; /* \350\256\276\347\275\256\346\214\211\351\222\256\345\206\205\350\276\271\350\267\235 */\n"
"    background-color: #90ee90; /* \350\256\276\347\275\256\346\265\205\347\273\277\350\211\262\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #80e080; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\250\215\345\276\256\346\267\261\344\270\200\347\202\271\347\232\204\346\265\205\347\273\277\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #70d070; /* \346\214\211\351\222\256\346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\345\206\215\346\267"
                        "\261\344\270\200\347\202\271\347\232\204\346\265\205\347\273\277\350\211\262 */\n"
"}"));

        horizontalLayout_13->addWidget(SeekBtn);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_14);


        verticalLayout_2->addWidget(widget_22);

        AdminShowFlightArea = new QScrollArea(widget_2);
        AdminShowFlightArea->setObjectName("AdminShowFlightArea");
        AdminShowFlightArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 753, 507));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        AdminShowFlightArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(AdminShowFlightArea);


        verticalLayout_11->addWidget(widget_2);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        AddFlightBtn = new QPushButton(widget);
        AddFlightBtn->setObjectName("AddFlightBtn");
        AddFlightBtn->setMinimumSize(QSize(0, 0));
        AddFlightBtn->setMaximumSize(QSize(100, 100));
        AddFlightBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #8f8f91; /* \350\256\276\347\275\256\346\214\211\351\222\256\350\276\271\346\241\206 */\n"
"    border-radius: 10px; /* \350\256\276\347\275\256\346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"    padding: 10px 20px; /* \350\256\276\347\275\256\346\214\211\351\222\256\345\206\205\350\276\271\350\267\235 */\n"
"    background-color: #90ee90; /* \350\256\276\347\275\256\346\265\205\347\273\277\350\211\262\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #80e080; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\250\215\345\276\256\346\267\261\344\270\200\347\202\271\347\232\204\346\265\205\347\273\277\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #70d070; /* \346\214\211\351\222\256\346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\345\206\215\346\267"
                        "\261\344\270\200\347\202\271\347\232\204\346\265\205\347\273\277\350\211\262 */\n"
"}"));

        horizontalLayout->addWidget(AddFlightBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ExitBtn = new QPushButton(widget);
        ExitBtn->setObjectName("ExitBtn");
        ExitBtn->setMaximumSize(QSize(100, 100));
        ExitBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #8f8f91; /* \350\256\276\347\275\256\346\214\211\351\222\256\350\276\271\346\241\206 */\n"
"    border-radius: 10px; /* \350\256\276\347\275\256\346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"    padding: 10px 20px; /* \350\256\276\347\275\256\346\214\211\351\222\256\345\206\205\350\276\271\350\267\235 */\n"
"    background-color: #d3d3d3; /* \350\256\276\347\275\256\346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: black; /* \350\256\276\347\275\256\346\226\207\346\234\254\351\242\234\350\211\262\344\270\272\351\273\221\350\211\262\357\274\214\347\241\256\344\277\235\345\234\250\346\265\205\347\201\260\350\211\262\350\203\214\346\231\257\344\270\212\346\270\205\346\231\260\345\217\257\350\247\201 */\n"
"}\n"
" \n"
"QPushButton:hover {\n"
"    background-color: #c0c0c0; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\250\215\345\276\256\346\267\261"
                        "\344\270\200\347\202\271\347\232\204\346\265\205\347\201\260\350\211\262 */\n"
"}\n"
" \n"
"QPushButton:pressed {\n"
"    background-color: #a9a9a9; /* \346\214\211\351\222\256\346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\345\206\215\346\267\261\344\270\200\347\202\271\347\232\204\346\265\205\347\201\260\350\211\262 */\n"
"}"));

        horizontalLayout->addWidget(ExitBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_11->addWidget(widget);

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
        AddFlightBtn->setText(QCoreApplication::translate("AdminMainWindow", "\346\267\273\345\212\240\350\210\252\347\217\255", nullptr));
        ExitBtn->setText(QCoreApplication::translate("AdminMainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMainWindow: public Ui_AdminMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMAINWINDOW_H
