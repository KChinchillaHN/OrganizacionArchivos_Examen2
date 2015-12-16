/********************************************************************************
** Form generated from reading UI file 'nietecito.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NIETECITO_H
#define UI_NIETECITO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_nietecito
{
public:
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *listEdad;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *listConducta;
    QPushButton *botGuardar;
    QPushButton *botCancelar;
    QLineEdit *textNombre;
    QLineEdit *textApellido;
    QLineEdit *textLatitud;
    QLineEdit *textLongitud;

    void setupUi(QDialog *nietecito)
    {
        if (nietecito->objectName().isEmpty())
            nietecito->setObjectName(QStringLiteral("nietecito"));
        nietecito->resize(653, 312);
        nietecito->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(nietecito);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 651, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        line = new QFrame(nietecito);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-10, 0, 661, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(nietecito);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 40, 651, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(nietecito);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 100, 91, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(9);
        label_2->setFont(font1);
        label_3 = new QLabel(nietecito);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 100, 101, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(nietecito);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 60, 631, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Century Gothic"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(nietecito);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(530, 100, 41, 31));
        label_5->setFont(font1);
        listEdad = new QComboBox(nietecito);
        listEdad->setObjectName(QStringLiteral("listEdad"));
        listEdad->setGeometry(QRect(570, 100, 69, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Century Gothic"));
        listEdad->setFont(font3);
        label_6 = new QLabel(nietecito);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 150, 421, 31));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(nietecito);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 190, 51, 31));
        label_7->setFont(font1);
        label_8 = new QLabel(nietecito);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(220, 190, 61, 31));
        label_8->setFont(font1);
        label_9 = new QLabel(nietecito);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(480, 150, 151, 31));
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignCenter);
        listConducta = new QComboBox(nietecito);
        listConducta->setObjectName(QStringLiteral("listConducta"));
        listConducta->setGeometry(QRect(480, 190, 151, 31));
        listConducta->setFont(font3);
        listConducta->setMaxVisibleItems(11);
        botGuardar = new QPushButton(nietecito);
        botGuardar->setObjectName(QStringLiteral("botGuardar"));
        botGuardar->setGeometry(QRect(180, 270, 131, 31));
        botGuardar->setFont(font3);
        botGuardar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 125, 0);"));
        botCancelar = new QPushButton(nietecito);
        botCancelar->setObjectName(QStringLiteral("botCancelar"));
        botCancelar->setGeometry(QRect(360, 270, 131, 31));
        botCancelar->setFont(font3);
        botCancelar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 125, 0);"));
        textNombre = new QLineEdit(nietecito);
        textNombre->setObjectName(QStringLiteral("textNombre"));
        textNombre->setGeometry(QRect(110, 100, 141, 31));
        textNombre->setFont(font3);
        textApellido = new QLineEdit(nietecito);
        textApellido->setObjectName(QStringLiteral("textApellido"));
        textApellido->setGeometry(QRect(360, 100, 141, 31));
        textApellido->setFont(font3);
        textLatitud = new QLineEdit(nietecito);
        textLatitud->setObjectName(QStringLiteral("textLatitud"));
        textLatitud->setGeometry(QRect(60, 190, 141, 31));
        textLatitud->setFont(font3);
        textLongitud = new QLineEdit(nietecito);
        textLongitud->setObjectName(QStringLiteral("textLongitud"));
        textLongitud->setGeometry(QRect(280, 190, 141, 31));
        textLongitud->setFont(font3);

        retranslateUi(nietecito);

        QMetaObject::connectSlotsByName(nietecito);
    } // setupUi

    void retranslateUi(QDialog *nietecito)
    {
        nietecito->setWindowTitle(QApplication::translate("nietecito", "Dialog", 0));
        label->setText(QApplication::translate("nietecito", "Registro de Nietecito", 0));
        label_2->setText(QApplication::translate("nietecito", "Primer Nombre", 0));
        label_3->setText(QApplication::translate("nietecito", "Primer Apellido", 0));
        label_4->setText(QApplication::translate("nietecito", "Datos Personales", 0));
        label_5->setText(QApplication::translate("nietecito", "Edad", 0));
        label_6->setText(QApplication::translate("nietecito", "Direccion del Hogar", 0));
        label_7->setText(QApplication::translate("nietecito", "Latitud", 0));
        label_8->setText(QApplication::translate("nietecito", "Longitud", 0));
        label_9->setText(QApplication::translate("nietecito", "Conducta del nietecito", 0));
        botGuardar->setText(QApplication::translate("nietecito", "Guardar", 0));
        botCancelar->setText(QApplication::translate("nietecito", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class nietecito: public Ui_nietecito {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NIETECITO_H
