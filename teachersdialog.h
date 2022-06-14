#ifndef TEACHERSDIALOG_H
#define TEACHERSDIALOG_H

#include <QDialog>

namespace Ui {
class TeachersDialog;
}

class TeachersDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TeachersDialog(QWidget *parent = nullptr);
    ~TeachersDialog();

private slots:
    void on_pushButton_teacherPost_clicked();

private:
    Ui::TeachersDialog *ui;
};

#endif // TEACHERSDIALOG_H
