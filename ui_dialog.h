/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_serveur;
    QLineEdit *lineEdit_server;
    QLabel *label_login;
    QLineEdit *lineEdit_login;
    QLabel *label_mdp;
    QLineEdit *lineEdit_mdp;
    QLabel *label_erreur;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_connexion;
    QPushButton *pushButton_annuler;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(401, 279);
        verticalLayout_3 = new QVBoxLayout(Dialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_serveur = new QLabel(Dialog);
        label_serveur->setObjectName(QString::fromUtf8("label_serveur"));

        verticalLayout->addWidget(label_serveur);

        lineEdit_server = new QLineEdit(Dialog);
        lineEdit_server->setObjectName(QString::fromUtf8("lineEdit_server"));

        verticalLayout->addWidget(lineEdit_server);

        label_login = new QLabel(Dialog);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_login->sizePolicy().hasHeightForWidth());
        label_login->setSizePolicy(sizePolicy);
        label_login->setLayoutDirection(Qt::LeftToRight);
        label_login->setFrameShape(QFrame::NoFrame);
        label_login->setTextFormat(Qt::AutoText);
        label_login->setScaledContents(false);
        label_login->setMargin(0);
        label_login->setIndent(5);

        verticalLayout->addWidget(label_login);

        lineEdit_login = new QLineEdit(Dialog);
        lineEdit_login->setObjectName(QString::fromUtf8("lineEdit_login"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_login->sizePolicy().hasHeightForWidth());
        lineEdit_login->setSizePolicy(sizePolicy1);
        lineEdit_login->setMinimumSize(QSize(0, 0));
        lineEdit_login->setSizeIncrement(QSize(0, 0));

        verticalLayout->addWidget(lineEdit_login);


        verticalLayout_2->addLayout(verticalLayout);

        label_mdp = new QLabel(Dialog);
        label_mdp->setObjectName(QString::fromUtf8("label_mdp"));
        sizePolicy.setHeightForWidth(label_mdp->sizePolicy().hasHeightForWidth());
        label_mdp->setSizePolicy(sizePolicy);
        label_mdp->setMinimumSize(QSize(0, 0));

        verticalLayout_2->addWidget(label_mdp);

        lineEdit_mdp = new QLineEdit(Dialog);
        lineEdit_mdp->setObjectName(QString::fromUtf8("lineEdit_mdp"));
        sizePolicy1.setHeightForWidth(lineEdit_mdp->sizePolicy().hasHeightForWidth());
        lineEdit_mdp->setSizePolicy(sizePolicy1);
        lineEdit_mdp->setMinimumSize(QSize(0, 0));
        lineEdit_mdp->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_mdp->setSizeIncrement(QSize(0, 0));
        lineEdit_mdp->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineEdit_mdp);


        verticalLayout_3->addLayout(verticalLayout_2);

        label_erreur = new QLabel(Dialog);
        label_erreur->setObjectName(QString::fromUtf8("label_erreur"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_erreur->sizePolicy().hasHeightForWidth());
        label_erreur->setSizePolicy(sizePolicy2);
        label_erreur->setMinimumSize(QSize(383, 0));
        label_erreur->setSizeIncrement(QSize(0, 0));
        label_erreur->setBaseSize(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(229, 18, 18, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 108, 108, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(242, 63, 63, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(114, 9, 9, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(153, 12, 12, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(242, 136, 136, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        label_erreur->setPalette(palette);
        label_erreur->setLineWidth(-1);
        label_erreur->setMidLineWidth(0);
        label_erreur->setTextFormat(Qt::AutoText);
        label_erreur->setScaledContents(false);
        label_erreur->setWordWrap(false);
        label_erreur->setMargin(0);
        label_erreur->setIndent(0);

        verticalLayout_3->addWidget(label_erreur);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_connexion = new QPushButton(Dialog);
        pushButton_connexion->setObjectName(QString::fromUtf8("pushButton_connexion"));
        pushButton_connexion->setEnabled(false);
        pushButton_connexion->setFocusPolicy(Qt::StrongFocus);
        pushButton_connexion->setAutoDefault(false);
        pushButton_connexion->setDefault(true);

        horizontalLayout_3->addWidget(pushButton_connexion);

        pushButton_annuler = new QPushButton(Dialog);
        pushButton_annuler->setObjectName(QString::fromUtf8("pushButton_annuler"));

        horizontalLayout_3->addWidget(pushButton_annuler);


        verticalLayout_3->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(lineEdit_login, lineEdit_mdp);
        QWidget::setTabOrder(lineEdit_mdp, pushButton_connexion);
        QWidget::setTabOrder(pushButton_connexion, pushButton_annuler);
        QWidget::setTabOrder(pushButton_annuler, lineEdit_server);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Connection", 0, QApplication::UnicodeUTF8));
        label_serveur->setText(QApplication::translate("Dialog", "Server", 0, QApplication::UnicodeUTF8));
        lineEdit_server->setText(QApplication::translate("Dialog", "localhost", 0, QApplication::UnicodeUTF8));
        label_login->setText(QApplication::translate("Dialog", "Login", 0, QApplication::UnicodeUTF8));
        label_mdp->setText(QApplication::translate("Dialog", "Password", 0, QApplication::UnicodeUTF8));
        label_erreur->setText(QString());
        pushButton_connexion->setText(QApplication::translate("Dialog", "&Connection", 0, QApplication::UnicodeUTF8));
        pushButton_annuler->setText(QApplication::translate("Dialog", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
