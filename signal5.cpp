// in mainWindow.h <header>
private slots:
void openfile(); // این قسمت از کد رو بالای private اضافه کن

private:
Ui::MainWindow400400052 *ui;
QMenu *fileMenu;
QAction *openAct;
QAction *saveAct;
QAction *exitAct;

QMenu *editMenu;
QAction *undoAct;
QAction *redoAct;

// in mainWindow.cpp
#include "QString"
#include "QMenu"
#include "QMenuBar"
#include "QFileDialog"

ui->setupUi(this);
fileMenu = menuBar()->addMenu("&File");
openAct = new QAction("Open", this);
fileMenu->addAction(openAct);
connect(openAct, &QAction::triggered, this, &MainWindow400400052::openfile);

//
saveAct = new QAction("Save", this);
fileMenu->addAction(saveAct);
fileMenu->addSeparator();

//

exitAct = new QAction("Exit", this);
fileMenu->addAction(exitAct);
connect(exitAct, &QAction::triggered, this, &QWidget::close);

//
editMenu = menuBar()->addMenu("&Edit");
undoAct = new QAction("Undo", this);
editMenu->addAction(undoAct);
redoAct = new QAction("Redo", this);
redoAct->setEnabled(false);
editMenu->addAction(redoAct);

////////////

void MainWindow400400052::openfile() // function open file
{
    QString fileName = QFileDialog::getOpenFileName(this);
}
