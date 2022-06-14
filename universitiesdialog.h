#ifndef UNIVERSITIESDIALOG_H
#define UNIVERSITIESDIALOG_H

#include <QDialog>

namespace Ui {
class UniversitiesDialog;
}

class UniversitiesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UniversitiesDialog(QWidget *parent = nullptr);
    ~UniversitiesDialog();

private slots:
    void on_pushButton_uniPost_clicked();

private:
    Ui::UniversitiesDialog *ui;
};

#endif // UNIVERSITIESDIALOG_H
