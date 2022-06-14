#ifndef HOSTELSDIALOG_H
#define HOSTELSDIALOG_H

#include <QDialog>

namespace Ui {
class HostelsDialog;
}

class HostelsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HostelsDialog(QWidget *parent = nullptr);
    ~HostelsDialog();

private slots:
    void on_pushButton_hostelPost_clicked();

private:
    Ui::HostelsDialog *ui;
};

#endif // HOSTELSDIALOG_H
