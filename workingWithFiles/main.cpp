#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void write(QString FileName)
{
    QFile mfile(FileName);
    if(!mfile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "file opening for writing  failed";
        return;
    }

    QTextStream out(&mfile);
    out << "ThIs Is A cRaZy TeXt";
    mfile.flush();

    mfile.close();
}

void read(QString FileName)
{
    QFile mfile(FileName);
    if(!mfile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "file opening for reading failed";
        return;
    }

    QTextStream in(&mfile);
    QString text = in.readAll();
    qDebug() << text;
    mfile.close();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString myFile = "C:/Users/IBRAHIM/Desktop/Qt/QT working with files.txt";

    write(myFile);
    //read(myFile);
    //read(":/addMain/main.cpp");

    return a.exec();
}
