// in main.cpp
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QString>

#include <QCoreApplication>

#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QString>

void write(QString str)
{
    QFile f(str);
    f.open(QFile::WriteOnly | QFile::Text);

    QTextStream out(&f);
    out << "benevis be name Qt\n";
    out << "Va khodaii ke Qt ra aafarid\n";
    out << "ajab!";

    f.flush();
    f.close();
}

void read(QString str)
{
    QFile f(str);
    f.open(QFile::ReadOnly | QFile::Text);

    QTextStream in(&f);
    QString line;
    line = in.readLine();

    while (!line.isNull())
    {
        qDebug() << line;
        line = in.readLine();
    }

    f.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString text1 = "d:/amir.txt";
    write(text1);

    read(text1);

    return a.exec();
}
