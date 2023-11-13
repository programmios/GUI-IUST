// in mainwindow.h
public:
explicit MainWindow(QWidget *parent = nullptr);
~MainWindow();

void newDocument();
void open();
void save();
void exit();
void about();

private:
Ui::MainWindow *ui;
QString currentFile;

// in mainwindow.cpp

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

this->setCentralWidget(ui->textEdit);

connect(ui->actionNew, &QAction::triggered, this, &MainWindow::newDocument);
connect(ui->actionOpen, &QAction::triggered, this, &MainWindow::open);
connect(ui->actionSave, &QAction::triggered, this, &MainWindow::save);
connect(ui->actionExit, &QAction::triggered, this, &MainWindow::exit);
connect(ui->actionAbout, &QAction::triggered, this, &MainWindow::about);

void MainWindow::newDocument()
{
    currentFile.clear();
    ui->textEdit->setText(QString());
}
/////////////////////////////////////////////////////////////////
void MainWindow::open()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");

    QFile file(fileName);

    currentFile = fileName;

    if (!file.open(QIODevice::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
        return;
    }

    setWindowTitle(fileName);

    QTextStream in(&file);

    QString text = in.readAll();

    ui->textEdit->setText(text);

    file.close();
}
/////////////////////////////////////////////////////////////////
void MainWindow::save()
{
    QString fileName;

    if (currentFile.isEmpty())
    {
        fileName = QFileDialog::getSaveFileName(this, "Save");
        currentFile = fileName;
    }
    else
    {
        fileName = currentFile;
    }

    QFile file(fileName);

    if (!file.open(QIODevice::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }

    setWindowTitle(fileName);

    QTextStream out(&file);

    QString text = ui->textEdit->toPlainText();

    out << text;

    file.close();
}
/////////////////////////////////////////////////////////////////
void MainWindow::exit()
{
    QCoreApplication::quit();
}
/////////////////////////////////////////////////////////////////
void MainWindow::about()
{
    QMessageBox::about(this, "qt", "The Notepad example");
}
