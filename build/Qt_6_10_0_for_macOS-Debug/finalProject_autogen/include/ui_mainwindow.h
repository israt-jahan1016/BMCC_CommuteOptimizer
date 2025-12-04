/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *welcomePage;
    QLabel *label_4;
    QPushButton *WloginButton;
    QPushButton *WsigninButton;
    QWidget *loginPage;
    QLabel *idLabel;
    QLineEdit *idInput;
    QPushButton *loginButton;
    QLabel *loginErrorLabel;
    QPushButton *pushButton;
    QLabel *label_3;
    QWidget *homePage;
    QLabel *label;
    QLineEdit *stationLineEdit;
    QLabel *classSelectLabel;
    QComboBox *selectClassComboBox;
    QPushButton *continueButton;
    QLabel *label_5;
    QLabel *label_16;
    QTimeEdit *startTimeEdit;
    QWidget *emailPreviewPage;
    QLabel *label_2;
    QTextEdit *emailBodyTextEdit;
    QPushButton *sendEmailButton;
    QPushButton *backToResultButton;
    QWidget *resultPage;
    QLabel *resultHeaderLabel;
    QLabel *stationTitleLabel;
    QLabel *classTitleLabel;
    QLabel *statLabel;
    QLabel *arrLabel;
    QLabel *label_9;
    QLabel *stationResultLabel;
    QLabel *classResultLabel;
    QLabel *serviceStatusLabel;
    QLabel *arrivalTimeLabel;
    QLabel *arrivalStatusLabel;
    QGroupBox *alternativeGroupBox;
    QPushButton *backToHomeButton;
    QLabel *label_6;
    QListWidget *alternativeRoutesListWidget;
    QLabel *label_15;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(833, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 50, 711, 421));
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #D1E5F4;\n"
"}"));
        welcomePage = new QWidget();
        welcomePage->setObjectName("welcomePage");
        label_4 = new QLabel(welcomePage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(300, 90, 141, 61));
        label_4->setStyleSheet(QString::fromUtf8("QLabel#label_4 {\n"
"    font-size: 25px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace;  \n"
"    color: #4A4A4A;    \n"
"    background-color: #D1E5F4; \n"
"}"));
        WloginButton = new QPushButton(welcomePage);
        WloginButton->setObjectName("WloginButton");
        WloginButton->setGeometry(QRect(300, 200, 100, 32));
        WloginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    padding: 4px 13px;\n"
"    font-size: 16px;\n"
"    background-color: #FFFFFF; \n"
"    color: #4A4A4A; \n"
"    border: 1px solid #000000;     \n"
"    border-radius: 0px;  \n"
"    font-family: \"Courier New\", monospace;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E0E0E0; \n"
"    padding: 18px 27px 12px 33px;\n"
"}"));
        WsigninButton = new QPushButton(welcomePage);
        WsigninButton->setObjectName("WsigninButton");
        WsigninButton->setGeometry(QRect(300, 250, 100, 32));
        WsigninButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    padding: 4px 13px;\n"
"    font-size: 16px;\n"
"    background-color: #FFFFFF;\n"
"    color: #4A4A4A;\n"
"    border: 1px solid #000000;\n"
"    border-radius: 0px;\n"
"    font-family: \"Courier New\", monospace;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E0E0E0; \n"
"    padding: 18px 27px 12px 33px; \n"
"}"));
        stackedWidget->addWidget(welcomePage);
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        idLabel = new QLabel(loginPage);
        idLabel->setObjectName("idLabel");
        idLabel->setGeometry(QRect(171, 150, 181, 20));
        idLabel->setStyleSheet(QString::fromUtf8("QLabel#idLabel {\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace;\n"
"    color: #4A4A4A;\n"
"    background-color: #D1E5F4;\n"
"\n"
"}"));
        idInput = new QLineEdit(loginPage);
        idInput->setObjectName("idInput");
        idInput->setGeometry(QRect(381, 150, 141, 21));
        idInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF;\n"
"    color: #4A4A4A;\n"
"    font-family: \"Courier New\", monospace;\n"
"    font-size: 16px;\n"
"    font-weight: 500;\n"
"    border: 1px solid #000000;\n"
"    border-radius: 0px;\n"
"    padding: 5px;\n"
"}"));
        loginButton = new QPushButton(loginPage);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(301, 240, 100, 32));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    padding: 4px 13px;\n"
