/********************************************************************************
** Form generated from reading UI file 'passinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSINFO_H
#define UI_PASSINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PassInfo
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *AccountLine;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *GenderLine;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLineEdit *AgeLine;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QLineEdit *SeatIdLine;
    QLabel *label_5;

    void setupUi(QWidget *PassInfo)
    {
        if (PassInfo->objectName().isEmpty())
            PassInfo->setObjectName("PassInfo");
        PassInfo->resize(472, 76);
        horizontalLayout = new QHBoxLayout(PassInfo);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(PassInfo);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        AccountLine = new QLineEdit(PassInfo);
        AccountLine->setObjectName("AccountLine");
        AccountLine->setMaximumSize(QSize(100, 16777215));
        AccountLine->setReadOnly(true);

        horizontalLayout->addWidget(AccountLine);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(PassInfo);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        GenderLine = new QLineEdit(PassInfo);
        GenderLine->setObjectName("GenderLine");
        GenderLine->setMaximumSize(QSize(30, 16777215));
        GenderLine->setReadOnly(true);

        horizontalLayout->addWidget(GenderLine);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_3 = new QLabel(PassInfo);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        AgeLine = new QLineEdit(PassInfo);
        AgeLine->setObjectName("AgeLine");
        AgeLine->setMaximumSize(QSize(50, 16777215));
        AgeLine->setReadOnly(true);

        horizontalLayout->addWidget(AgeLine);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_4 = new QLabel(PassInfo);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        SeatIdLine = new QLineEdit(PassInfo);
        SeatIdLine->setObjectName("SeatIdLine");
        SeatIdLine->setMaximumSize(QSize(50, 16777215));
        SeatIdLine->setReadOnly(true);

        horizontalLayout->addWidget(SeatIdLine);

        label_5 = new QLabel(PassInfo);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);


        retranslateUi(PassInfo);

        QMetaObject::connectSlotsByName(PassInfo);
    } // setupUi

    void retranslateUi(QWidget *PassInfo)
    {
        PassInfo->setWindowTitle(QCoreApplication::translate("PassInfo", "Form", nullptr));
        label->setText(QCoreApplication::translate("PassInfo", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("PassInfo", "\346\200\247\345\210\253", nullptr));
        label_3->setText(QCoreApplication::translate("PassInfo", "\345\271\264\351\276\204", nullptr));
        label_4->setText(QCoreApplication::translate("PassInfo", "\345\272\247\344\275\215\345\217\267", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PassInfo: public Ui_PassInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSINFO_H
