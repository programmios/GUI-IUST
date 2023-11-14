// in dialog.h
#include "QtGui"

protected:
void paintEvent(QPaintEvent *e); // رو بزن refactor->add definition in dialog.cpp راست کلیک کن و QPaintEvent روی

// in dialog.cpp

void Dialog::paintEvent(QPaintEvent *e)
{
    QPainter Painter(this);
    QRect rect(100, 100, 200, 300); // در اینجا 100,100 نقطه ی شروع بیضی هست و 200,300 هم به ترتیب قطر اصلی و قطر فرعی ماست
    QPen greenpen(Qt::green);
    greenpen.setWidth(10);
    Painter.setPen(greenpen);
    Painter.drawEllipse(rect);                // حالت های زیادی داره که چند موردش رو بررسی میکنیم draw این چند خط کد برای ما بیضی رسم میکنه،
    QRect rect2(400, 200, 200, 300);          // با چند خط کد زیر هم یک مستطیل رسم میکنیم، دو آرگومان اول رو طوری انتخاب میکنیم که اشکال تداخل نداشته باشن
    QBrush brush(Qt::blue, Qt::CrossPattern); // یک متغیر برای هاشورزنی تعریف میکنیم به رنگ آبی
    Painter.fillRect(rect2, brush);           // مستطیل رو با هاشوری که تعریف کردیم پر میکنیم
    Painter.drawRect(rect2);

    QPen redpen(Qt::red); // این سه خط با رنگ قرمز داخل مستطیل ما مینویسید
    Painter.setPen(redpen);
    Painter.drawText(rect2, Qt::AlignCenter, "this is Rectangle");

    Painter.drawText(10, 10, "Qt"); // را چاپ میکند Qt این خط کد در مختصات 10 و 10 عبارت

    QRect rect3(600, 200, 100, 200);         // در وسط اون مثل خورشید میتابه gradiant این چهار خط کد برای ما مستطیلی رسم میکنه که یک
    QRadialGradient g(QPoint(650, 300), 50); // برای اینکه وسط مستطیل رو پیدا کنیم، میگیم که از نقطه 600 شروع میشه و عرض 100 داره پس نقطه 650 وسط عرضشه
    // با همین تحلیل میشه فهمید وسط طولش هم 300 هست
    // عدد 50 آخر هم ضخامت خورشید رو مقداردهی میکنه
    Painter.fillRect(rect3, g);
    Painter.drawRect(rect3);
    redpen.setCapStyle(Qt::RoundCap); // این خط کد، ابتدا و انتهای خط من رو هلالی شکل میکنه
    redpen.setWidth(10);              // با سه خط کد زیر یک خط با ضخامت 10 و به رنگ قرمز میکشیم
    Painter.setPen(redpen);
    Painter.drawLine(100, 100, 300, 300);

    QPoint p1; // میکنیم set اون رو y و مختصات x تعریف میکنیم و مختصات p1 رو با اسم point اول
    p1.setX(80);
    p1.setY(80);
    QPen blackpen(Qt::black); // خودمون point زو با ضخامت 20 تعریف میکنیم و نسبت میدیم به black فلم
    blackpen.setWidth(20);
    Painter.setPen(blackpen);
    Painter.drawPoint(p1); // نقطه رو رسم میکنیم

    QPolygon polygon; // رسم کردیم، مختصات ها رو تغییر بدین و ببینین چطور میتونین اشکال جدید رسم کنید Polygon با چند خط کد زیر ما یک
    polygon << QPoint(300, 50);
    polygon << QPoint(300, 100);
    polygon << QPoint(400, 50);
    polygon << QPoint(400, 100);

    Painter.setPen(Qt::blue);
    Painter.drawPolygon(polygon);
}