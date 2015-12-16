/********************************************************************************
** Form generated from reading UI file 'listaregalos.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAREGALOS_H
#define UI_LISTAREGALOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_listaregalos
{
public:
    QLabel *label;
    QPushButton *botGuardar;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_6;
    QFrame *line_2;
    QLabel *label_2;
    QPushButton *botCancelar;
    QComboBox *listNombre;
    QFrame *line;
    QListWidget *tablaRegalos;
    QComboBox *listRegalo;
    QPushButton *botAgregar;
    QPushButton *botEliminar;
    QPushButton *botGenerar;

    void setupUi(QDialog *listaregalos)
    {
        if (listaregalos->objectName().isEmpty())
            listaregalos->setObjectName(QStringLiteral("listaregalos"));
        listaregalos->resize(471, 493);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        listaregalos->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        listaregalos->setFont(font);
        label = new QLabel(listaregalos);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 471, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        botGuardar = new QPushButton(listaregalos);
        botGuardar->setObjectName(QStringLiteral("botGuardar"));
        botGuardar->setGeometry(QRect(330, 360, 121, 31));
        botGuardar->setFont(font);
        botGuardar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 125, 0);"));
        label_7 = new QLabel(listaregalos);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 220, 41, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Century Gothic"));
        font2.setPointSize(9);
        label_7->setFont(font2);
        label_4 = new QLabel(listaregalos);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 60, 461, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Century Gothic"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(listaregalos);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 170, 461, 31));
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(listaregalos);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 40, 651, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(listaregalos);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 110, 51, 31));
        label_2->setFont(font2);
        botCancelar = new QPushButton(listaregalos);
        botCancelar->setObjectName(QStringLiteral("botCancelar"));
        botCancelar->setGeometry(QRect(330, 410, 121, 31));
        botCancelar->setFont(font);
        botCancelar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 125, 0);"));
        listNombre = new QComboBox(listaregalos);
        listNombre->setObjectName(QStringLiteral("listNombre"));
        listNombre->setGeometry(QRect(80, 110, 221, 31));
        listNombre->setFont(font);
        listNombre->setMaxVisibleItems(11);
        line = new QFrame(listaregalos);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-10, 0, 661, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tablaRegalos = new QListWidget(listaregalos);
        tablaRegalos->setObjectName(QStringLiteral("tablaRegalos"));
        tablaRegalos->setGeometry(QRect(70, 280, 231, 192));
        listRegalo = new QComboBox(listaregalos);
        listRegalo->setObjectName(QStringLiteral("listRegalo"));
        listRegalo->setGeometry(QRect(80, 220, 221, 31));
        listRegalo->setFont(font);
        listRegalo->setMaxVisibleItems(11);
        botAgregar = new QPushButton(listaregalos);
        botAgregar->setObjectName(QStringLiteral("botAgregar"));
        botAgregar->setGeometry(QRect(330, 220, 121, 31));
        botAgregar->setFont(font);
        botAgregar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 125, 0);"));
        botEliminar = new QPushButton(listaregalos);
        botEliminar->setObjectName(QStringLiteral("botEliminar"));
        botEliminar->setGeometry(QRect(330, 310, 121, 31));
        botEliminar->setFont(font);
        botEliminar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 125, 0);"));
        botGenerar = new QPushButton(listaregalos);
        botGenerar->setObjectName(QStringLiteral("botGenerar"));
        botGenerar->setGeometry(QRect(330, 110, 121, 31));
        botGenerar->setFont(font);
        botGenerar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 125, 0);"));

        retranslateUi(listaregalos);

        QMetaObject::connectSlotsByName(listaregalos);
    } // setupUi

    void retranslateUi(QDialog *listaregalos)
    {
        listaregalos->setWindowTitle(QApplication::translate("listaregalos", "Dialog", 0));
        label->setText(QApplication::translate("listaregalos", "Registro de Listas de Regalo", 0));
        botGuardar->setText(QApplication::translate("listaregalos", "Guardar", 0));
        label_7->setText(QApplication::translate("listaregalos", "Regalo", 0));
        label_4->setText(QApplication::translate("listaregalos", "Nietecito", 0));
        label_6->setText(QApplication::translate("listaregalos", "Lista de Regalos", 0));
        label_2->setText(QApplication::translate("listaregalos", "Nombre:", 0));
        botCancelar->setText(QApplication::translate("listaregalos", "Cancelar", 0));
        botAgregar->setText(QApplication::translate("listaregalos", "Agregar", 0));
        botEliminar->setText(QApplication::translate("listaregalos", "Eliminar", 0));
        botGenerar->setText(QApplication::translate("listaregalos", "Generar Lista", 0));
    } // retranslateUi

};

namespace Ui {
    class listaregalos: public Ui_listaregalos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAREGALOS_H
