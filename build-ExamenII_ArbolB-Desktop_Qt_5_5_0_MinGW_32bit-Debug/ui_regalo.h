/********************************************************************************
** Form generated from reading UI file 'regalo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGALO_H
#define UI_REGALO_H

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

class Ui_regalo
{
public:
    QComboBox *listEdad;
    QLabel *label;
    QPushButton *botGuardar;
    QLabel *label_5;
    QLabel *label_4;
    QFrame *line_2;
    QLabel *label_2;
    QPushButton *botCancelar;
    QFrame *line;
    QLabel *label_10;
    QLineEdit *textDescripcion;

    void setupUi(QDialog *regalo)
    {
        if (regalo->objectName().isEmpty())
            regalo->setObjectName(QStringLiteral("regalo"));
        regalo->resize(414, 205);
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
        regalo->setPalette(palette);
        listEdad = new QComboBox(regalo);
        listEdad->setObjectName(QStringLiteral("listEdad"));
        listEdad->setGeometry(QRect(330, 100, 69, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        listEdad->setFont(font);
        label = new QLabel(regalo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 401, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        botGuardar = new QPushButton(regalo);
        botGuardar->setObjectName(QStringLiteral("botGuardar"));
        botGuardar->setGeometry(QRect(50, 160, 131, 31));
        botGuardar->setFont(font);
        botGuardar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 125, 0);"));
        label_5 = new QLabel(regalo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(290, 100, 41, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Century Gothic"));
        font2.setPointSize(9);
        label_5->setFont(font2);
        label_4 = new QLabel(regalo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 60, 241, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Century Gothic"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(regalo);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 40, 481, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(regalo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 100, 91, 31));
        label_2->setFont(font2);
        botCancelar = new QPushButton(regalo);
        botCancelar->setObjectName(QStringLiteral("botCancelar"));
        botCancelar->setGeometry(QRect(230, 160, 131, 31));
        botCancelar->setFont(font);
        botCancelar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 125, 0);"));
        line = new QFrame(regalo);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-10, 0, 491, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(regalo);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(270, 60, 151, 31));
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);
        textDescripcion = new QLineEdit(regalo);
        textDescripcion->setObjectName(QStringLiteral("textDescripcion"));
        textDescripcion->setGeometry(QRect(90, 100, 161, 31));
        textDescripcion->setFont(font);

        retranslateUi(regalo);

        QMetaObject::connectSlotsByName(regalo);
    } // setupUi

    void retranslateUi(QDialog *regalo)
    {
        regalo->setWindowTitle(QApplication::translate("regalo", "Dialog", 0));
        label->setText(QApplication::translate("regalo", "Registro de Regalos", 0));
        botGuardar->setText(QApplication::translate("regalo", "Guardar", 0));
        label_5->setText(QApplication::translate("regalo", "Edad", 0));
        label_4->setText(QApplication::translate("regalo", "Descripcion del Regalo", 0));
        label_2->setText(QApplication::translate("regalo", "Descripcion", 0));
        botCancelar->setText(QApplication::translate("regalo", "Cancelar", 0));
        label_10->setText(QApplication::translate("regalo", "Edad Permitida", 0));
    } // retranslateUi

};

namespace Ui {
    class regalo: public Ui_regalo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGALO_H
