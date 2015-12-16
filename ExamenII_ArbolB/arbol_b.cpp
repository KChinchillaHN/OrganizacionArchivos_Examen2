#include "arbol_b.h"
#include "ui_arbol_b.h"
#include "nietecito.h"
#include "regalo.h"
#include "listaregalos.h"
#include "readme.h"


Arbol_B::Arbol_B(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Arbol_B)
{
    ui->setupUi(this);
}

Arbol_B::~Arbol_B()
{
    delete ui;
}

void Arbol_B::on_BotNieto_clicked()
{
    nietecito ven;
    ven.exec();
}

void Arbol_B::on_BotRegalo_clicked()
{
    regalo ven;
    ven.exec();
}

void Arbol_B::on_BotLista_clicked()
{
    listaregalos ven;
    ven.exec();
}

void Arbol_B::on_BotSalir_clicked()
{
    QApplication::quit();
}

void Arbol_B::on_BotEstrella_clicked()
{
    readme ven;
    ven.exec();
}
