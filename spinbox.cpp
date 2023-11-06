void MainWindow400400052::on_Addbtn_clicked()
{
    double number1 = ui->num1->value();
    double number2 = ui->num2->value();
    double Ans = number1 + number2;
    QString text = "<b>Answer = </b>" + QString::number(Ans);
    ui->answerlabel->setText(text);
}
