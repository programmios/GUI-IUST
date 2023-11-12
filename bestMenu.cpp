#include "QString"
#include "QFileDialog"

void MainWindow400400052::on_actionOpen_triggered()
{
    QString fn;
    fn = QFileDialog::getOpenFileName(this, "open", "/home", "Images(*.png)");
}

void MainWindow400400052::on_actionSave_triggered()
{
    QString fn;
    fn = QFileDialog::getSaveFileName(this, "save", "/home/untiteld.png", "Images(*.png)");
}