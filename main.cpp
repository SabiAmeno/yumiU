#include "yumiu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    YumiU w;
    w.show();

    return a.exec();
}
