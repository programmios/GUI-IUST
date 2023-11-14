// in mainwindow.cpp
#include "QGraphicsScene"
#include "QGraphicsView"
#include "QBrush"
#include "QPen"

scene = new QGraphicsScene(this);
ui->graphicsView->setScene(scene);
QBrush brush(Qt::red);
QPen pen(Qt::black);
pen.setWidth(5);                                    // ضحامت بردر رو مشخص میکنه
rect = scene->addRect(20, 20, 100, 50, pen, brush); // 20,20 گوشه ی بالایی سمت چپ رو به ما میده
                                                    //  و 100,50 هم عرض و ارتفاع مستطیل ماست
                                                    // pen = border of rectangle = black
                                                    // brush = color of rectangle = red
                                                    // انتخاب شده بود ui که ابتدای کار از GraphicsView نیاز داریم که یک صحته ی گرافیکی رو برای ما ایجاد کنه(GraphicsScene) ، scene به یک addRect برای
                                                    // ما scene میشه با متغیر setScene که
rect->setFlag(QGraphicsItem::ItemIsMovable);
void MainWindow::on_pushButton_clicked()
{
    ui->graphicsView->rotate(45);
}

// in mainwindow.h

#include "QGraphicsScene"
#include "QGraphicsRectItem"

private:
Ui::MainWindow *ui;
QGraphicsScene scene;

// in mainwindow.cpp
