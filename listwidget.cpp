void MainWindow400400052::on_addbtn_clicked()
{
    for (int i = 1; i <= 20; i++)
        ui->listw->addItem(QString::number(i));
}

void MainWindow400400052::on_colorbtn_clicked()
{
    QListWidgetItem *current;
    current = ui->listw->currentItem();
    current->setTextColor(Qt::red);
    current->setBackgroundColor(Qt::black);
}