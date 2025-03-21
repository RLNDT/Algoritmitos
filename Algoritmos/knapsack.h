#ifndef KNAPSACK_H
#define KNAPSACK_H

#include <QWidget>

namespace Ui {
class Knapsack;
}

class Knapsack : public QWidget
{
    Q_OBJECT

public:
    explicit Knapsack(QWidget *parent = nullptr);
    ~Knapsack();

private:
    Ui::Knapsack *ui;
};

#endif // KNAPSACK_H
