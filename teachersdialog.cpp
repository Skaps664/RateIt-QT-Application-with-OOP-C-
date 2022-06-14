#include "teachersdialog.h"
#include "ui_teachersdialog.h"
#include "teacher.h"
#include "QMessageBox"
#include "QFile"

TeachersDialog::TeachersDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeachersDialog)
{
    ui->setupUi(this);
}

TeachersDialog::~TeachersDialog()
{
    delete ui;
}

void TeachersDialog::on_pushButton_teacherPost_clicked()
{
    if(ui->textEdit_teacherName->toPlainText() != "" && ui->textEdit_subject->toPlainText() != "" && ui->textEdit_semester->toPlainText() != "" && ui->textEdit_teachComment->toPlainText() != "")
    {

        Teacher teach1;

        QString teacherName = ui->textEdit_teacherName->toPlainText();
         teach1.set_teacherName(teacherName.toStdString());

         QString subject = ui->textEdit_subject->toPlainText();
         teach1.set_subject(subject.toStdString());

         QString semester = ui->textEdit_semester->toPlainText();
         teach1.set_semester(semester.toInt());

         QString teacherComment = ui->textEdit_teachComment->toPlainText();
         teach1.set_comment(teacherComment.toStdString());

         // FILE HANDLING

         QFile teachfile("D:/oop qt/RateIt/New folder/teachFile.txt");
         if (!teachfile.open(QFile::WriteOnly | QIODevice::Append))
         {
             QMessageBox::warning(this,"Warning","File Not Open");
         }
         QTextStream out(&teachfile);


         out <<"TEACHER NAME: "<<teacherName;
         out<<"\n";
         out<<"SUBJECT: "<<subject;
         out<<"\n";
         out<<"SEMESTER: "<<semester;
         out<<"\n";
         out<<"REVIEW: "<<teacherComment;
         out<<"\n";
         out<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
         out<<"\n";
         teachfile.close();

        QMessageBox::information(this,"DONE","  THANKS ALOT FOR THE REVIEW ");
        hide();


    } else {
        QMessageBox::warning(this,"Kindly","  Fill the Form completely ");
    }
}

