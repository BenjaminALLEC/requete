#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

    void activeDesactiveConnect();
private slots:
    void on_pushButton_connexion_clicked();

    void on_lineEdit_login_textChanged(const QString &arg1);

    void on_lineEdit_mdp_textChanged(const QString &arg1);

    void on_pushButton_annuler_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
