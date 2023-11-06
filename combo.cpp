void MainWindow400400052::on_comboBox_activated(const QString &arg1)
{
    ui->spinBox->setValue(arg1.toInt());
}


void MainWindow400400052::on_comboBox_activated(int index)
{
    ui->lineEdit->setText(QString::number(index));
}