"    font-size: 16px;\n"
"    background-color: #FFFFFF;\n"
"    color: #4A4A4A;\n"
"    border: 1px solid #000000;\n"
"    border-radius: 0px; \n"
"    font-family: \"Courier New\", monospace;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E0E0E0; \n"
"    padding: 18px 27px 12px 33px; \n"
"}"));
        loginErrorLabel = new QLabel(loginPage);
        loginErrorLabel->setObjectName("loginErrorLabel");
        loginErrorLabel->setGeometry(QRect(260, 190, 181, 20));
        loginErrorLabel->setStyleSheet(QString::fromUtf8("color: red;"));
        pushButton = new QPushButton(loginPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 290, 271, 32));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    padding: 4px 13px;\n"
"    font-size: 16px; \n"
"    background-color: #FFFFFF;\n"
"    color: #4A4A4A;\n"
"    border: 1px solid #000000;\n"
"    border-radius: 0px;\n"
"    font-family: \"Courier New\", monospace;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E0E0E0; \n"
"    padding: 18px 27px 12px 33px;\n"
"}"));
        label_3 = new QLabel(loginPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(231, 70, 231, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel#label_3 {\n"
"    font-size: 25px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; \n"
"    color: #4A4A4A;\n"
"    background-color: #D1E5F4;\n"
"}"));
        stackedWidget->addWidget(loginPage);
        homePage = new QWidget();
        homePage->setObjectName("homePage");
        label = new QLabel(homePage);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 100, 231, 20));
        label->setStyleSheet(QString::fromUtf8("QLabel#label {\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; \n"
"    color: #4A4A4A;\n"
"    background-color: #D1E5F4; \n"
"}"));
        stationLineEdit = new QLineEdit(homePage);
        stationLineEdit->setObjectName("stationLineEdit");
        stationLineEdit->setGeometry(QRect(200, 130, 291, 21));
        stationLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
" \n"
"    background-color: #FFFFFF;\n"
"    color: #4A4A4A; \n"
"    font-family: \"Courier New\", monospace; \n"
"    font-size: 13px; \n"
"    font-weight: 500;\n"
"    border: 1px solid #000000;\n"
"    border-radius: 0px;\n"
"    padding: 5px;\n"
"}"));
        classSelectLabel = new QLabel(homePage);
        classSelectLabel->setObjectName("classSelectLabel");
        classSelectLabel->setGeometry(QRect(270, 170, 151, 20));
        classSelectLabel->setStyleSheet(QString::fromUtf8("QLabel#classSelectLabel {\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace;\n"
"    color: #4A4A4A;\n"
"    background-color: #D1E5F4;\n"
"\n"
"}"));
        selectClassComboBox = new QComboBox(homePage);
        selectClassComboBox->setObjectName("selectClassComboBox");
        selectClassComboBox->setGeometry(QRect(170, 200, 351, 21));
        selectClassComboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    font-family: \"Courier New\", monospace;\n"
"    font-size: 13px;\n"
"    font-weight: 300;\n"
"    border: 1px solid #000000;\n"
"    border-radius: 0px;\n"
"    padding: 5px;\n"
"    background-color: #FFFFFF;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    font-family: \"Courier New\", monospace;\n"
"    font-size: 13px;\n"
"    font-weight: 300;\n"
"    border: 1px solid #000000;\n"
"    border-radius: 0px;\n"
"    background-color: #FFFFFF;\n"
"    selection-background-color: #4A4A4A; \n"
"}"));
        continueButton = new QPushButton(homePage);
        continueButton->setObjectName("continueButton");
        continueButton->setGeometry(QRect(290, 340, 111, 31));
        continueButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    padding: 4px 13px; \n"
