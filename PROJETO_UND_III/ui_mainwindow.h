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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <plotter.h>
#include "plottercolor.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEsfera;
    QAction *actionCaixa;
    QAction *actionSalvar;
    QAction *actionElipsoide;
    QAction *actionCaixaCorte;
    QAction *actionEsferaCorte;
    QAction *actionCores;
    QAction *actionelipsoideCorte;
    QAction *actionAbrirArquivo;
    QAction *actionPlanXY;
    QAction *actionPlanXZ;
    QAction *actionPlanYZ;
    QAction *actionNovo;
    QAction *actionVoxelCorte;
    QAction *actionVoxel;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSlider *horizontalSlider_XBox;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSlider *horizontalSlider_YBox;
    QLCDNumber *lcdNumber_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSlider *horizontalSlider_ZBox;
    QLCDNumber *lcdNumber_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSlider *horizontalSlider_R;
    QLCDNumber *lcdNumber_7;
    Plotter *widget;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QSlider *horizontalSlider_RxEllipsoid;
    QLCDNumber *lcdNumber_11;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_12;
    QSlider *horizontalSlider_RyEllipsoid;
    QLCDNumber *lcdNumber_12;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_13;
    QSlider *horizontalSlider_RzEllipsoid;
    QLCDNumber *lcdNumber_13;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_16;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_17;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_19;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_7;
    QFrame *line_3;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_8;
    QSlider *horizontalSlider_PlanX;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_9;
    QSlider *horizontalSlider_PlanY;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_10;
    QSlider *horizontalSlider_PlanZ;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_14;
    QSlider *horizontalSlider_Red;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_15;
    QSlider *horizontalSlider_Blue;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_16;
    QSlider *horizontalSlider_Green;
    PlotterColor *widgetColor;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_Creator;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_6;
    QPlainTextEdit *plainTextEdit_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QPlainTextEdit *plainTextEdit_3;
    QPushButton *pushButton_Save;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(903, 610);
        actionEsfera = new QAction(MainWindow);
        actionEsfera->setObjectName(QString::fromUtf8("actionEsfera"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Imagens/Resource/sphere-3d-object-geometry_108591.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEsfera->setIcon(icon);
        actionCaixa = new QAction(MainWindow);
        actionCaixa->setObjectName(QString::fromUtf8("actionCaixa"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Imagens/Resource/cube_79255.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCaixa->setIcon(icon1);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Imagens/Resource/Custom-Icon-Design-Pretty-Office-7-Save.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon2);
        actionElipsoide = new QAction(MainWindow);
        actionElipsoide->setObjectName(QString::fromUtf8("actionElipsoide"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Imagens/Resource/elipse256_25236.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionElipsoide->setIcon(icon3);
        actionCaixaCorte = new QAction(MainWindow);
        actionCaixaCorte->setObjectName(QString::fromUtf8("actionCaixaCorte"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Imagens/Resource/kZkgb.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCaixaCorte->setIcon(icon4);
        actionEsferaCorte = new QAction(MainWindow);
        actionEsferaCorte->setObjectName(QString::fromUtf8("actionEsferaCorte"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Imagens/Resource/34550-200.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEsferaCorte->setIcon(icon5);
        actionCores = new QAction(MainWindow);
        actionCores->setObjectName(QString::fromUtf8("actionCores"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Imagens/Resource/colors_1014.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCores->setIcon(icon6);
        actionelipsoideCorte = new QAction(MainWindow);
        actionelipsoideCorte->setObjectName(QString::fromUtf8("actionelipsoideCorte"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Imagens/Resource/_png_171458-200.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionelipsoideCorte->setIcon(icon7);
        actionAbrirArquivo = new QAction(MainWindow);
        actionAbrirArquivo->setObjectName(QString::fromUtf8("actionAbrirArquivo"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Imagens/Resource/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrirArquivo->setIcon(icon8);
        actionPlanXY = new QAction(MainWindow);
        actionPlanXY->setObjectName(QString::fromUtf8("actionPlanXY"));
        actionPlanXZ = new QAction(MainWindow);
        actionPlanXZ->setObjectName(QString::fromUtf8("actionPlanXZ"));
        actionPlanYZ = new QAction(MainWindow);
        actionPlanYZ->setObjectName(QString::fromUtf8("actionPlanYZ"));
        actionNovo = new QAction(MainWindow);
        actionNovo->setObjectName(QString::fromUtf8("actionNovo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Imagens/Resource/new_page_document_16676.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNovo->setIcon(icon9);
        actionVoxelCorte = new QAction(MainWindow);
        actionVoxelCorte->setObjectName(QString::fromUtf8("actionVoxelCorte"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Imagens/Resource/Eraser-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVoxelCorte->setIcon(icon10);
        actionVoxel = new QAction(MainWindow);
        actionVoxel->setObjectName(QString::fromUtf8("actionVoxel"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Imagens/Resource/pincel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVoxel->setIcon(icon11);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(670, 220, 201, 171));
        groupBox->setMaximumSize(QSize(16777213, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Nirmala UI"));
        groupBox->setFont(font);
        groupBox->setFocusPolicy(Qt::NoFocus);
        groupBox->setContextMenuPolicy(Qt::NoContextMenu);
        groupBox->setLayoutDirection(Qt::LeftToRight);
        groupBox->setAutoFillBackground(true);
        groupBox->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        horizontalLayout_8 = new QHBoxLayout(groupBox);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSlider_XBox = new QSlider(groupBox);
        horizontalSlider_XBox->setObjectName(QString::fromUtf8("horizontalSlider_XBox"));
        horizontalSlider_XBox->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_XBox);

        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_3->addWidget(lcdNumber);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSlider_YBox = new QSlider(groupBox);
        horizontalSlider_YBox->setObjectName(QString::fromUtf8("horizontalSlider_YBox"));
        horizontalSlider_YBox->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_YBox);

        lcdNumber_2 = new QLCDNumber(groupBox);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(lcdNumber_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSlider_ZBox = new QSlider(groupBox);
        horizontalSlider_ZBox->setObjectName(QString::fromUtf8("horizontalSlider_ZBox"));
        horizontalSlider_ZBox->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_ZBox);

        lcdNumber_3 = new QLCDNumber(groupBox);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber_3);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_8->addLayout(verticalLayout);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(670, 410, 201, 91));
        groupBox_2->setFont(font);
        groupBox_2->setAutoFillBackground(true);
        groupBox_2->setAlignment(Qt::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSlider_R = new QSlider(groupBox_2);
        horizontalSlider_R->setObjectName(QString::fromUtf8("horizontalSlider_R"));
        horizontalSlider_R->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_R);

        lcdNumber_7 = new QLCDNumber(groupBox_2);
        lcdNumber_7->setObjectName(QString::fromUtf8("lcdNumber_7"));
        lcdNumber_7->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_7->addWidget(lcdNumber_7);


        verticalLayout_2->addLayout(horizontalLayout_7);

        widget = new Plotter(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(150, 30, 361, 361));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(670, 30, 201, 171));
        groupBox_3->setFont(font);
        groupBox_3->setAutoFillBackground(true);
        groupBox_3->setAlignment(Qt::AlignCenter);
        groupBox_3->setFlat(false);
        groupBox_3->setCheckable(false);
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        horizontalLayout_13->addWidget(label_11);

        horizontalSlider_RxEllipsoid = new QSlider(groupBox_3);
        horizontalSlider_RxEllipsoid->setObjectName(QString::fromUtf8("horizontalSlider_RxEllipsoid"));
        horizontalSlider_RxEllipsoid->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(horizontalSlider_RxEllipsoid);

        lcdNumber_11 = new QLCDNumber(groupBox_3);
        lcdNumber_11->setObjectName(QString::fromUtf8("lcdNumber_11"));
        lcdNumber_11->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_13->addWidget(lcdNumber_11);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        horizontalLayout_14->addWidget(label_12);

        horizontalSlider_RyEllipsoid = new QSlider(groupBox_3);
        horizontalSlider_RyEllipsoid->setObjectName(QString::fromUtf8("horizontalSlider_RyEllipsoid"));
        horizontalSlider_RyEllipsoid->setOrientation(Qt::Horizontal);

        horizontalLayout_14->addWidget(horizontalSlider_RyEllipsoid);

        lcdNumber_12 = new QLCDNumber(groupBox_3);
        lcdNumber_12->setObjectName(QString::fromUtf8("lcdNumber_12"));
        lcdNumber_12->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_14->addWidget(lcdNumber_12);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        horizontalLayout_15->addWidget(label_13);

        horizontalSlider_RzEllipsoid = new QSlider(groupBox_3);
        horizontalSlider_RzEllipsoid->setObjectName(QString::fromUtf8("horizontalSlider_RzEllipsoid"));
        horizontalSlider_RzEllipsoid->setOrientation(Qt::Horizontal);

        horizontalLayout_15->addWidget(horizontalSlider_RzEllipsoid);

        lcdNumber_13 = new QLCDNumber(groupBox_3);
        lcdNumber_13->setObjectName(QString::fromUtf8("lcdNumber_13"));
        lcdNumber_13->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_15->addWidget(lcdNumber_13);


        verticalLayout_3->addLayout(horizontalLayout_15);


        verticalLayout_4->addLayout(verticalLayout_3);

        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(10, 390, 871, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(650, 20, 20, 501));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(0, 20, 20, 501));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(centralWidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(10, 510, 991, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(centralWidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(10, 10, 871, 20));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(660, 200, 221, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(870, 20, 21, 501));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(220, 400, 161, 111));
        groupBox_5->setFont(font);
        groupBox_5->setAutoFillBackground(true);
        groupBox_5->setAlignment(Qt::AlignCenter);
        groupBox_5->setFlat(false);
        groupBox_5->setCheckable(false);
        verticalLayout_7 = new QVBoxLayout(groupBox_5);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_20->addWidget(label_8);

        horizontalSlider_PlanX = new QSlider(groupBox_5);
        horizontalSlider_PlanX->setObjectName(QString::fromUtf8("horizontalSlider_PlanX"));
        horizontalSlider_PlanX->setOrientation(Qt::Horizontal);

        horizontalLayout_20->addWidget(horizontalSlider_PlanX);


        verticalLayout_7->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_21->addWidget(label_9);

        horizontalSlider_PlanY = new QSlider(groupBox_5);
        horizontalSlider_PlanY->setObjectName(QString::fromUtf8("horizontalSlider_PlanY"));
        horizontalSlider_PlanY->setOrientation(Qt::Horizontal);

        horizontalLayout_21->addWidget(horizontalSlider_PlanY);


        verticalLayout_7->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_22->addWidget(label_10);

        horizontalSlider_PlanZ = new QSlider(groupBox_5);
        horizontalSlider_PlanZ->setObjectName(QString::fromUtf8("horizontalSlider_PlanZ"));
        horizontalSlider_PlanZ->setOrientation(Qt::Horizontal);

        horizontalLayout_22->addWidget(horizontalSlider_PlanZ);


        verticalLayout_7->addLayout(horizontalLayout_22);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(390, 400, 261, 112));
        groupBox_4->setFont(font);
        groupBox_4->setAutoFillBackground(true);
        groupBox_4->setAlignment(Qt::AlignCenter);
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        horizontalLayout_4->addWidget(label_14);

        horizontalSlider_Red = new QSlider(groupBox_4);
        horizontalSlider_Red->setObjectName(QString::fromUtf8("horizontalSlider_Red"));
        horizontalSlider_Red->setMaximum(255);
        horizontalSlider_Red->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_Red);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        horizontalLayout_5->addWidget(label_15);

        horizontalSlider_Blue = new QSlider(groupBox_4);
        horizontalSlider_Blue->setObjectName(QString::fromUtf8("horizontalSlider_Blue"));
        horizontalSlider_Blue->setMaximum(255);
        horizontalSlider_Blue->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_Blue);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        horizontalLayout_6->addWidget(label_16);

        horizontalSlider_Green = new QSlider(groupBox_4);
        horizontalSlider_Green->setObjectName(QString::fromUtf8("horizontalSlider_Green"));
        horizontalSlider_Green->setMaximum(255);
        horizontalSlider_Green->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_Green);


        verticalLayout_5->addLayout(horizontalLayout_6);


        horizontalLayout_9->addLayout(verticalLayout_5);

        widgetColor = new PlotterColor(groupBox_4);
        widgetColor->setObjectName(QString::fromUtf8("widgetColor"));

        horizontalLayout_9->addWidget(widgetColor);

        horizontalLayout_9->setStretch(0, 100);
        horizontalLayout_9->setStretch(1, 60);

        verticalLayout_6->addLayout(horizontalLayout_9);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 400, 191, 111));
        groupBox_6->setAutoFillBackground(true);
        groupBox_6->setAlignment(Qt::AlignCenter);
        groupBox_6->setFlat(false);
        groupBox_6->setCheckable(true);
        groupBox_6->setChecked(false);
        pushButton_Creator = new QPushButton(groupBox_6);
        pushButton_Creator->setObjectName(QString::fromUtf8("pushButton_Creator"));
        pushButton_Creator->setGeometry(QRect(20, 20, 51, 23));
        layoutWidget3 = new QWidget(groupBox_6);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 60, 277, 74));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_11->addWidget(label_4);

        plainTextEdit = new QPlainTextEdit(layoutWidget3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        horizontalLayout_11->addWidget(plainTextEdit);


        horizontalLayout_18->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_12->addWidget(label_6);

        plainTextEdit_2 = new QPlainTextEdit(layoutWidget3);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));

        horizontalLayout_12->addWidget(plainTextEdit_2);


        horizontalLayout_18->addLayout(horizontalLayout_12);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_10->addWidget(label_5);

        plainTextEdit_3 = new QPlainTextEdit(layoutWidget3);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));

        horizontalLayout_10->addWidget(plainTextEdit_3);


        horizontalLayout_18->addLayout(horizontalLayout_10);

        pushButton_Save = new QPushButton(groupBox_6);
        pushButton_Save->setObjectName(QString::fromUtf8("pushButton_Save"));
        pushButton_Save->setGeometry(QRect(120, 20, 51, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 903, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actionAbrirArquivo);
        mainToolBar->addAction(actionNovo);
        mainToolBar->addAction(actionSalvar);
        mainToolBar->addAction(actionVoxel);
        mainToolBar->addAction(actionVoxelCorte);
        mainToolBar->addAction(actionCaixa);
        mainToolBar->addAction(actionCaixaCorte);
        mainToolBar->addAction(actionEsfera);
        mainToolBar->addAction(actionEsferaCorte);
        mainToolBar->addAction(actionElipsoide);
        mainToolBar->addAction(actionelipsoideCorte);
        mainToolBar->addAction(actionPlanXY);
        mainToolBar->addAction(actionPlanXZ);
        mainToolBar->addAction(actionPlanYZ);
        mainToolBar->addAction(actionCores);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_XBox, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSlider_YBox, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSlider_ZBox, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(horizontalSlider_Red, SIGNAL(valueChanged(int)), widgetColor, SLOT(ColorR(int)));
        QObject::connect(horizontalSlider_Blue, SIGNAL(valueChanged(int)), widgetColor, SLOT(ColorB(int)));
        QObject::connect(horizontalSlider_Green, SIGNAL(valueChanged(int)), widgetColor, SLOT(ColorG(int)));
        QObject::connect(horizontalSlider_RzEllipsoid, SIGNAL(sliderMoved(int)), lcdNumber_13, SLOT(display(int)));
        QObject::connect(horizontalSlider_RyEllipsoid, SIGNAL(sliderMoved(int)), lcdNumber_12, SLOT(display(int)));
        QObject::connect(horizontalSlider_RxEllipsoid, SIGNAL(sliderMoved(int)), lcdNumber_11, SLOT(display(int)));
        QObject::connect(horizontalSlider_R, SIGNAL(valueChanged(int)), lcdNumber_7, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionEsfera->setText(QCoreApplication::translate("MainWindow", "Esfera", nullptr));
        actionCaixa->setText(QCoreApplication::translate("MainWindow", "Caixa", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        actionElipsoide->setText(QCoreApplication::translate("MainWindow", "Elipsoide", nullptr));
        actionCaixaCorte->setText(QCoreApplication::translate("MainWindow", "CaixaCorte", nullptr));
        actionEsferaCorte->setText(QCoreApplication::translate("MainWindow", "EsferaCorte", nullptr));
        actionCores->setText(QCoreApplication::translate("MainWindow", "Cores", nullptr));
        actionelipsoideCorte->setText(QCoreApplication::translate("MainWindow", "elipsoideCorte", nullptr));
        actionAbrirArquivo->setText(QCoreApplication::translate("MainWindow", "AbrirArquivo", nullptr));
        actionPlanXY->setText(QCoreApplication::translate("MainWindow", "PlanXY", nullptr));
        actionPlanXZ->setText(QCoreApplication::translate("MainWindow", "PlanXZ", nullptr));
        actionPlanYZ->setText(QCoreApplication::translate("MainWindow", "PlanYZ", nullptr));
        actionNovo->setText(QCoreApplication::translate("MainWindow", "Novo", nullptr));
        actionVoxelCorte->setText(QCoreApplication::translate("MainWindow", "VoxelCorte", nullptr));
        actionVoxel->setText(QCoreApplication::translate("MainWindow", "Voxel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Box", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Sphere", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Ellipsoid", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Rx", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Ry", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Rz", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Plans", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Px", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Py", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Pz", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Color", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Dimensions", nullptr));
        pushButton_Creator->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        pushButton_Save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
