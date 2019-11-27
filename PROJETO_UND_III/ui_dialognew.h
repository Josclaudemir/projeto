/********************************************************************************
** Form generated from reading UI file 'dialognew.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNEW_H
#define UI_DIALOGNEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogNew
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_X;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Y;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_Z;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogNew)
    {
        if (DialogNew->objectName().isEmpty())
            DialogNew->setObjectName(QString::fromUtf8("DialogNew"));
        DialogNew->resize(174, 183);
        verticalLayout_4 = new QVBoxLayout(DialogNew);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(DialogNew);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        lineEdit_X = new QLineEdit(DialogNew);
        lineEdit_X->setObjectName(QString::fromUtf8("lineEdit_X"));

        verticalLayout->addWidget(lineEdit_X);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(DialogNew);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_Y = new QLineEdit(DialogNew);
        lineEdit_Y->setObjectName(QString::fromUtf8("lineEdit_Y"));

        verticalLayout_2->addWidget(lineEdit_Y);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(DialogNew);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        lineEdit_Z = new QLineEdit(DialogNew);
        lineEdit_Z->setObjectName(QString::fromUtf8("lineEdit_Z"));

        verticalLayout_3->addWidget(lineEdit_Z);


        verticalLayout_4->addLayout(verticalLayout_3);

        buttonBox = new QDialogButtonBox(DialogNew);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(DialogNew);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogNew, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogNew, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogNew);
    } // setupUi

    void retranslateUi(QDialog *DialogNew)
    {
        DialogNew->setWindowTitle(QCoreApplication::translate("DialogNew", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("DialogNew", "Dimension X", nullptr));
        label_2->setText(QCoreApplication::translate("DialogNew", "Dimension Y", nullptr));
        label->setText(QCoreApplication::translate("DialogNew", "Dimension Z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogNew: public Ui_DialogNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNEW_H
