#include "universitiesdialog.h"
#include "ui_universitiesdialog.h"
#include "university.h"
#include "QMessageBox"
#include "QFile"

UniversitiesDialog::UniversitiesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UniversitiesDialog)
{
    ui->setupUi(this);
}

UniversitiesDialog::~UniversitiesDialog()
{
    delete ui;
}

void UniversitiesDialog::on_pushButton_uniPost_clicked()
{
    if(ui->textEdit_uniName->toPlainText() != "" && ui->textEdit_semester->toPlainText() != "" && ui->textEdit_semester->toPlainText() != "" && ui->textEdit_uniComment->toPlainText() != "")
    {

        University uni1;

        QString universityName = ui->textEdit_uniName->toPlainText();
         uni1.set_uniName(universityName.toStdString());

         QString semester = ui->textEdit_semester->toPlainText();
         uni1.set_semester(semester.toInt());

         QString department = ui->textEdit_department->toPlainText();
         uni1.set_department(department.toStdString());

         QString universityComment = ui->textEdit_uniComment->toPlainText();
         uni1.set_comment(universityComment.toStdString());


         // FILE HANDLING

         QFile unifile("D:/oop qt/RateIt/New folder/uniFile.txt");
         if (!unifile.open(QFile::WriteOnly | QIODevice::Append))
         {
             QMessageBox::warning(this,"Warning","File Not Open");
         }
         QTextStream out(&unifile);


         out <<"UNIVERSITY NAME: "<<universityName;
         out<<"\n";
         out<<"DEPARTMENT: "<<department;
         out<<"\n";
         out<<"SEMESTER: "<<semester;
         out<<"\n";
         out<<"REVIEW: "<<universityComment;
         out<<"\n";
         out<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
         out<<"\n";
         unifile.close();


        QMessageBox::information(this,"DONE","  THANKS ALOT FOR THE REVIEW ");
        hide();

    } else {
        QMessageBox::warning(this,"Kindly","  Fill the Form completely ");
    }

}

