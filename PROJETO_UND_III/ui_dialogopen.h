/********************************************************************************
** Form generated from reading UI file 'dialogopen.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGOPEN_H
#define UI_DIALOGOPEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogOpen
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox_Open;

    void setupUi(QDialog *DialogOpen)
    {
        if (DialogOpen->objectName().isEmpty())
            DialogOpen->setObjectName(QString::fromUtf8("DialogOpen"));
        DialogOpen->resize(322, 98);
        verticalLayout_2 = new QVBoxLayout(DialogOpen);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(DialogOpen);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(DialogOpen);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox_Open = new QDialogButtonBox(DialogOpen);
        buttonBox_Open->setObjectName(QString::fromUtf8("buttonBox_Open"));
        buttonBox_Open->setOrientation(Qt::Horizontal);
        buttonBox_Open->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox_Open);


        retranslateUi(DialogOpen);
        QObject::connect(buttonBox_Open, SIGNAL(accepted()), DialogOpen, SLOT(accept()));
        QObject::connect(buttonBox_Open, SIGNAL(rejected()), DialogOpen, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogOpen);
    } // setupUi

    void retranslateUi(QDialog *DialogOpen)
    {
        DialogOpen->setWindowTitle(QCoreApplication::translate("DialogOpen", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogOpen", "File Address", nullptr));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogOpen: public Ui_DialogOpen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGOPEN_H
