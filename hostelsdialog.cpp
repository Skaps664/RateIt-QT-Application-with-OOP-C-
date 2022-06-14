#include "hostelsdialog.h"
#include "ui_hostelsdialog.h"
#include "hostel.h"
#include "QFile"
#include "QTextStream"
#include "QMessageBox"


HostelsDialog::HostelsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HostelsDialog)
{
    ui->setupUi(this);
}

HostelsDialog::~HostelsDialog()
{
    delete ui;
}


void HostelsDialog::on_pushButton_hostelPost_clicked()
{

    if(ui->textEdit_hostelName->toPlainText() != "" && ui->textEdit_hostelLocation->toPlainText() != "" && ui->textEdit_timeSpent->toPlainText() != "" && ui->textEdit_hostelComment->toPlainText() != "")
    {

        Hostel host1;


        QString hostelName = ui->textEdit_hostelName->toPlainText();
         host1.set_hostleName(hostelName.toStdString());

         QString hostelLocation = ui->textEdit_hostelLocation->toPlainText();
         host1.set_hostelLocation(hostelLocation.toStdString());

         QString timeSpent = ui->textEdit_timeSpent->toPlainText();
         host1.set_timeSpent(timeSpent.toFloat());

         QString comment = ui->textEdit_hostelComment->toPlainText();
         host1.set_comment(comment.toStdString());

         // FILE HANDLING

         QFile hostfile("D:/oop qt/RateIt/New folder/hostFile.txt");
         if (!hostfile.open(QFile::WriteOnly | QIODevice::Append))
         {
             QMessageBox::warning(this,"Warning","File Not Open");
         }
         QTextStream out(&hostfile);

         out <<"HOSTEL NAME: "<<hostelName;
         out<<"\n";
         out<<"LOCATION: "<<hostelLocation;
         out<<"\n";
         out<<"TIME SPENT: "<<timeSpent;
         out<<"\n";
         out<<"REVIEW: "<<comment;
         out<<"\n";
         out<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
         out<<"\n";
         hostfile.close();

        QMessageBox::information(this,"DONE","  THANKS ALOT FOR THE REVIEW ");
        hide();

    } else {
        QMessageBox::warning(this,"Kindly","  Fill the Form completely ");
    }



}



