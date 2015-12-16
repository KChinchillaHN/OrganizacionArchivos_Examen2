#include "regalo.h"
#include "ui_regalo.h"
#include <QMessageBox>
#include <fstream>

using namespace std;

ofstream arcFun;
ifstream arcFunRead();

regalo::regalo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regalo)
{
    ui->setupUi(this);
    ui->listEdad->addItem(" ");
    for (int k=1; k<=17; k++)
    {
        ui->listEdad->addItem(QString::number(k));
    }
}

regalo::~regalo()
{
    delete ui;
}

void regalo::on_botCancelar_clicked()
{
    reject();
}

void regalo::on_botGuardar_clicked()
{
    QString qsEdad=ui->listEdad->currentText();
    QString qsDescripcion=ui->textDescripcion->text();

    int edad=qsEdad.toInt();
    string descripcion=qsDescripcion.toStdString();
    string sEdad=qsEdad.toStdString();

    if(sEdad!=" " && descripcion!="")
    {
        ifstream VarcFunRead("BDRegalos.txt");

        if (VarcFunRead.good())
        {
            arcFun.open("BDRegalos.txt", std::ios::app);
            arcFun << edad << "-" << descripcion << "-" <<"\n";
            arcFun.close();
        }
        else
        {
            arcFun.open("BDRegalos.txt");
            arcFun << edad << "-" << descripcion<< "-" << "\n";
            arcFun.close();
        }
        QMessageBox msgBox;
        msgBox.setWindowTitle("Crear Regalos");
                   msgBox.setText("Creacion de Regalos");
        msgBox.setInformativeText("Muy bien duende, has creado un regalo :)");
        msgBox.setStandardButtons(QMessageBox::Ok );
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
        reject();
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Error en Regalos");
                   msgBox.setText("Error al crear Regalo");
        msgBox.setInformativeText("Favor complete todos los campos :(");
        msgBox.setStandardButtons(QMessageBox::Ok );
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }
}
