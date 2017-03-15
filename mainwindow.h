#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QSqlDatabase>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_comboBox_bdd_currentIndexChanged(const QString &arg1);

    void on_listWidget_tables_itemClicked(QListWidgetItem *item);

    void on_textEdit_requete_textChanged();

    void on_pushButton_executer_clicked();

    void on_pushButton_enregistrer_clicked();


    void on_pushButton_about_clicked();

    void on_pushButton_savehistorique_clicked();

    void on_pushButton_cancel_clicked();

    void on_pushButton_exporter_clicked();

    void on_pushButton_importer_clicked();

private:
    Ui::MainWindow *ui;
    void chargerLesBases();
    void chargerLesTables();
    void chargerLesChamps();
    QString nomTable;
    QString couleur;

};

#endif // MAINWINDOW_H
