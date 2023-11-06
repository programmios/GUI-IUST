#include "QMessageBox"

void MainWindow400400052::on_LoginButton_clicked()
{
    QString username, password;
    username = ui->username->text();
    password = ui->password->text();
    if (username == "amir" && password == "123456")
    {
        QMessageBox ::information(this, "Login", "correct");
    }
    else
    {
        QMessageBox ::information(this, "Login", "Not correct");
    }
}