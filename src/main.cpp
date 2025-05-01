#include "mangoSeedApp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mangoSeedApp_t w;
    w.show();
    return a.exec();
}
