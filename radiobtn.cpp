#include "QMessageBox"
void MainWindow400400052::on_subradio_clicked()
{
    if (ui->yesradio->isChecked() == true)
    {
        QMessageBox::information(this, "satisfaction", "I really like you");
    }
    else if (ui->noradio->isChecked() == true)
    {
        QMessageBox::information(this, "satisfaction", "I hate you");
    }
}

void MainWindow400400052::on_subcheck_clicked()
{
    if (ui->pythoncheck->isChecked() == true && ui->cppcheck->isChecked() == false)
    {
        QMessageBox::information(this, "your favorite", "I like just python");
    }
    else if (ui->pythoncheck->isChecked() == false && ui->cppcheck->isChecked() == true)
    {
        QMessageBox::information(this, "your favorite", "I like just cpp");
    }
    else if (ui->pythoncheck->isChecked() == true && ui->cppcheck->isChecked() == true)
    {
        QMessageBox::information(this, "your favorite", "I like both of them");
    }
    else if (ui->pythoncheck->isChecked() == false && ui->cppcheck->isChecked() == false)
    {
        QMessageBox::information(this, "your favorite", "I hate both of them");
    }
}