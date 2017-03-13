#include "dialog.h"
#include "ui_dialog.h"
#include <QDialog>
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;

}

void Dialog::on_pushButton_connexion_clicked()
{
    QString server = ui->lineEdit_server->text();
    QString userName = ui->lineEdit_login->text();
    QString password = ui->lineEdit_mdp->text();
    QSqlDatabase maBase=QSqlDatabase::database();
    //maBase.setDatabaseName("mysql");
    if (server.isEmpty())
    {
        maBase.setHostName("localhost");
    }
    else{
        maBase.setHostName(server);
    }

    maBase.setUserName(userName);
    maBase.setPassword(password);
    if(maBase.open())
    {
        qDebug()<<"connexion reussi";
        accept();
    }
    else
    {
        ui->label_erreur->setText("One fields is incorrect: Server, Login or Password");
        qDebug()<<"erreur de connection";
    }

}
void Dialog::activeDesactiveConnect()
{
    bool ok=!ui->lineEdit_login->text().isEmpty() && !ui->lineEdit_mdp->text().isEmpty() ;
    ui->pushButton_connexion->setEnabled(ok);
}

void Dialog::on_lineEdit_login_textChanged(const QString &arg1)
{
 activeDesactiveConnect();
}

void Dialog::on_lineEdit_mdp_textChanged(const QString &arg1)
{
   activeDesactiveConnect();
}

void Dialog::on_pushButton_annuler_clicked()
{
    int alert = QMessageBox::question(this, tr("Alert"), tr("Are you sure you want to leave ?"),
                                    QMessageBox::Yes | QMessageBox::No,QMessageBox::No);
    if(alert==QMessageBox::Yes)
    {
        close();
    }
}
