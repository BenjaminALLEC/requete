#include "dialogaboutme.h"
#include "ui_dialogabout.h"

DialogAboutMe::DialogAboutMe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAboutMe)
{
    ui->setupUi(this);
}

DialogAboutMe::~DialogAboutMe()
{
    delete ui;
}
