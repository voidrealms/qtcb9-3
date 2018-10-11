#include <QCoreApplication>
#include <QDebug>

//Global scope - BAD DO NOT USE!!!!
static QString name = "Bryan";

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    name = "Bob";
    qInfo() << name;

    bool test = true;
    if(test) {
        QString name = "Tammy";
        qInfo() << name;
    }

    qInfo() << name;

    return a.exec();
}
