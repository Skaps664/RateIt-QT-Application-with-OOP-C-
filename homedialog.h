#ifndef HOMEDIALOG_H
#define HOMEDIALOG_H

#include <QDialog>

namespace Ui {
class HomeDialog;
}

class HomeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HomeDialog(QWidget *parent = nullptr);
    ~HomeDialog();

private slots:
    void on_pushButton_uni_clicked();

    void on_pushButton_teach_clicked();

    void on_pushButton_host_clicked();

    void on_pushButton_view_clicked();

private:
    Ui::HomeDialog *ui;
};

#endif // HOMEDIALOG_H
