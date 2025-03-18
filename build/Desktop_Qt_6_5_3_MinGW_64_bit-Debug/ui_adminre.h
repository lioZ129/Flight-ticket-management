/********************************************************************************
** Form generated from reading UI file 'adminre.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINRE_H
#define UI_ADMINRE_H

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

class Ui_AdminRe
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *AdminAccLine;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *AdminPassLine;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *AdminDePassLine;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *InRegCodeLine;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *AdminisReBtn;

    void setupUi(QDialog *AdminRe)
    {
        if (AdminRe->objectName().isEmpty())
            AdminRe->setObjectName("AdminRe");
        AdminRe->resize(350, 300);
        AdminRe->setMaximumSize(QSize(16777215, 600));
        verticalLayout = new QVBoxLayout(AdminRe);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(AdminRe);
        widget->setObjectName("widget");
        widget->setEnabled(true);
        widget->setMaximumSize(QSize(400, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(label);

        AdminAccLine = new QLineEdit(widget);
        AdminAccLine->setObjectName("AdminAccLine");
        AdminAccLine->setMaximumSize(QSize(300, 20));

        horizontalLayout->addWidget(AdminAccLine);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(AdminRe);
        widget_2->setObjectName("widget_2");
        widget_2->setMaximumSize(QSize(400, 50));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(50, 50));

        horizontalLayout_2->addWidget(label_2);

        AdminPassLine = new QLineEdit(widget_2);
        AdminPassLine->setObjectName("AdminPassLine");
        AdminPassLine->setMaximumSize(QSize(300, 20));
        AdminPassLine->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(AdminPassLine);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(AdminRe);
        widget_3->setObjectName("widget_3");
        widget_3->setMaximumSize(QSize(400, 50));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(50, 50));

        horizontalLayout_3->addWidget(label_3);

        AdminDePassLine = new QLineEdit(widget_3);
        AdminDePassLine->setObjectName("AdminDePassLine");
        AdminDePassLine->setMaximumSize(QSize(300, 20));
        AdminDePassLine->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_3->addWidget(AdminDePassLine);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(AdminRe);
        widget_4->setObjectName("widget_4");
        widget_4->setMaximumSize(QSize(400, 50));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(widget_4);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(50, 50));

        horizontalLayout_4->addWidget(label_4);

        InRegCodeLine = new QLineEdit(widget_4);
        InRegCodeLine->setObjectName("InRegCodeLine");
        InRegCodeLine->setMaximumSize(QSize(300, 20));

        horizontalLayout_4->addWidget(InRegCodeLine);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(AdminRe);
        widget_5->setObjectName("widget_5");
        widget_5->setMaximumSize(QSize(400, 50));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        AdminisReBtn = new QPushButton(widget_5);
        AdminisReBtn->setObjectName("AdminisReBtn");
        AdminisReBtn->setMaximumSize(QSize(75, 30));

        horizontalLayout_5->addWidget(AdminisReBtn);


        verticalLayout->addWidget(widget_5);


        retranslateUi(AdminRe);

        QMetaObject::connectSlotsByName(AdminRe);
    } // setupUi

    void retranslateUi(QDialog *AdminRe)
    {
        AdminRe->setWindowTitle(QCoreApplication::translate("AdminRe", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AdminRe", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("AdminRe", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("AdminRe", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("AdminRe", "\346\263\250\345\206\214\347\240\201\357\274\232", nullptr));
        AdminisReBtn->setText(QCoreApplication::translate("AdminRe", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminRe: public Ui_AdminRe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINRE_H
