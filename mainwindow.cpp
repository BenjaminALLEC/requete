#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_about.h"
#include "about.h"
#include <QDebug>
#include <QDialog>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlRecord>
#include <QFileDialog>
#include <QFile>
 #include <QIODevice>
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    chargerLesBases();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::chargerLesBases()
{
    qDebug()<<"On charge les bases dans la checkBox";
    QString req = "SHOW DATABASES";
    QSqlQuery query;
    QStringList liste;
    if(query.exec(req))
    {
        while(query.next())
        {
            liste.push_back(query.value(0).toString());
        }
        ui->comboBox_bdd->addItems(liste);
    }
}

void MainWindow::chargerLesTables()
{
    qDebug()<<"On charge les tables";
    QString req = "SHOW TABLES";
    QSqlQuery query;
    if(query.exec(req))
    {
        while(query.next())
        {
            ui->listWidget_tables->addItem(query.value(0).toString());
        }
    }
}

void MainWindow::chargerLesChamps()
{
    qDebug()<<"On charge les champs";
    QString req = "SHOW FIELDS FROM "+nomTable+"";
    QSqlQuery query;
    qDebug()<<req;
    if(query.exec(req))
    {
        while(query.next())
        {
            ui->listWidget_champs->addItem(query.value(0).toString());
        }
    }
}

void MainWindow::on_comboBox_bdd_currentIndexChanged(const QString &arg1)
{
    qDebug()<<"void MainWindow::on_comboBox_bdd_currentIndexChanged(const QString &arg1)";
    ui->listWidget_tables->clear();
    ui->listWidget_champs->clear();
    QSqlDatabase maBase=QSqlDatabase::database();

    maBase.close();
    maBase.setDatabaseName(arg1);
    if(!maBase.open())qDebug()<<"base non ouverte";
    else
    chargerLesTables();
}

void MainWindow::on_listWidget_tables_itemClicked(QListWidgetItem *item)
{
    qDebug()<<"MainWindow::on_listWidget_tables_itemClicked(QListWidgetItem *item)";
    ui->listWidget_champs->clear();
    nomTable = ui->listWidget_tables->currentItem()->text();
    chargerLesChamps();
}

void MainWindow::on_textEdit_requete_textChanged()
{
    qDebug()<<"MainWindow::on_textEdit_requete_textChanged()";
    QString req = ui->textEdit_requete->toPlainText();
    QSqlQuery query;
    if(query.exec(req))
    {
        ui->pushButton_executer->setStyleSheet("background-color : green");
        couleur = "green";
        ui->pushButton_enregistrer->setEnabled(true);

        ui->tableWidget_resultat->setRowCount(0);
        QString req = ui->textEdit_requete->toPlainText();
        QSqlQuery query;
        query.exec(req);
        QSqlRecord rec = query.record();
        int colonne = rec.count();
        int ligne = query.size();
        QStringList champs;
        for(int cpt3=0;cpt3<colonne;cpt3++)
        {
            QString colonne = rec.fieldName(cpt3);
            champs.push_back(colonne);
        }


        ui->tableWidget_resultat->setRowCount(ligne);
        ui->tableWidget_resultat->setColumnCount(colonne);
        ui->tableWidget_resultat->setHorizontalHeaderLabels(champs);

        query.first();
        if(couleur == "green")
        {
            for(int cpt=0;cpt<ligne;cpt++)
            {
                for(int cpt2=0;cpt2<colonne;cpt2++)
                {
                    ui->tableWidget_resultat->setItem(cpt,cpt2,new QTableWidgetItem(query.value(cpt2).toString()));
                }
                query.next();
            }
        }
    }
    else
    {
        ui->pushButton_executer->setStyleSheet("background-color: red");
        couleur = "red";
    }
}

void MainWindow::on_pushButton_executer_clicked()
{
    qDebug()<<"MainWindow::on_pushButton_executer_clicked()";
    ui->tableWidget_resultat->setRowCount(0);
    QString req = ui->textEdit_requete->toPlainText();
    QSqlQuery query;
    query.exec(req);
    QSqlRecord rec = query.record();
    int colonne = rec.count();
    int ligne = query.size();
    QStringList champs;
    for(int cpt3=0;cpt3<colonne;cpt3++)
    {
        QString colonne = rec.fieldName(cpt3);
        champs.push_back(colonne);
    }


    ui->tableWidget_resultat->setRowCount(ligne);
    ui->tableWidget_resultat->setColumnCount(colonne);
    ui->tableWidget_resultat->setHorizontalHeaderLabels(champs);

    query.first();
    if(couleur == "red")
    {
        QString error = query.lastError().text();
        QMessageBox msg;
        msg.setText(error);
        msg.exec();
    }
}

void MainWindow::on_pushButton_enregistrer_clicked()
{
    qDebug()<<"On enregistre la requete juste dans l'historique";
    QString req = ui->textEdit_requete->toPlainText();
    ui->listWidget_historique->addItem(req);
}


void MainWindow::on_pushButton_about_clicked()
{
    About abt(this);
    if (abt.exec()==QDialog::Accepted)
    {}
}



void MainWindow::on_pushButton_savehistorique_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("open File"),"/home/ballec/Projets/requete","*.sql");
    QFile file(fileName+'.sql');
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    for(int i=0; i>ui->listWidget_historique->count(); i++){
            std::cout << ui->listWidget_historique->item(i) << std::endl;
         }
}

void MainWindow::on_pushButton_cancel_clicked()
{
    int alert = QMessageBox::question(this, tr("Alert"), tr("Are you sure you want to leave ?"),
                                    QMessageBox::Yes | QMessageBox::No,QMessageBox::No);
    if(alert==QMessageBox::Yes)
    {
        close();
    }
}

void MainWindow::on_pushButton_exporter_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("open File"),"/home/ballec/Projets/requete","*.sql");
    QFile file(fileName+'.sql');
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    for(int i=0; i>ui->listWidget_historique->count(); i++){
            std::cout << ui->listWidget_historique->item(i) << std::endl;
         }
}
