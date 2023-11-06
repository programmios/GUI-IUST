// comment w.show() in main.cpp
#include "QTextEdit"
#include "QSplitter"

MainWindow400400052::MainWindow400400052(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow400400052)
{
    ui->setupUi(this);
    QTextEdit *text = new QTextEdit("A");
    QTextEdit *text2 = new QTextEdit("B");
    QTextEdit *text3 = new QTextEdit("C");

    QSplitter *splitter = new QSplitter(Qt::Vertical);
    splitter->addWidget(text);
    splitter->addWidget(text2);
    splitter->addWidget(text3);
    //    splitter->show();
    QSplitter *splitter2 = new QSplitter(Qt::Horizontal);
    QTextEdit *text4 = new QTextEdit("D");
    QTextEdit *text5 = new QTextEdit("E");
    splitter2->addWidget(splitter);
    splitter2->addWidget(text4);
    splitter2->addWidget(text5);
    splitter2->show();
}