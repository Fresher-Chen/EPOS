/********************************************************************************
** Form generated from reading UI file 'epos3.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EPOS3_H
#define UI_EPOS3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_epos3
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout_9;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_10;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QLabel *label_9;
    QDial *dial;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLabel *label_15;
    QSpacerItem *verticalSpacer_10;
    QPushButton *pushButton_9;
    QLabel *label_8;
    QPushButton *pushButton_8;
    QDial *dial_2;
    QLabel *label_16;
    QSpacerItem *verticalSpacer_11;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_8;
    QLCDNumber *lcdNumber_6;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_7;
    QLCDNumber *lcdNumber_8;
    QLCDNumber *lcdNumber_9;
    QLCDNumber *lcdNumber_10;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *label_14;
    QLCDNumber *lcdNumber;
    QSpacerItem *verticalSpacer_7;
    QLCDNumber *lcdNumber_3;
    QSpacerItem *verticalSpacer_5;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_5;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_13;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_10;
    QPushButton *pushButton_11;
    QSpacerItem *verticalSpacer_13;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *epos3)
    {
        if (epos3->objectName().isEmpty())
            epos3->setObjectName(QStringLiteral("epos3"));
        epos3->resize(874, 495);
        centralWidget = new QWidget(epos3);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_6 = new QHBoxLayout(centralWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        formLayout_9 = new QFormLayout();
        formLayout_9->setSpacing(6);
        formLayout_9->setObjectName(QStringLiteral("formLayout_9"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout_9->setWidget(0, QFormLayout::LabelRole, label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_9->setItem(1, QFormLayout::LabelRole, verticalSpacer);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_9->setWidget(2, QFormLayout::LabelRole, label_4);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout_9->setWidget(2, QFormLayout::FieldRole, comboBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_9->setItem(3, QFormLayout::LabelRole, verticalSpacer_2);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_9->setWidget(4, QFormLayout::LabelRole, label_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_9->setItem(5, QFormLayout::LabelRole, verticalSpacer_3);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_9->setWidget(6, QFormLayout::LabelRole, label_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_9->setItem(7, QFormLayout::LabelRole, verticalSpacer_4);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_9->setWidget(8, QFormLayout::LabelRole, label_7);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout_9->setWidget(4, QFormLayout::FieldRole, lineEdit);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout_9->setWidget(6, QFormLayout::FieldRole, lineEdit_2);

        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout_9->setWidget(8, QFormLayout::FieldRole, lineEdit_3);

        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        formLayout_9->setWidget(10, QFormLayout::LabelRole, pushButton_10);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_9->setItem(9, QFormLayout::LabelRole, verticalSpacer_12);


        horizontalLayout_6->addLayout(formLayout_9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout_7->addWidget(pushButton_7, 9, 2, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_7->addWidget(pushButton_4, 8, 1, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_7->addWidget(pushButton, 3, 1, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_7->addWidget(pushButton_6, 8, 3, 1, 1);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_7->addWidget(label_9, 0, 1, 1, 1);

        dial = new QDial(centralWidget);
        dial->setObjectName(QStringLiteral("dial"));

        gridLayout_7->addWidget(dial, 3, 2, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_7->addWidget(pushButton_5, 5, 2, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_7->addWidget(pushButton_2, 3, 3, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_7->addWidget(pushButton_3, 4, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_7->addWidget(label_2, 2, 2, 1, 1);

        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_7->addWidget(label_15, 6, 1, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_10, 6, 2, 1, 1);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout_7->addWidget(pushButton_9, 12, 2, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_7->addWidget(label_8, 1, 1, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout_7->addWidget(pushButton_8, 10, 2, 1, 1);

        dial_2 = new QDial(centralWidget);
        dial_2->setObjectName(QStringLiteral("dial_2"));

        gridLayout_7->addWidget(dial_2, 8, 2, 1, 1);

        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_7->addWidget(label_16, 7, 2, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_11, 11, 2, 1, 1);


        horizontalLayout_6->addLayout(gridLayout_7);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        lcdNumber_6 = new QLCDNumber(centralWidget);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));
        lcdNumber_6->setFrameShape(QFrame::Box);
        lcdNumber_6->setDigitCount(8);
        lcdNumber_6->setMode(QLCDNumber::Hex);
        lcdNumber_6->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_8->addWidget(lcdNumber_6, 2, 2, 1, 1);

        lcdNumber_2 = new QLCDNumber(centralWidget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        font.setPointSize(12);
        lcdNumber_2->setFont(font);
        lcdNumber_2->setDigitCount(4);
        lcdNumber_2->setMode(QLCDNumber::Hex);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_8->addWidget(lcdNumber_2, 8, 1, 1, 1);

        lcdNumber_7 = new QLCDNumber(centralWidget);
        lcdNumber_7->setObjectName(QStringLiteral("lcdNumber_7"));
        lcdNumber_7->setDigitCount(8);
        lcdNumber_7->setMode(QLCDNumber::Hex);
        lcdNumber_7->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_8->addWidget(lcdNumber_7, 4, 2, 1, 1);

        lcdNumber_8 = new QLCDNumber(centralWidget);
        lcdNumber_8->setObjectName(QStringLiteral("lcdNumber_8"));
        lcdNumber_8->setDigitCount(8);
        lcdNumber_8->setMode(QLCDNumber::Hex);
        lcdNumber_8->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_8->addWidget(lcdNumber_8, 6, 2, 1, 1);

        lcdNumber_9 = new QLCDNumber(centralWidget);
        lcdNumber_9->setObjectName(QStringLiteral("lcdNumber_9"));
        lcdNumber_9->setDigitCount(8);
        lcdNumber_9->setMode(QLCDNumber::Hex);
        lcdNumber_9->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_8->addWidget(lcdNumber_9, 8, 2, 1, 1);

        lcdNumber_10 = new QLCDNumber(centralWidget);
        lcdNumber_10->setObjectName(QStringLiteral("lcdNumber_10"));
        lcdNumber_10->setDigitCount(8);
        lcdNumber_10->setMode(QLCDNumber::Hex);
        lcdNumber_10->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_8->addWidget(lcdNumber_10, 10, 2, 1, 1);

        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_18, 1, 2, 1, 1);

        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_17, 1, 1, 1, 1);

        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_8->addWidget(label_14, 10, 0, 1, 1);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        lcdNumber->setPalette(palette);
        lcdNumber->setFont(font);
        lcdNumber->setDigitCount(4);
        lcdNumber->setMode(QLCDNumber::Hex);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_8->addWidget(lcdNumber, 10, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_7, 5, 0, 1, 1);

        lcdNumber_3 = new QLCDNumber(centralWidget);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setFont(font);
        lcdNumber_3->setDigitCount(8);
        lcdNumber_3->setMode(QLCDNumber::Dec);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_8->addWidget(lcdNumber_3, 6, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_5, 1, 0, 1, 1);

        lcdNumber_4 = new QLCDNumber(centralWidget);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        lcdNumber_4->setFont(font);
        lcdNumber_4->setDigitCount(8);
        lcdNumber_4->setMode(QLCDNumber::Dec);
        lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_8->addWidget(lcdNumber_4, 4, 1, 1, 1);

        lcdNumber_5 = new QLCDNumber(centralWidget);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));
        lcdNumber_5->setFont(font);
        lcdNumber_5->setFrameShape(QFrame::Box);
        lcdNumber_5->setLineWidth(1);
        lcdNumber_5->setMidLineWidth(0);
        lcdNumber_5->setDigitCount(2);
        lcdNumber_5->setMode(QLCDNumber::Hex);
        lcdNumber_5->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_5->setProperty("value", QVariant(0));
        lcdNumber_5->setProperty("intValue", QVariant(0));

        gridLayout_8->addWidget(lcdNumber_5, 2, 1, 1, 1);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_8->addWidget(label_12, 6, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_8, 7, 0, 1, 1);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_8->addWidget(label_11, 4, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_9, 9, 0, 1, 1);

        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_8->addWidget(label_13, 8, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_8->addWidget(label_3, 0, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_6, 3, 0, 1, 1);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_8->addWidget(label_10, 2, 0, 1, 1);

        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        gridLayout_8->addWidget(pushButton_11, 12, 1, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_13, 11, 1, 1, 1);


        horizontalLayout_6->addLayout(gridLayout_8);

        epos3->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(epos3);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 874, 19));
        epos3->setMenuBar(menuBar);
        mainToolBar = new QToolBar(epos3);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        epos3->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(epos3);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        epos3->setStatusBar(statusBar);

        retranslateUi(epos3);

        QMetaObject::connectSlotsByName(epos3);
    } // setupUi

    void retranslateUi(QMainWindow *epos3)
    {
        epos3->setWindowTitle(QApplication::translate("epos3", "epos3", 0));
        label->setText(QApplication::translate("epos3", "Settings", 0));
        label_4->setText(QApplication::translate("epos3", "Operation Mode", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("epos3", "PPM", 0)
         << QApplication::translate("epos3", "PVM", 0)
        );
        label_6->setText(QApplication::translate("epos3", "Target Position", 0));
        label_5->setText(QApplication::translate("epos3", "Target Velocity", 0));
        label_7->setText(QApplication::translate("epos3", "TextLabel", 0));
        lineEdit->setText(QApplication::translate("epos3", "100000", 0));
        lineEdit_2->setText(QApplication::translate("epos3", "1000", 0));
        lineEdit_3->setText(QApplication::translate("epos3", "0", 0));
        pushButton_10->setText(QApplication::translate("epos3", "Apply", 0));
        pushButton_7->setText(QApplication::translate("epos3", "Pause", 0));
        pushButton_4->setText(QApplication::translate("epos3", "Move Backward", 0));
        pushButton->setText(QApplication::translate("epos3", "Move Backward", 0));
        pushButton_6->setText(QApplication::translate("epos3", "Move Forward", 0));
        label_9->setText(QApplication::translate("epos3", "Control", 0));
        pushButton_5->setText(QApplication::translate("epos3", "Stop", 0));
        pushButton_2->setText(QApplication::translate("epos3", "Move Forward", 0));
        pushButton_3->setText(QApplication::translate("epos3", "Pause", 0));
        label_2->setText(QApplication::translate("epos3", "Change Velocity", 0));
        label_15->setText(QApplication::translate("epos3", "Motor 2", 0));
        pushButton_9->setText(QApplication::translate("epos3", "Restart", 0));
        label_8->setText(QApplication::translate("epos3", "Motor 1", 0));
        pushButton_8->setText(QApplication::translate("epos3", "Stop", 0));
        label_16->setText(QApplication::translate("epos3", "Change velocity", 0));
        label_18->setText(QApplication::translate("epos3", "Motor 2", 0));
        label_17->setText(QApplication::translate("epos3", "Motor 1", 0));
        label_14->setText(QApplication::translate("epos3", "Status Word", 0));
        label_12->setText(QApplication::translate("epos3", "Actual Velocity", 0));
        label_11->setText(QApplication::translate("epos3", "Actual Position", 0));
        label_13->setText(QApplication::translate("epos3", "Control Word", 0));
        label_3->setText(QApplication::translate("epos3", "Monitor", 0));
        label_10->setText(QApplication::translate("epos3", "Actual Operation Mode", 0));
        pushButton_11->setText(QApplication::translate("epos3", "Read Values", 0));
    } // retranslateUi

};

namespace Ui {
    class epos3: public Ui_epos3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EPOS3_H