"    font-size: 16px;       \n"
"    background-color: #FFFFFF;    \n"
"    color: #4A4A4A;             \n"
"    border: 1px solid #000000;  \n"
"    border-radius: 0px;       \n"
"    font-family: \"Courier New\", monospace;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E0E0E0; \n"
"    padding: 18px 27px 12px 33px;\n"
"}"));
        label_5 = new QLabel(homePage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(270, 40, 151, 41));
        label_5->setStyleSheet(QString::fromUtf8("QLabel#label_5 {\n"
"    font-size: 25px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace;\n"
"    color: #4A4A4A;\n"
"    background-color: #D1E5F4;\n"
"}"));
        label_16 = new QLabel(homePage);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(240, 240, 221, 16));
        label_16->setStyleSheet(QString::fromUtf8("QLabel#label_16{\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; \n"
"    \n"
"\n"
"    color: #4A4A4A;    \n"
"    background-color: #D1E5F4; \n"
"\n"
"}"));
        startTimeEdit = new QTimeEdit(homePage);
        startTimeEdit->setObjectName("startTimeEdit");
        startTimeEdit->setGeometry(QRect(290, 270, 101, 22));
        startTimeEdit->setStyleSheet(QString::fromUtf8("QTimeEdit {\n"
"    font-family: \"Courier New\", monospace;\n"
"    font-size: 13px; \n"
"    font-weight: 300;\n"
"    border: 1px solid #000000;\n"
"    border-radius: 0px;\n"
"    padding: 5px;\n"
"    background-color: #FFFFFF;\n"
"    selection-background-color: #4A4A4A; \n"
"    selection-color: #FFFFFF; \n"
"}\n"
"\n"
"QTimeEdit::up-button, QTimeEdit::down-button {\n"
"    subcontrol-origin: border;\n"
"    width: 15px; \n"
"    border: 0px; \n"
"    border-left: 1px solid #000000; \n"
"    border-radius: 0px;\n"
"    padding: 2px;\n"
"    background-color: #4A4A4A\n"
"}\n"
"\n"
"QTimeEdit::up-arrow {\n"
"    image: url(:/qss_icons/rc/up_arrow.png); \n"
"    width: 8px;\n"
"    height: 8px;\n"
"}\n"
"\n"
"QTimeEdit::down-arrow {\n"
"    image: url(:/qss_icons/rc/down_arrow.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"}\n"
"QTimeEdit::up-button:hover, QTimeEdit::down-button:hover {\n"
"    background-color: #CCCCCC; \n"
"}\n"
"\n"
"QTimeEdit::up-button:pressed, QTimeEdit::down-button:pressed {\n"
""
                        "    background-color: #AAAAAA; \n"
"}"));
        stackedWidget->addWidget(homePage);
        emailPreviewPage = new QWidget();
        emailPreviewPage->setObjectName("emailPreviewPage");
        label_2 = new QLabel(emailPreviewPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 60, 221, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel#label_2 {\n"
"    /* Font: Blocky, Bold, and Big */\n"
"    font-size: 25px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; /* Use a monospaced font for a blocky look */\n"
"    \n"
"    /* Colors and Border for the \"Title Bar\" Look */\n"
"    color: #4A4A4A;             /* Dark gray text */\n"
"    background-color: #D1E5F4;  /* Light/White background */\n"
"\n"
"}"));
        emailBodyTextEdit = new QTextEdit(emailPreviewPage);
        emailBodyTextEdit->setObjectName("emailBodyTextEdit");
        emailBodyTextEdit->setGeometry(QRect(140, 120, 441, 111));
        emailBodyTextEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    /* 1. Background Color */\n"
"    background-color: #FFFFFF;        /* Sets the background to White */\n"
"    \n"
"    /* 2. Text Color and Font */\n"
"    color: #4A4A4A;                   /* Dark gray text color */\n"
"    font-family: \"Courier New\", monospace; /* Your preferred retro font */\n"
"    font-size: 13px;                  /* Sets the font size to 13 pixels */\n"
"    font-weight: 500;\n"
"    \n"
"    /* 3. Border (To match your retro theme) */\n"
"    border: 1px solid #000000;\n"
"    border-radius: 0px;\n"
"    padding: 1px;                     /* Padding inside the box */\n"
"}"));
        sendEmailButton = new QPushButton(emailPreviewPage);
        sendEmailButton->setObjectName("sendEmailButton");
        sendEmailButton->setGeometry(QRect(300, 280, 121, 32));
        sendEmailButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* 1. Size Increase (Bigger Button) */\n"
"    padding: 4px 13px;             /* Increased padding to make the button area bigger */\n"
"    font-size: 16px;                /* Slightly larger font size */\n"
"    \n"
"    /* 2. Colors: White Background */\n"
"    background-color: #FFFFFF;      /* Pure White background */\n"
"    color: #4A4A4A;                 /* Dark gray text (keeps the retro dark outline text) */\n"
"    \n"
"    /* 3. Border and Font (Same as before) */\n"
"    border: 1px solid #000000;      /* Thick black border */\n"
"    border-radius: 0px;             /* Sharp corners */\n"
"    font-family: \"Courier New\", monospace;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"/* 4. Pressed State (Ensures the click animation still works with the new color) */\n"
"QPushButton:pressed {\n"
"    /* Slightly darker gray/off-white when pressed */\n"
"    background-color: #E0E0E0; \n"
"    \n"
"    /* Shift the button's content to simulate a physical click */\n"
"    padding: 18px 27p"
                        "x 12px 33px; /* Adjusted padding values for the new size */\n"
