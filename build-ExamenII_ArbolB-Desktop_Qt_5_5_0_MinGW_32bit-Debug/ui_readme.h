/********************************************************************************
** Form generated from reading UI file 'readme.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_README_H
#define UI_README_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_readme
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *readme)
    {
        if (readme->objectName().isEmpty())
            readme->setObjectName(QStringLiteral("readme"));
        readme->resize(712, 291);
        label = new QLabel(readme);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 681, 21));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        textBrowser = new QTextBrowser(readme);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 40, 691, 192));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        textBrowser->setFont(font1);
        pushButton = new QPushButton(readme);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 250, 111, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Century Gothic"));
        font2.setPointSize(9);
        pushButton->setFont(font2);

        retranslateUi(readme);

        QMetaObject::connectSlotsByName(readme);
    } // setupUi

    void retranslateUi(QDialog *readme)
    {
        readme->setWindowTitle(QApplication::translate("readme", "Dialog", 0));
        label->setText(QApplication::translate("readme", "Readme", 0));
        textBrowser->setHtml(QApplication::translate("readme", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Ventajas de utilizar un sistema para guardar los regalos</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Utilizar un sistema para la clasificacion de los ninos y regalos mejora el tiempo de respuesta y reduce el error humanos que pudiese existir.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p ali"
                        "gn=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> <span style=\" font-style:italic;\">Ventajas de utilizar un arbol B</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Habiamos aprendido con los arboles binarios, como se mejora dramaticamente el tiempo de espera al cambiar una busqueda secuencial por una de saltos como la que realizamos con arboles binarios, Con la implementacion de arboles B mejoramos el balanceo en lo que respecta a altura del arbol, logrando asi aun mas rapidez en las busquedas.</p></body></html>", 0));
        pushButton->setText(QApplication::translate("readme", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class readme: public Ui_readme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_README_H
