

#include <QApplication>
#include <QtGui>
#include <QtCore>

#include <QPushButton>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
//#include <QHBoxLayout>
//#include <QVBoxLayout>

//#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
       //QLabel *label = new QLabel("<h1> <b>Hello</b> <font color = blue> World</font></h1>");
       //label->show();
    QWidget *window = new QWidget;
    window->setWindowTitle("My App");

    /**
      * For Horizontal and
      * Vertical layouts
      **/
    /*

    QPushButton *pushBotton1 = new QPushButton("one");
    QPushButton *pushBotton2 = new QPushButton("two");
    QPushButton *pushBotton3 = new QPushButton("three");

    QPushButton *pushBotton4 = new QPushButton("four");
    QPushButton *pushBotton5 = new QPushButton("five");
    QPushButton *pushBotton6 = new QPushButton("six");

    //QHBoxLayout *hLayout = new QHBoxLayout;
    QVBoxLayout *vLayout = new QVBoxLayout;

   // hLayout->addWidget(pushBotton1);
    //hLayout->addWidget(pushBotton2);
    //hLayout->addWidget(pushBotton3);

    vLayout->addWidget(pushBotton4);
    vLayout->addWidget(pushBotton5);
    vLayout->addWidget(pushBotton6);





    //window->setLayout(hLayout);
    window->setLayout(vLayout);
    */

    /**
      * For Grid layout
      **/

    QGridLayout *gLayout = new QGridLayout;
    QLabel *label1 = new QLabel("FName :-");
    QLineEdit *textName = new QLineEdit;

    QLabel *label2 = new QLabel("LName :-");
    QLineEdit *textName2 = new QLineEdit;

    QPushButton *button = new QPushButton("Ok");
    QPushButton *button2 = new QPushButton("Close");

    gLayout->addWidget(label1, 0, 0);
    gLayout->addWidget(textName, 0, 1);

    gLayout->addWidget(label2, 1, 0);
    gLayout->addWidget(textName2, 1, 1);

    gLayout->addWidget(button, 2,0,1,2);
    gLayout->addWidget(button2, 3,0,1,2);


    window->setLayout(gLayout);
    window->show();

    return app.exec();
}