"}"));
        backToResultButton = new QPushButton(emailPreviewPage);
        backToResultButton->setObjectName("backToResultButton");
        backToResultButton->setGeometry(QRect(310, 330, 100, 32));
        backToResultButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* 1. Size Increase (Bigger Button) */\n"
"    padding: 4px 13px;             /* Increased padding to make the button area bigger */\n"
"    font-size: 16px;                /* Slightly larger font size */\n"
"    \n"
"    /* 2. Colors: White Background */\n"
"    background-color: #FFFFFF;      /* Pure White background */\n"
"    color: #4A4A4A;                 /* Dark gray text (keeps the retro dark outline text) */\n"
"    \n"
"    /* 3. Border and Font (Same as before) */\n"
"    border: 1px solid #000000;      /* Thick black border */\n"
"    border-radius: 0px;             /* Sharp corners */\n"
"    font-family: \"Courier New\", monospace;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"/* 4. Pressed State (Ensures the click animation still works with the new color) */\n"
"QPushButton:pressed {\n"
"    /* Slightly darker gray/off-white when pressed */\n"
"    background-color: #E0E0E0; \n"
"    \n"
"    /* Shift the button's content to simulate a physical click */\n"
"    padding: 18px 27p"
                        "x 12px 33px; /* Adjusted padding values for the new size */\n"
