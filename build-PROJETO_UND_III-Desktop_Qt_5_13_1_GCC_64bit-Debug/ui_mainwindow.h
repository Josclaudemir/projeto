/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *line;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSlider *horizontalSliderPX;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QSlider *horizontalSliderPY;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QSlider *horizontalSliderPZ;
    QGroupBox *groupBox_2;
    QWidget *widgetCores;
    QWidget *widget;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_8;
    QLabel *label;
    QSlider *horizontalSliderR;
    QGridLayout *gridLayout_9;
    QLabel *label_5;
    QSlider *horizontalSliderG;
    QGridLayout *gridLayout_10;
    QLabel *label_6;
    QSlider *horizontalSliderB;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QSlider *horizontalSliderR_2;
    QLCDNumber *lcdNumber;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(764, 469);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 410, 761, 31));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 300, 251, 121));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalSliderPX = new QSlider(groupBox);
        horizontalSliderPX->setObjectName(QString::fromUtf8("horizontalSliderPX"));
        horizontalSliderPX->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderPX, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        horizontalSliderPY = new QSlider(groupBox);
        horizontalSliderPY->setObjectName(QString::fromUtf8("horizontalSliderPY"));
        horizontalSliderPY->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderPY, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 1, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_6->addWidget(label_4, 0, 0, 1, 1);

        horizontalSliderPZ = new QSlider(groupBox);
        horizontalSliderPZ->setObjectName(QString::fromUtf8("horizontalSliderPZ"));
        horizontalSliderPZ->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSliderPZ, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(250, 300, 291, 121));
        widgetCores = new QWidget(groupBox_2);
        widgetCores->setObjectName(QString::fromUtf8("widgetCores"));
        widgetCores->setGeometry(QRect(160, 30, 120, 80));
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 30, 105, 71));
        gridLayout_12 = new QGridLayout(widget);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_8->addWidget(label, 0, 0, 1, 1);

        horizontalSliderR = new QSlider(widget);
        horizontalSliderR->setObjectName(QString::fromUtf8("horizontalSliderR"));
        horizontalSliderR->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalSliderR, 0, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_8, 0, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_9->addWidget(label_5, 0, 0, 1, 1);

        horizontalSliderG = new QSlider(widget);
        horizontalSliderG->setObjectName(QString::fromUtf8("horizontalSliderG"));
        horizontalSliderG->setOrientation(Qt::Horizontal);

        gridLayout_9->addWidget(horizontalSliderG, 0, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_9, 1, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_10->addWidget(label_6, 0, 0, 1, 1);

        horizontalSliderB = new QSlider(widget);
        horizontalSliderB->setObjectName(QString::fromUtf8("horizontalSliderB"));
        horizontalSliderB->setOrientation(Qt::Horizontal);

        gridLayout_10->addWidget(horizontalSliderB, 0, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_10, 2, 0, 1, 1);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 290, 761, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(540, 40, 20, 381));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(0, 30, 761, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(560, 300, 199, 121));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        horizontalSliderR_2 = new QSlider(groupBox_3);
        horizontalSliderR_2->setObjectName(QString::fromUtf8("horizontalSliderR_2"));
        horizontalSliderR_2->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderR_2, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        lcdNumber = new QLCDNumber(groupBox_3);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setFrameShadow(QFrame::Plain);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(lcdNumber, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 764, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderR_2, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "PLANOS", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "PX", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "PY", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "PZ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "CORES", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Sphere", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
