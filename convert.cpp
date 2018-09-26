#include "convert.h"
#include <QDebug>

Convert::Convert(QObject *parent) : QObject(parent)
{

}

void Convert::convertingStringToBin( QString s)
{
    bool ok;
    int num =s.toInt(&ok);
    if(ok)
        qDebug() << num;
    else
        qDebug() << "Failed to convert" << s;

    QString bin;
    while(num!=0)
    {
        char c = (num % 2) + '0';
        bin.push_front( c );
        num /= 2;
    }
    emit sendConverted( bin );
}

