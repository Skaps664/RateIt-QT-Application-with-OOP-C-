#include "homedialog.h"
#include "ui_homedialog.h"
#include "universitiesdialog.h"
#include "hostelsdialog.h"
#include "teachersdialog.h"
#include "viewdialog.h"



HomeDialog::HomeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HomeDialog)
{
    ui->setupUi(this);
}

HomeDialog::~HomeDialog()
{
    delete ui;
}

void HomeDialog::on_pushButton_uni_clicked()
{
    UniversitiesDialog u1;
    u1.exec();

}


void HomeDialog::on_pushButton_teach_clicked()
{
    TeachersDialog t1;
    t1.exec();
}


void HomeDialog::on_pushButton_host_clicked()
{
    HostelsDialog ho1;
    ho1.exec();
}


void HomeDialog::on_pushButton_view_clicked()
{

    ViewDialog v1;
    v1.exec();
}

