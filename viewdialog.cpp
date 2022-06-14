#include "viewdialog.h"
#include "ui_viewdialog.h"
#include "QFile"
#include "QMessageBox"

ViewDialog::ViewDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewDialog)
{
    ui->setupUi(this);
}

ViewDialog::~ViewDialog()
{
    delete ui;
}

void ViewDialog::on_pushButton_view_clicked()
{
    if(ui->radioButton_host->isChecked()){
        QFile hostfile("D:/oop qt/RateIt/New folder/hostFile.txt");
        if (!hostfile.open(QFile::ReadOnly))
        {
            QMessageBox::warning(this,"Warning","File Not Open");
        }
        QTextStream stream(&hostfile);
        QString ff = hostfile.readAll();
        QMessageBox box;
        box.setText(ff);
        box.exec();
        hostfile.close();
    }
    if(ui->radioButton_uni->isChecked()){
        QFile unifile("D:/oop qt/RateIt/New folder/uniFile.txt");
        if (!unifile.open(QFile::ReadOnly))
        {
            QMessageBox::warning(this,"Warning","File Not Open");
        }
        QTextStream stream(&unifile);
        QString fff = unifile.readAll();
        QMessageBox boxx;
        boxx.setText(fff);
        boxx.exec();
        unifile.close();
    }
    if(ui->radioButton_teach->isChecked()){
        QFile teachfile("D:/oop qt/RateIt/New folder/teachFile.txt");
        if (!teachfile.open(QFile::ReadOnly))
        {
            QMessageBox::warning(this,"Warning","File Not Open");
        }
        QTextStream stream(&teachfile);
        QString ffff = teachfile.readAll();
        QMessageBox boxxx;
        boxxx.setText(ffff);
        boxxx.exec();
        teachfile.close();
    }
    else {
        QMessageBox::warning(this,"Warning","MUST SELECT ONE");
    }
}

