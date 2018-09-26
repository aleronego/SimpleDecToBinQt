#include "mainwindow.h"
#include "convert.h"
#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Convert c;
    w.show();



    QObject::connect( &w, SIGNAL( sendToConvertFromWindow( QString ) ),
                      &c, SLOT( convertingStringToBin( QString ) )
                    );

    QObject::connect( &c, SIGNAL( sendConverted( QString ) ),
                      &w, SLOT( changeLabel( QString ) )
                    );

    return a.exec();
}
