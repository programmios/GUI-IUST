// in mainWindow.h
#include <QPainter>

protected:
void paintEvent(QPaintEvent *e); // تعریف بشه که بتونیم تابعش رو بنویسیم mainwindow رو بزنین تا تابعش در Refactor->add definition in mainwindow.cpp کلیک راست کنید و گزینه ی QPaintEvent روی

// in mainwindow.cpp

void MainWindow::paintEvent(QPaintEvent *e)
{
    QPainter p(this);
    QRect rect(220, 50, 150, 200); // 220,50 گوشه ی بالایی سمت چپ رو به ما میده
    //  و 150,200 هم عرض و ارتفاع مستطیل ماست

    QPen pen(Qt::red);
    pen.setWidth(5);

    p.setPen(pen);
    p.drawRect(rect); // استفاده کردیم painter با این شش خط کد ما یک مستطیل ساختیم و در اینجا از

    p.scale(0.5, 0.5);
    p.rotate(45);

    p.drawRect(rect); // دادیمش و بعد هم رسمش کردیم rotate طول و عرض ایجاد کردیم که به اندازه 45 درجه هم 0.5,0.5 >اینجا یک مستطیلی با نسبت
}