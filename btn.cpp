QPushButton *btn = new QPushButton("Click me!" , this); //برای ایجاد button
btn->setGeometry(100,80,80,40); //با همون توضیحات قبلی
btn->setToolTip("OK!!"); //ماوس رو ببری روش رشته ی پارس شده رو نشون میده
btn->setCursor(Qt::CrossCursor); // آرگومانش خیلی چیزا میتونه بگیره، خود کیو تی بهتون پیشنهاد میده، موارد دیگه رو هم امتحان کنین! جالبه :)
btn->setStyleSheet("color:black;background-color:green"); //رنگ قلم رو مشکی و رنگ بکگراند رو سبز میکنه
btn->setEnabled("false"); //این کد میتونه دکمه‌تون رو غیرفعال کنه
