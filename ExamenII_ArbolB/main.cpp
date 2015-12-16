#include "arbol_b.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Arbol_B w;
    w.show();

    return a.exec();
}
