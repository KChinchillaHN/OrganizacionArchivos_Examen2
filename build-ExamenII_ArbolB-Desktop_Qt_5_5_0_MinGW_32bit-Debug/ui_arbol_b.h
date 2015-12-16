/********************************************************************************
** Form generated from reading UI file 'arbol_b.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARBOL_B_H
#define UI_ARBOL_B_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Arbol_B
{
public:
    QLabel *label;
    QPushButton *BotNieto;
    QPushButton *BotRegalo;
    QPushButton *BotLista;
    QPushButton *BotBuscar;
    QFrame *line;
    QFrame *line_2;
    QPushButton *BotEstrella;
    QPushButton *BotSalir;

    void setupUi(QWidget *Arbol_B)
    {
        if (Arbol_B->objectName().isEmpty())
            Arbol_B->setObjectName(QStringLiteral("Arbol_B"));
        Arbol_B->resize(315, 376);
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
        Arbol_B->setPalette(palette);
        label = new QLabel(Arbol_B);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 311, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        BotNieto = new QPushButton(Arbol_B);
        BotNieto->setObjectName(QStringLiteral("BotNieto"));
        BotNieto->setGeometry(QRect(100, 120, 111, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush5(QColor(0, 125, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        BotNieto->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        BotNieto->setFont(font1);
        BotNieto->setStyleSheet(QLatin1String("background-color: rgb(0, 125, 0);\n"
"color: rgb(255, 255, 255);"));
        BotRegalo = new QPushButton(Arbol_B);
        BotRegalo->setObjectName(QStringLiteral("BotRegalo"));
        BotRegalo->setGeometry(QRect(80, 170, 151, 31));
        BotRegalo->setFont(font1);
        BotRegalo->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 125, 0);"));
        BotLista = new QPushButton(Arbol_B);
        BotLista->setObjectName(QStringLiteral("BotLista"));
        BotLista->setGeometry(QRect(60, 220, 191, 31));
        BotLista->setFont(font1);
        BotLista->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 125, 0);"));
        BotBuscar = new QPushButton(Arbol_B);
        BotBuscar->setObjectName(QStringLiteral("BotBuscar"));
        BotBuscar->setGeometry(QRect(40, 270, 231, 31));
        BotBuscar->setFont(font1);
        BotBuscar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 125, 0);"));
        line = new QFrame(Arbol_B);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-20, 0, 351, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Arbol_B);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(-10, 40, 351, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        BotEstrella = new QPushButton(Arbol_B);
        BotEstrella->setObjectName(QStringLiteral("BotEstrella"));
        BotEstrella->setGeometry(QRect(130, 70, 51, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush6(QColor(234, 223, 65, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        BotEstrella->setPalette(palette2);
        BotEstrella->setFont(font1);
        BotEstrella->setStyleSheet(QLatin1String("background-color: rgb(234, 223, 65);\n"
"color: rgb(255, 255, 255);"));
        BotSalir = new QPushButton(Arbol_B);
        BotSalir->setObjectName(QStringLiteral("BotSalir"));
        BotSalir->setGeometry(QRect(20, 320, 271, 31));
        BotSalir->setFont(font1);
        BotSalir->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 125, 0);"));

        retranslateUi(Arbol_B);

        QMetaObject::connectSlotsByName(Arbol_B);
    } // setupUi

    void retranslateUi(QWidget *Arbol_B)
    {
        Arbol_B->setWindowTitle(QApplication::translate("Arbol_B", "Arbol_B", 0));
        label->setText(QApplication::translate("Arbol_B", "Menu principal de Regalos", 0));
        BotNieto->setText(QApplication::translate("Arbol_B", "Nuevo Nietecito", 0));
        BotRegalo->setText(QApplication::translate("Arbol_B", "Crear Regalos", 0));
        BotLista->setText(QApplication::translate("Arbol_B", "Crear Lista de Regalos", 0));
        BotBuscar->setText(QApplication::translate("Arbol_B", "Buscar Nietecito", 0));
        BotEstrella->setText(QApplication::translate("Arbol_B", "*", 0));
        BotSalir->setText(QApplication::translate("Arbol_B", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class Arbol_B: public Ui_Arbol_B {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARBOL_B_H
