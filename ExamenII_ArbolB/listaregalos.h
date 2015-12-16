#ifndef LISTAREGALOS_H
#define LISTAREGALOS_H

#include <QDialog>


using namespace std;
namespace Ui {
class listaregalos;
}

class listaregalos : public QDialog
{
    Q_OBJECT

public:
    explicit listaregalos(QWidget *parent = 0);
    ~listaregalos();


private slots:
    void on_botAgregar_clicked();
    int fibonacci(int num);
    void on_botEliminar_clicked();

    void on_botCancelar_clicked();


    void on_botGenerar_clicked();

private:
    Ui::listaregalos *ui;
};

#endif // LISTAREGALOS_H
