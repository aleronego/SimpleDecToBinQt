#ifndef CONVERT_H
#define CONVERT_H

#include <QObject>

class Convert : public QObject
{
    Q_OBJECT
public:
    explicit Convert(QObject *parent = nullptr);

signals:
    void sendConverted (QString );
public slots:
    void convertingStringToBin( QString );

};

#endif // CONVERT_H
