#ifndef YUMIU_H
#define YUMIU_H

#include <QMainWindow>

namespace Ui {
class YumiU;
}

class YumiU : public QMainWindow
{
    Q_OBJECT

public:
    explicit YumiU(QWidget *parent = 0);
    ~YumiU();

private:
    Ui::YumiU *ui;
};

#endif // YUMIU_H
