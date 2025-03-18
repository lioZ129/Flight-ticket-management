/********************************************************************************
** Form generated from reading UI file 'myorderwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYORDERWINDOW_H
#define UI_MYORDERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyOrderWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *RefreshBtn;
    QScrollArea *TicketShowArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *MyOrderWindow)
    {
        if (MyOrderWindow->objectName().isEmpty())
            MyOrderWindow->setObjectName("MyOrderWindow");
        MyOrderWindow->resize(618, 498);
        verticalLayout = new QVBoxLayout(MyOrderWindow);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(MyOrderWindow);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(510, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        RefreshBtn = new QPushButton(widget);
        RefreshBtn->setObjectName("RefreshBtn");
        RefreshBtn->setMinimumSize(QSize(50, 30));
        RefreshBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #90EE90; /* \346\265\205\347\273\277\350\211\262\350\203\214\346\231\257 */\n"
"    border: 2px solid #008000; /* \346\267\261\347\273\277\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 8px; /* \345\234\206\350\247\222\350\276\271\346\241\206\344\277\235\346\214\201\344\270\215\345\217\230 */\n"
"    color: #ffffff; /* \347\231\275\350\211\262\346\226\207\346\234\254\344\277\235\346\214\201\344\270\215\345\217\230 */\n"
"    padding: 10px 20px; /* \345\206\205\350\276\271\350\267\235\344\277\235\346\214\201\344\270\215\345\217\230 */\n"
"    font-size: 16px; /* \345\255\227\344\275\223\345\244\247\345\260\217\344\277\235\346\214\201\344\270\215\345\217\230 */\n"
"    min-width: 100px; /* \346\234\200\345\260\217\345\256\275\345\272\246\344\277\235\346\214\201\344\270\215\345\217\230 */\n"
"    transition: background-color 0.3s, border-color 0.3s; /* \345\271\263\346\273\221\350\277\207\346\270\241\346\225\210\346\236\234\344\277\235\346\214\201\344\270\215"
                        "\345\217\230 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #BFFFBF; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\345\217\230\344\270\272\346\233\264\346\265\205\347\232\204\347\273\277\350\211\262 */\n"
"    border-color: #32CD32; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\344\270\272\344\272\256\347\273\277\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #32CD32; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\345\217\230\344\270\272\344\272\256\347\273\277\350\211\262 */\n"
"    border-color: #006400; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\344\270\272\346\233\264\346\267\261\347\232\204\347\273\277\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #D3E5F3; /* \345\216\237\345\247\213\344\273"
                        "\243\347\240\201\344\270\255\344\270\272\346\265\205\347\201\260\347\273\277\350\211\262\345\210\260\346\265\205\351\235\222\350\211\262\347\232\204\346\270\220\345\217\230\357\274\214\344\275\206\350\277\231\351\207\214\346\224\271\344\270\272\347\272\257\346\265\205\347\273\277\350\211\262\347\263\273\347\232\204#C0FFC0\345\217\257\350\203\275\346\233\264\345\220\210\351\200\202 */\n"
"    border-color: #8FBC8F; /* \346\251\204\346\246\204\347\273\277\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    color: #888888; /* \347\246\201\347\224\250\346\227\266\346\226\207\346\234\254\351\242\234\350\211\262\344\277\235\346\214\201\344\270\272\347\201\260\350\211\262\357\274\214\346\210\226\345\217\257\346\240\271\346\215\256\351\234\200\346\261\202\350\260\203\346\225\264 */\n"
"    /* \346\263\250\346\204\217\357\274\232\347\246\201\347\224\250\347\212\266\346\200\201\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\345\217\257\350\203\275\351\234\200\350\246\201\350\277\233\344\270\200\346\255"
                        "\245\350\260\203\346\225\264\344\273\245\347\241\256\344\277\235\344\270\216\347\273\277\350\211\262\347\263\273\344\270\273\351\242\230\347\233\270\347\254\246 */\n"
"}"));

        horizontalLayout->addWidget(RefreshBtn);


        verticalLayout->addWidget(widget);

        TicketShowArea = new QScrollArea(MyOrderWindow);
        TicketShowArea->setObjectName("TicketShowArea");
        TicketShowArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 598, 410));
        TicketShowArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(TicketShowArea);


        retranslateUi(MyOrderWindow);

        QMetaObject::connectSlotsByName(MyOrderWindow);
    } // setupUi

    void retranslateUi(QWidget *MyOrderWindow)
    {
        MyOrderWindow->setWindowTitle(QCoreApplication::translate("MyOrderWindow", "Form", nullptr));
        RefreshBtn->setText(QCoreApplication::translate("MyOrderWindow", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyOrderWindow: public Ui_MyOrderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYORDERWINDOW_H
