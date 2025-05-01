#include "mangoSeedApp.h"
#include "./ui_mangoSeedApp.h"

mangoSeedApp_t::mangoSeedApp_t(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mangoSeedApp_t)
{
    ui->setupUi(this);
}

mangoSeedApp_t::~mangoSeedApp_t()
{
    delete ui;
}
