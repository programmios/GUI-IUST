void MainWindow400400052::on_makebtn_clicked()
{
    ui->treeWidget->setColumnCount(2);
    QTreeWidgetItem *A, *B, *C, *D, *E;
    A = new QTreeWidgetItem(ui->treeWidget);
    B = new QTreeWidgetItem(A);
    C = new QTreeWidgetItem(ui->treeWidget);
    D = new QTreeWidgetItem(C);
    E = new QTreeWidgetItem(D);
    A->setText(0, "Ahamad");
    B->setText(0, "Ali");
    C->setText(1, "Morteza");
    D->setText(0, "Babak");
    E->setText(1, "Parsa");
}