"}"));
        stackedWidget->addWidget(emailPreviewPage);
        resultPage = new QWidget();
        resultPage->setObjectName("resultPage");
        resultHeaderLabel = new QLabel(resultPage);
        resultHeaderLabel->setObjectName("resultHeaderLabel");
        resultHeaderLabel->setGeometry(QRect(250, 20, 231, 31));
        resultHeaderLabel->setStyleSheet(QString::fromUtf8("QLabel#resultHeaderLabel {\n"
"    /* Font: Blocky, Bold, and Big */\n"
"    font-size: 25px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; /* Use a monospaced font for a blocky look */\n"
"    \n"
"    /* Colors and Border for the \"Title Bar\" Look */\n"
"    color: #4A4A4A;             /* Dark gray text */\n"
"    background-color: #D1E5F4;  /* Light/White background */\n"
"\n"
"}"));
        stationTitleLabel = new QLabel(resultPage);
        stationTitleLabel->setObjectName("stationTitleLabel");
        stationTitleLabel->setGeometry(QRect(60, 80, 71, 16));
        stationTitleLabel->setStyleSheet(QString::fromUtf8("QLabel#stationTitleLabel {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; \n"
"    \n"
"\n"
"    color: #4A4A4A;    \n"
"    background-color: #D1E5F4; \n"
"\n"
"}"));
        classTitleLabel = new QLabel(resultPage);
        classTitleLabel->setObjectName("classTitleLabel");
        classTitleLabel->setGeometry(QRect(60, 100, 58, 16));
        classTitleLabel->setStyleSheet(QString::fromUtf8("QLabel#classTitleLabel {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; \n"
"    \n"
"\n"
"    color: #4A4A4A;    \n"
"    background-color: #D1E5F4; \n"
"\n"
"}"));
        statLabel = new QLabel(resultPage);
        statLabel->setObjectName("statLabel");
        statLabel->setGeometry(QRect(60, 130, 131, 16));
        statLabel->setStyleSheet(QString::fromUtf8("QLabel#statLabel {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; \n"
"    \n"
"\n"
"    color: #4A4A4A;    \n"
"    background-color: #D1E5F4; \n"
"\n"
"}"));
        arrLabel = new QLabel(resultPage);
        arrLabel->setObjectName("arrLabel");
        arrLabel->setGeometry(QRect(60, 190, 71, 16));
        arrLabel->setStyleSheet(QString::fromUtf8("QLabel#arrLabel {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; \n"
"    \n"
"\n"
"    color: #4A4A4A;    \n"
"    background-color: #D1E5F4; \n"
"\n"
"}"));
        label_9 = new QLabel(resultPage);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(60, 210, 61, 16));
        label_9->setStyleSheet(QString::fromUtf8("QLabel#label_9 {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; \n"
"    \n"
"\n"
"    color: #4A4A4A;    \n"
"    background-color: #D1E5F4; \n"
"\n"
"}"));
        stationResultLabel = new QLabel(resultPage);
        stationResultLabel->setObjectName("stationResultLabel");
        stationResultLabel->setGeometry(QRect(200, 80, 211, 16));
        stationResultLabel->setStyleSheet(QString::fromUtf8("QLabel#stationResultLabel {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; \n"
"    \n"
"\n"
"    color: #4A4A4A;    \n"
"    background-color: #D1E5F4; \n"
"\n"
"}"));
        classResultLabel = new QLabel(resultPage);
        classResultLabel->setObjectName("classResultLabel");
        classResultLabel->setGeometry(QRect(200, 100, 411, 16));
        classResultLabel->setStyleSheet(QString::fromUtf8("QLabel#classResultLabel {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; \n"
"    \n"
"\n"
"    color: #4A4A4A;    \n"
"    background-color: #D1E5F4; \n"
"\n"
"}"));
        serviceStatusLabel = new QLabel(resultPage);
        serviceStatusLabel->setObjectName("serviceStatusLabel");
        serviceStatusLabel->setGeometry(QRect(200, 130, 261, 16));
        serviceStatusLabel->setStyleSheet(QString::fromUtf8("QLabel#serviceStatusLabel {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; \n"
"    \n"
"\n"
"    color: #4A4A4A;    \n"
"    background-color: #D1E5F4; \n"
"\n"
"}"));
        arrivalTimeLabel = new QLabel(resultPage);
        arrivalTimeLabel->setObjectName("arrivalTimeLabel");
        arrivalTimeLabel->setGeometry(QRect(200, 190, 211, 16));
        arrivalTimeLabel->setStyleSheet(QString::fromUtf8("QLabel#arrivalTimeLabel {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; \n"
"    \n"
"\n"
"    color: #4A4A4A;    \n"
"    background-color: #D1E5F4; \n"
"\n"
"}"));
        arrivalStatusLabel = new QLabel(resultPage);
        arrivalStatusLabel->setObjectName("arrivalStatusLabel");
        arrivalStatusLabel->setGeometry(QRect(200, 210, 311, 16));
        arrivalStatusLabel->setStyleSheet(QString::fromUtf8("QLabel#arrivalStatusLabel {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; \n"
"    \n"
"\n"
"    color: #4A4A4A;    \n"
"    background-color: #D1E5F4; \n"
"\n"
"}"));
        alternativeGroupBox = new QGroupBox(resultPage);
        alternativeGroupBox->setObjectName("alternativeGroupBox");
        alternativeGroupBox->setGeometry(QRect(200, 240, 291, 91));
        alternativeGroupBox->setStyleSheet(QString::fromUtf8("QGroupBox#alternativeGroupBox {\n"
"/* 1. AGGRESSIVE FONT OVERRIDE on the main container\n"
"* This uses a generic monospace font that MUST be available\n"
"* on your system, forcing it to inherit.\n"
"*/\n"
"qproperty-font: \"monospace, 13pt, bold\";\n"
"\n"
"background-color: #D1E5F4;\n"
"border-radius: 0px;\n"
"margin-top: 13px;\n"
"padding-top: 1px;\n"
"\n"
"\n"
"}\n"
"\n"
"QGroupBox#alternativeGroupBox::title {\n"
"/* 2. RE-AFFIRM the specific size and weight on the title sub-control */\n"
"subcontrol-origin: margin;\n"
"subcontrol-position: top center;\n"
"padding: 5px 15px;\n"
"\n"
"/* Using 'inherit' on font-family here can sometimes grab the qproperty setting */\n"
"font-family: inherit; \n"
"font-size: 13px;\n"
"font-weight: bold;\n"
"\n"
"color: #4A4A4A;\n"
"background-color: #D1E5F4;\n"
"border: 0px solid #000000;\n"
"border-radius: 0px;\n"
"\n"
"}"));
        backToHomeButton = new QPushButton(resultPage);
        backToHomeButton->setObjectName("backToHomeButton");
        backToHomeButton->setGeometry(QRect(300, 360, 100, 32));
        backToHomeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* 1. Size Increase (Bigger Button) */\n"
