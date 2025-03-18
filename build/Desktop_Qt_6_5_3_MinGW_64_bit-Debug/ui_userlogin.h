/********************************************************************************
** Form generated from reading UI file 'userlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserLogin
{
public:
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *UserAccLine;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *UserPassLine;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *UserReBtn;
    QPushButton *UserisLoginBtn;

    void setupUi(QDialog *UserLogin)
    {
        if (UserLogin->objectName().isEmpty())
            UserLogin->setObjectName("UserLogin");
        UserLogin->resize(300, 200);
        horizontalLayout_4 = new QHBoxLayout(UserLogin);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        widget_5 = new QWidget(UserLogin);
        widget_5->setObjectName("widget_5");
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setObjectName("verticalLayout_2");
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

        horizontalLayout->addWidget(label);

        UserAccLine = new QLineEdit(widget);
        UserAccLine->setObjectName("UserAccLine");

        horizontalLayout->addWidget(UserAccLine);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        UserPassLine = new QLineEdit(widget_2);
        UserPassLine->setObjectName("UserPassLine");
        UserPassLine->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(UserPassLine);


        verticalLayout->addWidget(widget_2);


        verticalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName("widget_4");
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        UserReBtn = new QPushButton(widget_4);
        UserReBtn->setObjectName("UserReBtn");

        horizontalLayout_3->addWidget(UserReBtn);

        UserisLoginBtn = new QPushButton(widget_4);
        UserisLoginBtn->setObjectName("UserisLoginBtn");

        horizontalLayout_3->addWidget(UserisLoginBtn);


        verticalLayout_2->addWidget(widget_4);


        horizontalLayout_4->addWidget(widget_5);


        retranslateUi(UserLogin);

        QMetaObject::connectSlotsByName(UserLogin);
    } // setupUi

    void retranslateUi(QDialog *UserLogin)
    {
        UserLogin->setWindowTitle(QCoreApplication::translate("UserLogin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UserLogin", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("UserLogin", "\345\257\206\347\240\201\357\274\232", nullptr));
        UserReBtn->setText(QCoreApplication::translate("UserLogin", "\346\263\250\345\206\214", nullptr));
        UserisLoginBtn->setText(QCoreApplication::translate("UserLogin", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserLogin: public Ui_UserLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
