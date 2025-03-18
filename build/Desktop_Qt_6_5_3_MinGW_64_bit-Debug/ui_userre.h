/********************************************************************************
** Form generated from reading UI file 'userre.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERRE_H
#define UI_USERRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserRe
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *UserAccLine;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *UserPassLine;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *GenderBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QSpinBox *AgeBox;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *UserDePassLine;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *UserisReBtn;

    void setupUi(QDialog *UserRe)
    {
        if (UserRe->objectName().isEmpty())
            UserRe->setObjectName("UserRe");
        UserRe->resize(322, 257);
        verticalLayout_2 = new QVBoxLayout(UserRe);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_4 = new QWidget(UserRe);
        widget_4->setObjectName("widget_4");
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(widget_4);
        widget->setObjectName("widget");
        widget->setMaximumSize(QSize(16777215, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        UserAccLine = new QLineEdit(widget);
        UserAccLine->setObjectName("UserAccLine");

        horizontalLayout->addWidget(UserAccLine);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName("widget_2");
        widget_2->setMaximumSize(QSize(16777215, 50));
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

        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName("widget_6");
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(widget_6);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        GenderBox = new QComboBox(widget_6);
        GenderBox->addItem(QString());
        GenderBox->addItem(QString());
        GenderBox->setObjectName("GenderBox");

        horizontalLayout_5->addWidget(GenderBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        label_5 = new QLabel(widget_6);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        AgeBox = new QSpinBox(widget_6);
        AgeBox->setObjectName("AgeBox");

        horizontalLayout_5->addWidget(AgeBox);


        verticalLayout->addWidget(widget_6);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName("widget_3");
        widget_3->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        UserDePassLine = new QLineEdit(widget_3);
        UserDePassLine->setObjectName("UserDePassLine");
        UserDePassLine->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_3->addWidget(UserDePassLine);


        verticalLayout->addWidget(widget_3);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        widget_5->setMaximumSize(QSize(350, 50));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        UserisReBtn = new QPushButton(widget_5);
        UserisReBtn->setObjectName("UserisReBtn");
        UserisReBtn->setMaximumSize(QSize(75, 30));

        horizontalLayout_4->addWidget(UserisReBtn);


        verticalLayout->addWidget(widget_5);


        verticalLayout_2->addWidget(widget_4);


        retranslateUi(UserRe);

        QMetaObject::connectSlotsByName(UserRe);
    } // setupUi

    void retranslateUi(QDialog *UserRe)
    {
        UserRe->setWindowTitle(QCoreApplication::translate("UserRe", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UserRe", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("UserRe", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("UserRe", "\346\200\247\345\210\253", nullptr));
        GenderBox->setItemText(0, QCoreApplication::translate("UserRe", "\347\224\267", nullptr));
        GenderBox->setItemText(1, QCoreApplication::translate("UserRe", "\345\245\263", nullptr));

        label_5->setText(QCoreApplication::translate("UserRe", "\345\271\264\351\276\204", nullptr));
        label_3->setText(QCoreApplication::translate("UserRe", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        UserisReBtn->setText(QCoreApplication::translate("UserRe", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserRe: public Ui_UserRe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERRE_H
