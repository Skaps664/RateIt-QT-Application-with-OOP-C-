#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "homedialog.h"
#include "QPixmap"
#include "maininfo.h"
#include "QMessageBox"
#include "QFile"

WelcomeWindow::WelcomeWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);

    QPixmap pix("D:/oop qt/RateIt/New folder/pox.png");
    ui->label_titlePic->setPixmap(pix.scaled(650,500,Qt::KeepAspectRatio));

}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;

}


void WelcomeWindow::on_pushButton_login_clicked()
{

   if(ui->textEdit_firstName->toPlainText() != "" && ui->textEdit_2_lastName->toPlainText() != "" && ui->textEdit_3_age->toPlainText() != "" && ui->textEdit_4_institute->toPlainText() != "")
   {

       mainInfo mI1;



       QString firstName = ui->textEdit_firstName->toPlainText();
        mI1.set_firstName(firstName.toStdString());

        QString lastName = ui->textEdit_2_lastName->toPlainText();
        mI1.set_lastName(lastName.toStdString());

        QString age = ui->textEdit_3_age->toPlainText();
        mI1.set_age(age.toInt());

        QString institute = ui->textEdit_4_institute->toPlainText();
        mI1.set_institute(institute.toStdString());

        hide();
        HomeDialog h1;
        h1.exec();


        // APPENDING THE DATA TO ALL FORMS----------------------------


        QFile teachfile("D:/oop qt/RateIt/New folder/teachFile.txt");

        if ( !teachfile.open(QFile::WriteOnly | QIODevice::Append))
        {
            QMessageBox::warning(this,"Warning","File Not Open");
        }
        QTextStream out(&teachfile);


        out<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        out<<"\n";
        out <<"NAME: "<<firstName;
        out<<" ";
        out<<lastName;
        out<<"\n";
        out<<"AGE: "<<age;
        out<<"\n";
        out<<"REVIEW: "<<institute;
        out<<"\n";
        out<<"                                ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        out<<"\n";

        teachfile.close();

   } else {
       QMessageBox::warning(this,"Kindly","  Fill the Form completely ");
   }

}

