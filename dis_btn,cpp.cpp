// in mainwaindow.h
private slots:
    void f();

// in mainwindow.cpp
MainWindow400400052::MainWindow400400052(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow400400052)
{
    ui->setupUi(this);
    ui->btn->setEnabled(false);
    connect(ui->line, SIGNAL(textChanged(QString)), this, SLOT(f()));
}

void MainWindow400400052::f()
{
    if(ui->line->text().length() > 0)
    {
        ui->btn->setEnabled(true);
    }
    else
    {
        ui->btn->setEnabled(false);
    }
}