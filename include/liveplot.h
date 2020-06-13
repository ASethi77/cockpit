#ifndef LIVEPLOT_H
#define LIVEPLOT_H

#include <QMainWindow>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LivePlot; }
QT_END_NAMESPACE

class LivePlot : public QMainWindow
{
    Q_OBJECT

public:
    LivePlot(QWidget *parent = nullptr);
    ~LivePlot();
    void do_stuff(void);
private:
    Ui::LivePlot *ui;
};
#endif // LIVEPLOT_H
