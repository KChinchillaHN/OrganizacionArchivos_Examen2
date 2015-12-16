#include "nietecito.h"
#include "ui_nietecito.h"
#include <QMessageBox>
#include <fstream>

using namespace std;
ofstream arcFunN;
ifstream arcFunReadN();
nietecito::nietecito(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nietecito)
{
    ui->setupUi(this);

    ui->listEdad->addItem(" ");
    for (int k=1; k<=17; k++)
    {
        ui->listEdad->addItem(QString::number(k));
    }
    ui->listConducta->addItem(" ");
    ui->listConducta->addItem("1.  Real Espana");
    ui->listConducta->addItem("2.  Sr. Burns");
    ui->listConducta->addItem("3.  Muy Malo");
    ui->listConducta->addItem("4.  Malo");
    ui->listConducta->addItem("5.  Casi llega");
    ui->listConducta->addItem("6.  Bueno");
    ui->listConducta->addItem("7.  Muy Bueno");
    ui->listConducta->addItem("8.  Sobresaliente");
    ui->listConducta->addItem("9.  Excelente");
    ui->listConducta->addItem("10. Kevin Chinchilla ");
}

nietecito::~nietecito()
{
    delete ui;
}

void nietecito::on_botCancelar_clicked()
{
    rejected();
}

void nietecito::on_botGuardar_clicked()
{
    QString qsNombre=ui->textNombre->text();
    QString qsApellido=ui->textApellido->text();
    QString qsLatitud=ui->textLatitud->text();
    QString qsLongitud=ui->textLongitud->text();
    QString qsEdad=ui->listEdad->currentText();
    QString qsConducta=ui->listConducta->currentText();

    string nombre=qsNombre.toStdString();
    string apellido=qsApellido.toStdString();
    string latitud=qsLatitud.toStdString();
    string longitud=qsLongitud.toStdString();
    string sEdad=qsEdad.toStdString();
    string sConducta=qsConducta.toStdString();

    int edad=qsEdad.toInt();
    int conducta=ui->listConducta->currentIndex();

    if(nombre!="" && apellido!="" && latitud!="" && longitud!="" && sEdad!="" && sConducta!="")
    {
        ifstream VarcFunRead("BDNietos.txt");
        if (VarcFunRead.good())
        {
            arcFunN.open("BDNietos.txt", std::ios::app);
            arcFunN << nombre << "-" << apellido << "-" << latitud << "-"<< longitud << "-" << edad << "-" << conducta << "-" << "\n";
            arcFunN.close();
        }
        else
        {
            arcFunN.open("BDNietos.txt");
            arcFunN << nombre << "-" << apellido << "-" << latitud << "-"<< longitud << "-" << edad << "-" << conducta << "-" << "\n";
            arcFunN.close();
        }
        QMessageBox msgBox;
        msgBox.setWindowTitle("Crear Regalos");
                   msgBox.setText("Creacion de Regalos");
        msgBox.setInformativeText("Muy bien duende, has ingresado un nene :)");
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
