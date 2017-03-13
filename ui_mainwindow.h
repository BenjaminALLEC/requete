/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_erreurs;
    QPushButton *pushButton_about;
    QPushButton *pushButton_cancel;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_bdd;
    QComboBox *comboBox_bdd;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_tables;
    QSpacerItem *horizontalSpacer_4;
    QListWidget *listWidget_tables;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_champs;
    QSpacerItem *horizontalSpacer_2;
    QListWidget *listWidget_champs;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_requete;
    QSpacerItem *horizontalSpacer_6;
    QTextEdit *textEdit_requete;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_executer;
    QPushButton *pushButton_enregistrer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_resultat;
    QSpacerItem *horizontalSpacer_8;
    QTableWidget *tableWidget_resultat;
    QPushButton *pushButton_exporter;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_historique;
    QListWidget *listWidget_historique;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_savehistorique;
    QPushButton *pushButton_importer;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(806, 663);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_erreurs = new QLabel(centralWidget);
        label_erreurs->setObjectName(QString::fromUtf8("label_erreurs"));

        horizontalLayout_10->addWidget(label_erreurs);

        pushButton_about = new QPushButton(centralWidget);
        pushButton_about->setObjectName(QString::fromUtf8("pushButton_about"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_about->sizePolicy().hasHeightForWidth());
        pushButton_about->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(pushButton_about);

        pushButton_cancel = new QPushButton(centralWidget);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_10->addWidget(pushButton_cancel);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_bdd = new QLabel(centralWidget);
        label_bdd->setObjectName(QString::fromUtf8("label_bdd"));

        horizontalLayout->addWidget(label_bdd);

        comboBox_bdd = new QComboBox(centralWidget);
        comboBox_bdd->setObjectName(QString::fromUtf8("comboBox_bdd"));

        horizontalLayout->addWidget(comboBox_bdd);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_tables = new QLabel(centralWidget);
        label_tables->setObjectName(QString::fromUtf8("label_tables"));

        horizontalLayout_2->addWidget(label_tables);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        listWidget_tables = new QListWidget(centralWidget);
        listWidget_tables->setObjectName(QString::fromUtf8("listWidget_tables"));

        verticalLayout->addWidget(listWidget_tables);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_champs = new QLabel(centralWidget);
        label_champs->setObjectName(QString::fromUtf8("label_champs"));

        horizontalLayout_3->addWidget(label_champs);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        listWidget_champs = new QListWidget(centralWidget);
        listWidget_champs->setObjectName(QString::fromUtf8("listWidget_champs"));

        verticalLayout->addWidget(listWidget_champs);


        horizontalLayout_6->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_requete = new QLabel(centralWidget);
        label_requete->setObjectName(QString::fromUtf8("label_requete"));

        horizontalLayout_4->addWidget(label_requete);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_4);

        textEdit_requete = new QTextEdit(centralWidget);
        textEdit_requete->setObjectName(QString::fromUtf8("textEdit_requete"));

        verticalLayout_2->addWidget(textEdit_requete);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushButton_executer = new QPushButton(centralWidget);
        pushButton_executer->setObjectName(QString::fromUtf8("pushButton_executer"));

        horizontalLayout_9->addWidget(pushButton_executer);

        pushButton_enregistrer = new QPushButton(centralWidget);
        pushButton_enregistrer->setObjectName(QString::fromUtf8("pushButton_enregistrer"));
        pushButton_enregistrer->setEnabled(false);

        horizontalLayout_9->addWidget(pushButton_enregistrer);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        label_resultat = new QLabel(centralWidget);
        label_resultat->setObjectName(QString::fromUtf8("label_resultat"));

        horizontalLayout_5->addWidget(label_resultat);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_5);

        tableWidget_resultat = new QTableWidget(centralWidget);
        tableWidget_resultat->setObjectName(QString::fromUtf8("tableWidget_resultat"));

        verticalLayout_2->addWidget(tableWidget_resultat);

        pushButton_exporter = new QPushButton(centralWidget);
        pushButton_exporter->setObjectName(QString::fromUtf8("pushButton_exporter"));

        verticalLayout_2->addWidget(pushButton_exporter);


        horizontalLayout_6->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_historique = new QLabel(centralWidget);
        label_historique->setObjectName(QString::fromUtf8("label_historique"));

        horizontalLayout_8->addWidget(label_historique);


        verticalLayout_3->addLayout(horizontalLayout_8);

        listWidget_historique = new QListWidget(centralWidget);
        listWidget_historique->setObjectName(QString::fromUtf8("listWidget_historique"));

        verticalLayout_3->addWidget(listWidget_historique);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_savehistorique = new QPushButton(centralWidget);
        pushButton_savehistorique->setObjectName(QString::fromUtf8("pushButton_savehistorique"));

        horizontalLayout_7->addWidget(pushButton_savehistorique);

        pushButton_importer = new QPushButton(centralWidget);
        pushButton_importer->setObjectName(QString::fromUtf8("pushButton_importer"));

        horizontalLayout_7->addWidget(pushButton_importer);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_6->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Query SQL", 0, QApplication::UnicodeUTF8));
        label_erreurs->setText(QString());
        pushButton_about->setText(QApplication::translate("MainWindow", "&About", 0, QApplication::UnicodeUTF8));
        pushButton_cancel->setText(QApplication::translate("MainWindow", "&Exit", 0, QApplication::UnicodeUTF8));
        label_bdd->setText(QApplication::translate("MainWindow", "Data base", 0, QApplication::UnicodeUTF8));
        label_tables->setText(QApplication::translate("MainWindow", "Table", 0, QApplication::UnicodeUTF8));
        label_champs->setText(QApplication::translate("MainWindow", "field", 0, QApplication::UnicodeUTF8));
        label_requete->setText(QApplication::translate("MainWindow", "Query", 0, QApplication::UnicodeUTF8));
        pushButton_executer->setText(QApplication::translate("MainWindow", "&Execute", 0, QApplication::UnicodeUTF8));
        pushButton_enregistrer->setText(QApplication::translate("MainWindow", "&Save", 0, QApplication::UnicodeUTF8));
        label_resultat->setText(QApplication::translate("MainWindow", "Result", 0, QApplication::UnicodeUTF8));
        pushButton_exporter->setText(QApplication::translate("MainWindow", "Export", 0, QApplication::UnicodeUTF8));
        label_historique->setText(QApplication::translate("MainWindow", "Historical", 0, QApplication::UnicodeUTF8));
        pushButton_savehistorique->setText(QApplication::translate("MainWindow", "&Save", 0, QApplication::UnicodeUTF8));
        pushButton_importer->setText(QApplication::translate("MainWindow", "&Load", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
