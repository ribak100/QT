#include "dialog.h"
#include "ui_dialog.h"
#include <QtGui>
#include <QtCore>
#include <cmath>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);

}

Dialog::~Dialog()
{



    delete ui;
}

void Dialog::on_pushforlove_clicked()
{
    for(int i=0; i<=100; i++)
    {
        Sleep(50);
        ui->progressBar->setValue(i);
    }

    int x;

    x = (((rand()*10)+20)%100);
    if(kabir == "Abdulkabir" || kabir == "AbdulKabir")
    {
        x = 90;
        ui->tel_them->setText("Abdulkabir is compatible with any lady :)");
    }
    if(kabir == "Aramide" || kabir == "Abdulbadhi")
    {
        x = 90;
        ui->tel_them->setText("Edmiara is the ladies magnet :)");
    }

    ui->show_me_love->setNum(x);

    if(x == 0)
    {

        ui->tel_them->setText("Paran ran pan pan");
    }
    else if(x <= 10)
    {
        ui->tel_them->setText("Your village people is close by");
    }
    else if(x <=20)
    {
        ui->tel_them->setText("Baba, go find another partner");
    }
    else if(x <=30)
    {
        ui->tel_them->setText("Daily routine = fighting");
    }
    else if(x <=40)
    {
        ui->tel_them->setText("Dating = True, Marriage = False");
    }
    else if(x <=50)
    {
        ui->tel_them->setText("hmmm, una fit last few years");
    }
    else if(x <=60)
    {
        ui->tel_them->setText("You tried, but i still cant support this marriage");
    }
    else if(x <=70)
    {
        ui->tel_them->setText("hmmm, not bad not bad");
    }
    else if(x <=80)
    {
        ui->tel_them->setText("You guys are pretty compatible");
    }
    else if(x <90)
    {
        ui->tel_them->setText("Am waiting to hear the word MARRIAGE");
    }

    else if(x < 100)
    {
        ui->tel_them->setText("When are we starting the wedding preparation");
    }
    else if(x == 100)
    {
        ui->tel_them->setText("What God have joined together");
    }


}

void Dialog::on_guy_name_textEdited(const QString &arg1)
{
    kabir = ui->guy_name->text();
}
