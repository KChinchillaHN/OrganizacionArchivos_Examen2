#include "listaregalos.h"
#include "ui_listaregalos.h"
#include <list>
#include<iostream>
#include<fstream>
#include<QMessageBox>

using namespace std;

list<int>::iterator knum;
list<string> listRegalos;

listaregalos::listaregalos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listaregalos)
{
    ui->setupUi(this);
    ui->listRegalo->addItem(" ");
    ui->listNombre->addItem(" ");

    string linea, nombre, apellido;
    ifstream arcFunReadL ("BDNietos.txt");
      if (arcFunReadL.is_open())
      {
        while ( getline (arcFunReadL,linea) )
        {
            string s = linea;
            string delimiter = "-";
            size_t pos = 0;
            string token;
            string lista [6];
            int cont=0;
            while ((pos = s.find(delimiter)) != std::string::npos)
            {
                token = s.substr(0, pos);
                lista[cont]=token;
                cont++;
                s.erase(0, pos + delimiter.length());
                token = s.substr(0, pos);
                lista[cont]=token;
            }
            nombre=lista[0];
            apellido=lista[1];

            nombre+=" "+apellido;
            QString qNombre = QString::fromStdString(nombre);
            ui->listNombre->addItem(qNombre);
        }
            arcFunReadL.close();
      }
}

listaregalos::~listaregalos()
{
    delete ui;
}

void listaregalos::on_botAgregar_clicked()
{
    QString regalo= ui->listRegalo->currentText();
    ui->tablaRegalos->addItem(regalo);
}

void listaregalos::on_botEliminar_clicked()
{
    ui->tablaRegalos->takeItem(ui->tablaRegalos->row(ui->tablaRegalos->currentItem()));
}

int listaregalos::fibonacci(int num)
{
    int resultado, pValor= 0, sValor= 1;
    for (int k = 0 ; k < num ; k++ )
    {
       if ( k <= 1 )
           resultado=k;
       else
       {
          resultado = pValor + sValor;
          pValor = sValor;
          sValor = resultado;
       }
    }
    return resultado;
}

void listaregalos::on_botCancelar_clicked()
{
    reject();
}

void listaregalos::on_botGenerar_clicked()
{
    ui->listRegalo->clear();
    ui->listRegalo->addItem(" ");
    ui->tablaRegalos->clear();

    QString qnombreL= ui->listNombre->currentText();
    string nombreR=qnombreL.toStdString();
    string linea, nombre, apellido, sEdad, sConducta, regalo, sEdadP;
    int edad, conducta, edadP;

    ifstream arcFunReadL ("BDNietos.txt");
      if (arcFunReadL.is_open())
      {
        while (getline (arcFunReadL,linea) )
        {
            string s = linea;
            string delimiter = "-";
            size_t pos = 0;
            string token;
            string lista [6];
            int cont=0;
            while ((pos = s.find(delimiter)) != std::string::npos)
            {
                token = s.substr(0, pos);
                lista[cont]=token;
                cont++;
                s.erase(0, pos + delimiter.length());
                token = s.substr(0, pos);
                lista[cont]=token;
            }

            nombre=lista[0];
            apellido=lista[1];
            sEdad=lista[4];
            sConducta=lista[5];
            edad=atoi(sEdad.c_str());
            conducta=atoi(sConducta.c_str());
            nombre+=" "+apellido;

            if(nombreR==nombre)
            {
                arcFunReadL.close();
                break;
            }
            break;
        }
      }


        if(conducta>=5)
        {
            //QString qConducta = QString::fromStdString(sConducta);
            //ui->listRegalo->addItem(qConducta);
            //qConducta = QString::fromStdString(sEdad);
            //ui->listRegalo->addItem(qConducta);
            ui->listRegalo->addItem("Carbon");
        }
        else
        {
            ifstream arcFunReadL2 ("BDRegalos.txt");
            string linea2, sEdad2, regalo2;
            int edad2;
            if (arcFunReadL2.is_open())
            {
                while (getline (arcFunReadL2,linea2) )
                {
                    string s = linea2;
                    string delimiter = "-";
                    size_t pos = 0;
                    string token;
                    string lista [2];
                    int cont=0;
                    while ((pos = s.find(delimiter)) != std::string::npos)
                    {
                        token = s.substr(0, pos);
                        lista[cont]=token;
                        cont++;
                        s.erase(0, pos + delimiter.length());
                        token = s.substr(0, pos);
                        lista[cont]=token;
                    }

                    sEdad2=lista[0];
                    regalo2=lista[1];

                    edad2=atoi(sEdad2.c_str());
                    if(edad>edad2)
                    {
                        QString qRegalo = QString::fromStdString(regalo2);
                        ui->listRegalo->addItem(qRegalo);
                    }
                }
                arcFunReadL.close();
            }
        }
}

/*QMessageBox msgBox;
msgBox.setWindowTitle("Lista Completa");
           msgBox.setText("Bolsa de Regalos llena");
msgBox.setInformativeText("Ya se completaron todos los regalos disponibles");
msgBox.setStandardButtons(QMessageBox::Ok );
msgBox.setDefaultButton(QMessageBox::Ok);
msgBox.exec();*/
/*QString qRegalo = QString::fromStdString(nombre);
ui->listRegalo->addItem(qRegalo);
ui->tablaRegalos->addItem("Carbon");*/
