/*
کد های مهم  label
*/
widget2->setEchoMode(QLineEdit::Password); //کد بالا مود تکست رو در حالت پسورد قرار میده(امتحان کنید) (مود به طور دیفالت روی normal هست )

widget2->setMaxLength(5);  //این کد، ماکسیمم طول کاراکتر دریافتی رو روی 5 قرار میده.

Widget2->setReadOnly(true); //این کد، متن رو غیر قابل ویرایش میکنه. (پیشفرض false )

Widget2->setStyleSheet("color:blue;background-color:lightgray"); //رنگ متن رو آبی میکنه و بک گراندش رو خاکستری روشن قرار میده.


widget2->setStyleSheet("selection-background-color:white"); //اگه یه متنو سلکت کنی چه رنگی بشه

widget2->setInputMask(0000-00-00); //فرمت ورودی رودی رو مشخص میکنه، مثلا آرگومان هایی که الان بهش دادیم، داره میگه ورودی باید به همون فرمت باشه: که فرمت تاریخ هستش

 widget2->setInputMask(000.00.000.0); //داره میگه ورودی مون به شکل آدرس آی پی باشه


