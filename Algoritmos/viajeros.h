#ifndef VIAJEROS_H
#define VIAJEROS_H

#include <QWidget>

namespace Ui {
class Viajeros;
}

class Viajeros : public QWidget
{
    Q_OBJECT

public:
    explicit Viajeros(QWidget *parent = nullptr);
    ~Viajeros();

private:
    Ui::Viajeros *ui;
};

#endif // VIAJEROS_H
