#ifndef MANGOSEEDAPP_H
#define MANGOSEEDAPP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class mangoSeedApp_t;
}
QT_END_NAMESPACE

class mangoSeedApp_t : public QMainWindow
{
    Q_OBJECT

public:
    mangoSeedApp_t(QWidget *parent = nullptr);
    ~mangoSeedApp_t();

private:
    Ui::mangoSeedApp_t *ui;
};
#endif // MANGOSEEDAPP_H
