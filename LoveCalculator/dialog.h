#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QString>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    QString kabir;
    ~Dialog();

private slots:
    void on_pushforlove_clicked();

    void on_guy_name_textEdited(const QString &arg1);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