"    padding: 4px 13px;             /* Increased padding to make the button area bigger */\n"
"    font-size: 16px;                /* Slightly larger font size */\n"
"    \n"
"    /* 2. Colors: White Background */\n"
"    background-color: #FFFFFF;      /* Pure White background */\n"
"    color: #4A4A4A;                 /* Dark gray text (keeps the retro dark outline text) */\n"
"    \n"
"    /* 3. Border and Font (Same as before) */\n"
"    border: 1px solid #000000;      /* Thick black border */\n"
"    border-radius: 0px;             /* Sharp corners */\n"
"    font-family: \"Courier New\", monospace;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"/* 4. Pressed State (Ensures the click animation still works with the new color) */\n"
"QPushButton:pressed {\n"
"    /* Slightly darker gray/off-white when pressed */\n"
"    background-color: #E0E0E0; \n"
"    \n"
"    /* Shift the button's content to simulate a physical click */\n"
"    padding: 18px 27p"
                        "x 12px 33px; /* Adjusted padding values for the new size */\n"
"}\n"
""));
        label_6 = new QLabel(resultPage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(220, 250, 251, 21));
        label_6->setStyleSheet(QString::fromUtf8("QLabel#label_6 {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; \n"
"    \n"
"\n"
"    color: #4A4A4A;    \n"
"    background-color: #D1E5F4; \n"
"\n"
"}"));
        alternativeRoutesListWidget = new QListWidget(resultPage);
        alternativeRoutesListWidget->setObjectName("alternativeRoutesListWidget");
        alternativeRoutesListWidget->setGeometry(QRect(210, 280, 271, 61));
        alternativeRoutesListWidget->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"background-color: #FFFFFF; \n"
"border: 0.5px solid #000000;     \n"
"border-radius: 0px;\n"
"padding: 3px;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"font-family: \"Courier New\", monospace;\n"
"font-size: 12px;\n"
"font-weight: 300;\n"
"color: #4A4A4A;   \n"
"\n"
"background-color: #FFFFFF; \n"
"padding: 3px; \n"
"\n"
"\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"font-family: \"Courier New\", monospace;\n"
"font-size: 12px;\n"
"background-color: #D1E5F4;\n"
"color: #4A4A4A;     \n"
"}"));
        label_15 = new QLabel(resultPage);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(60, 170, 101, 16));
        label_15->setStyleSheet(QString::fromUtf8("QLabel#label_15 {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Courier New\", monospace; \n"
"    \n"
"\n"
"    color: #4A4A4A;    \n"
"    background-color: #D1E5F4; \n"
"\n"
"}"));
        stackedWidget->addWidget(resultPage);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 833, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Welcome", nullptr));
        WloginButton->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        WsigninButton->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        idLabel->setText(QCoreApplication::translate("MainWindow", "Enter your CUNY ID", nullptr));
        idInput->setText(QString());
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        loginErrorLabel->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Don't have an account?", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Student Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Select your home station", nullptr));
        classSelectLabel->setText(QCoreApplication::translate("MainWindow", "Select your class", nullptr));
        continueButton->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Home Page", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Select your starting time", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Email Preview", nullptr));
        emailBodyTextEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Courier New','monospace'; font-size:13px; font-weight:500; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400;\">Hello Professor Name,</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bott"
                        "om:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400;\">I may arrive a few minutes late to class today due to subway delays.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400;\">Based on my commute, I might be about x minutes late.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400;\">Best regards,</span></p>\n"
"<p style=\" margin-top:0px; margin-bott"
                        "om:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400;\">Student Name</span></p></body></html>", nullptr));
        sendEmailButton->setText(QCoreApplication::translate("MainWindow", "Send Email", nullptr));
        backToResultButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        resultHeaderLabel->setText(QCoreApplication::translate("MainWindow", "Commute Summary", nullptr));
        stationTitleLabel->setText(QCoreApplication::translate("MainWindow", "Station:", nullptr));
        classTitleLabel->setText(QCoreApplication::translate("MainWindow", "Class:", nullptr));
        statLabel->setText(QCoreApplication::translate("MainWindow", "Service Status:", nullptr));
        arrLabel->setText(QCoreApplication::translate("MainWindow", "Arrival:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Status:", nullptr));
        stationResultLabel->setText(QCoreApplication::translate("MainWindow", "Selected station", nullptr));
        classResultLabel->setText(QCoreApplication::translate("MainWindow", "Selected class", nullptr));
        serviceStatusLabel->setText(QCoreApplication::translate("MainWindow", "train line - delay status", nullptr));
        arrivalTimeLabel->setText(QCoreApplication::translate("MainWindow", "Arrival time ", nullptr));
        arrivalStatusLabel->setText(QCoreApplication::translate("MainWindow", "You maybe late/early", nullptr));
        alternativeGroupBox->setTitle(QString());
        backToHomeButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Alternative Route Suggestions", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Start Time:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
