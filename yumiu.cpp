#include "yumiu.h"
#include "ui_yumiu.h"

YumiU::YumiU(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::YumiU)
{
    ui->setupUi(this);
}

YumiU::~YumiU()
{
    delete ui;
}
