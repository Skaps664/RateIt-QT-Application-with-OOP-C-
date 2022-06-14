#ifndef VIEWDIALOG_H
#define VIEWDIALOG_H

#include <QDialog>

namespace Ui {
class ViewDialog;
}

class ViewDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ViewDialog(QWidget *parent = nullptr);
    ~ViewDialog();

private slots:

    void on_pushButton_view_clicked();

private:
    Ui::ViewDialog *ui;
};

#endif // VIEWDIALOG_H
