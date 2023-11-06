//in mainwindowNumberStudent
#include "QDateEdit"
#include "QTimeEdit"
#include "QDateTimeEdit"
//Code1
MainWindow400400052::MainWindow400400052(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow400400052)
{
    ui->setupUi(this);
    QDateEdit *date = new QDateEdit(this);
    date->setGeometry(40,30,200,50);
}
//Code2 = Extend Code1
{
  QTimeEdit *time = new QTimeEdit(this);
  time->setGeometry(40,30,200,50); //We set the second argument to 170 so that Time Edit is below the Date Edit

}
//code3 = Extend Code1 
{    
    QDateTimeEdit *dt = new QDateTimeEdit(this);
    dt->setGeometry(40,310,200,50);
}

Add {#include "QLabel"} 
//code4 = Extend Code1
{
    //We add current date in status bar.
    QString currentDate = QDate::currentDate().toString(); // currentDate is a String
    QLabel *label = new QLabel(/*not this*/ currentDate); //CUZ We need String for Show
    ui->StatusBar->addWidget(Label);
}
