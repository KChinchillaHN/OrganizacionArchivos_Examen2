#ifndef ARBOL_B_H
#define ARBOL_B_H

#include <QWidget>

namespace Ui {
class Arbol_B;
}

class Arbol_B : public QWidget
{
    Q_OBJECT

public:
    explicit Arbol_B(QWidget *parent = 0);
    ~Arbol_B();

private slots:
    void on_BotNieto_clicked();
    void on_BotRegalo_clicked();
    void on_BotLista_clicked();

    void on_BotSalir_clicked();

    void on_BotEstrella_clicked();

private:
    Ui::Arbol_B *ui;
};

#endif // ARBOL_B_H
