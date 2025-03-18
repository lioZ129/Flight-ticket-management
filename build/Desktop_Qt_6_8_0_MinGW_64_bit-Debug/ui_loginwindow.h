/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *UserLoginBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *AdminLoginBtn;
    QSpacerItem *horizontalSpacer_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(372, 271);
        LoginWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #add8e6, stop: 1 #0000ff); /* \346\265\205\350\223\235\350\211\262\345\210\260\346\267\261\350\223\235\350\211\262\347\232\204\346\270\220\345\217\230\350\203\214\346\231\257 */\n"
"    border-radius: 15px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QMainWindow QMenuBar {\n"
"    background-color: rgba(0, 0, 255, 0.5); /* \345\215\212\351\200\217\346\230\216\346\267\261\350\223\235\350\211\262\350\203\214\346\231\257\357\274\214\344\270\216\346\265\205\350\223\235\350\211\262\345\210\260\346\267\261\350\223\235\350\211\262\347\232\204\346\270\220\345\217\230\347\233\270\345\215\217\350\260\203 */\n"
"    color: #ffffff; /* \347\231\275\350\211\262\346\226\207\345\255\227\357\274\214\347\241\256\344\277\235\345\234\250\346\267\261\350\211\262\350\203\214\346\231\257\344\270\212\345\217\257\350\257\273 */\n"
"    font-size: 16px; /* \345\255\227\344\275\223\345\244\247"
                        "\345\260\217 */\n"
"    padding: 10px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    border-radius: 15px 15px 0 0; /* \344\270\216\344\270\273\347\252\227\345\217\243\345\234\206\350\247\222\347\233\270\345\214\271\351\205\215\357\274\214\344\275\206\345\272\225\351\203\250\344\270\272\347\233\264\350\247\222 */\n"
"}\n"
"\n"
"QMainWindow QStatusBar {\n"
"    background-color: rgba(0, 128, 255, 0.3); /* \345\215\212\351\200\217\346\230\216\344\270\255\350\223\235\350\211\262\350\203\214\346\231\257\357\274\214\344\270\216\346\267\261\350\223\235\350\211\262\346\270\220\345\217\230\347\233\270\345\215\217\350\260\203\344\270\224\350\276\203\350\217\234\345\215\225\346\240\217\346\233\264\346\267\241\344\270\200\344\272\233 */\n"
"    color: #ffffff; /* \347\231\275\350\211\262\346\226\207\345\255\227\357\274\214\347\241\256\344\277\235\345\234\250\346\267\261\350\211\262\350\203\214\346\231\257\344\270\212\345\217\257\350\257\273 */\n"
"    font-size: 12px; /* \345\255\227\344\275\223\345\244\247\345\260\217"
                        " */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    border-radius: 0 0 15px 15px; /* \344\270\216\344\270\273\347\252\227\345\217\243\345\234\206\350\247\222\347\233\270\345\214\271\351\205\215\357\274\214\344\275\206\351\241\266\351\203\250\344\270\272\347\233\264\350\247\222 */\n"
"}"));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #ffffff, stop: 1 #d3d3d3); /* \347\231\275\350\211\262\345\210\260\346\265\205\347\201\260\350\211\262\347\232\204\346\270\220\345\217\230\350\203\214\346\231\257 */\n"
"    border: 1px solid #cccccc; /* \347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    padding: 15px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 16px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227 */\n"
"}"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #add8e6, stop: 1 #00008b); /* \346\265\205\350\223\235\350\211\262\345\210\260\346\267\261\350\223\235\350\211\262\347\232\204\346\270\220\345\217\230\350\203\214\346\231\257 */\n"
"    border: none; /* \346\266\210\351\231\244\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    padding: 15px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 16px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    color: #ffffff; /* \346\226\207\345\255\227\351\242\234\350\211\262\346\224\271\344\270\272\347\231\275\350\211\262\344\273\245\346\217\220\351\253\230\345\217\257\350\257\273\346\200\247 */\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        widget = new QWidget(widget_2);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #ffffff, stop: 1 #d3d3d3); /* \347\231\275\350\211\262\345\210\260\346\265\205\347\201\260\350\211\262\347\232\204\346\270\220\345\217\230\350\203\214\346\231\257 */\n"
"    border: 1px solid #cccccc; /* \347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    padding: 15px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 16px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227 */\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        UserLoginBtn = new QPushButton(widget);
        UserLoginBtn->setObjectName("UserLoginBtn");
        UserLoginBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #add8e6; /* \346\265\205\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    color: #000000; /* \351\273\221\350\211\262\346\226\207\345\255\227\357\274\214\347\241\256\344\277\235\345\234\250\346\265\205\350\223\235\350\211\262\350\203\214\346\231\257\344\270\212\345\217\257\350\257\273 */\n"
