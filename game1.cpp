#include "QKeyEvent"
void MainWindow400400052::keyPressEvent(QKeyEvent *e)
{
    switch (e->key())
    {
    case Qt::Key_S:
        ui->pushButton->move(ui->pushButton->x(), ui->pushButton->y() + 1);
        break;
    case Qt::Key_W:
        ui->pushButton->move(ui->pushButton->x(), ui->pushButton->y() - 1);
        break;
    case Qt::Key_A:
        ui->pushButton->move(ui->pushButton->x() - 1, ui->pushButton->y());
        break;
    case Qt::Key_D:
        ui->pushButton->move(ui->pushButton->x() + 1, ui->pushButton->y());
        break;
    }
}