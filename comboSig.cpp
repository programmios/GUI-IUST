// in header

private slots:
void alignmentChanged(int);
void echoChanged(int);
void validChanged(int);

// in mainwindowNumberStudent
#include "QLineEdit"
MainWindow400400052::MainWindow400400052(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow400400052)
{
    ui->setupUi(this);
    connect(ui->comboali, SIGNAL(activated(int)), this, SLOT(alignmentChanged(int)));
    connect(ui->comboecho, SIGNAL(activated(int)), this, SLOT(echoChanged(int)));
    connect(ui->combovalid, SIGNAL(activated(int)), this, SLOT(validChanged(int)));
}

void MainWindow400400052::alignmentChanged(int index)
{
    switch (index)
    {
    case 0:
        ui->lineEdit->setAlignment(Qt::AlignLeft);
        break;
    case 1:
        ui->lineEdit->setAlignment(Qt::AlignCenter);
        break;
    case 2:
        ui->lineEdit->setAlignment(Qt::AlignRight);
    }
}

void MainWindow400400052::echoChanged(int index)
{
    switch (index)
    {
    case 0:
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);
        break;
    case 1:
        ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
        break;
    }
}

void MainWindow400400052::validChanged(int index)
{
    switch (index)
    {
    case 0:
        ui->lineEdit_3->setValidator(new QIntValidator(ui->lineEdit_3));
        break;
    case 1:
        ui->lineEdit_3->setValidator(0);
        break;
    }
    ui->lineEdit_3->clear();
}