"    padding: 10px 20px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    text-align: center; /* \346\226\207\345\255\227\345\261\205\344\270\255 */\n"
"    text-decoration: none; /* \346\227\240\346\226\207\345\255\227\350\243\205\351\245\260 */\n"
"    display: inline-block; /* \350\241\214\345\206\205\345\235\227\345\205\203\347\264\240 */\n"
"    font-size: 16px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    margin: 4px 2px; /* \345\244\226\350\276\271\350\267\235 */\n"
"    cursor: pointer; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\230\276\347\244\272\344\270\272"
                        "\346\211\213\345\275\242 */\n"
"    border-radius: 8px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    transition-duration: 0.4s; /* \350\277\207\346\270\241\345\212\250\347\224\273\346\227\266\351\227\264 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #87CEEB; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\344\270\272\347\250\215\346\267\261\347\232\204\346\265\205\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #6495ED; /* \346\214\211\351\222\256\346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\344\270\272\346\233\264\346\267\261\347\232\204\346\265\205\350\223\235\350\211\262 */\n"
"}"));

        horizontalLayout->addWidget(UserLoginBtn);

        horizontalSpacer = new QSpacerItem(20, 5, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        AdminLoginBtn = new QPushButton(widget);
        AdminLoginBtn->setObjectName("AdminLoginBtn");
        AdminLoginBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #add8e6; /* \346\265\205\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    color: #000000; /* \351\273\221\350\211\262\346\226\207\345\255\227\357\274\214\347\241\256\344\277\235\345\234\250\346\265\205\350\223\235\350\211\262\350\203\214\346\231\257\344\270\212\345\217\257\350\257\273 */\n"
"    padding: 10px 20px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    text-align: center; /* \346\226\207\345\255\227\345\261\205\344\270\255 */\n"
"    text-decoration: none; /* \346\227\240\346\226\207\345\255\227\350\243\205\351\245\260 */\n"
"    display: inline-block; /* \350\241\214\345\206\205\345\235\227\345\205\203\347\264\240 */\n"
"    font-size: 16px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    margin: 4px 2px; /* \345\244\226\350\276\271\350\267\235 */\n"
"    cursor: pointer; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\230\276\347\244\272\344\270\272"
                        "\346\211\213\345\275\242 */\n"
"    border-radius: 8px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    transition-duration: 0.4s; /* \350\277\207\346\270\241\345\212\250\347\224\273\346\227\266\351\227\264 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #87CEEB; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\344\270\272\347\250\215\346\267\261\347\232\204\346\265\205\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #6495ED; /* \346\214\211\351\222\256\346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\344\270\272\346\233\264\346\267\261\347\232\204\346\265\205\350\223\235\350\211\262 */\n"
"}"));

        horizontalLayout->addWidget(AdminLoginBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget);


        verticalLayout_2->addWidget(widget_2);

        LoginWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "Welcome to our system!", nullptr));
        UserLoginBtn->setText(QCoreApplication::translate("LoginWindow", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        AdminLoginBtn->setText(QCoreApplication::translate("LoginWindow", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
