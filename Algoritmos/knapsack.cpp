#include "knapsack.h"
#include "ui_knapsack.h"
#include "QPixmap"


Knapsack::Knapsack(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Knapsack)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/crist/Documents/Library.jpg");
    QPixmap pix2("C:/Users/crist/Documents/knapsack.png");

    ui->label->setPixmap(pix);
    ui->label->setScaledContents(true);

    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
}

Knapsack::~Knapsack()
{
    delete ui;
}
