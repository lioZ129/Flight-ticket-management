/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

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

class Ui_AdminLogin
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *AdminAccLine;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *AdminPassLine;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *AdminReBtn;
    QPushButton *AdminisLoginBtn;

    void setupUi(QDialog *AdminLogin)
    {
        if (AdminLogin->objectName().isEmpty())
            AdminLogin->setObjectName("AdminLogin");
        AdminLogin->resize(300, 200);
        verticalLayout_3 = new QVBoxLayout(AdminLogin);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget_5 = new QWidget(AdminLogin);
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

        AdminAccLine = new QLineEdit(widget);
        AdminAccLine->setObjectName("AdminAccLine");

        horizontalLayout->addWidget(AdminAccLine);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        AdminPassLine = new QLineEdit(widget_2);
        AdminPassLine->setObjectName("AdminPassLine");
        AdminPassLine->setEchoMode(QLineEdit::EchoMode::Password);
        AdminPassLine->setReadOnly(false);

        horizontalLayout_2->addWidget(AdminPassLine);


        verticalLayout->addWidget(widget_2);


        verticalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName("widget_4");
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        AdminReBtn = new QPushButton(widget_4);
        AdminReBtn->setObjectName("AdminReBtn");

        horizontalLayout_3->addWidget(AdminReBtn);

        AdminisLoginBtn = new QPushButton(widget_4);
        AdminisLoginBtn->setObjectName("AdminisLoginBtn");

        horizontalLayout_3->addWidget(AdminisLoginBtn);


        verticalLayout_2->addWidget(widget_4);


        verticalLayout_3->addWidget(widget_5);


        retranslateUi(AdminLogin);

        QMetaObject::connectSlotsByName(AdminLogin);
    } // setupUi

    void retranslateUi(QDialog *AdminLogin)
    {
        AdminLogin->setWindowTitle(QCoreApplication::translate("AdminLogin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AdminLogin", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("AdminLogin", "\345\257\206\347\240\201\357\274\232", nullptr));
        AdminReBtn->setText(QCoreApplication::translate("AdminLogin", "\346\263\250\345\206\214", nullptr));
        AdminisLoginBtn->setText(QCoreApplication::translate("AdminLogin", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminLogin: public Ui_AdminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
