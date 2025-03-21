#include "viajeros.h"
#include "ui_viajeros.h"

Viajeros::Viajeros(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Viajeros)
{
    ui->setupUi(this);
}

Viajeros::~Viajeros()
{
    delete ui;
}
