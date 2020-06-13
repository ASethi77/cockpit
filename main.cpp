#include "liveplot.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LivePlot w;
    w.do_stuff();
    w.show();
    return a.exec();
}
