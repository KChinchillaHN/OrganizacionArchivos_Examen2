#ifndef NIETECITO_H
#define NIETECITO_H

#include <QDialog>

namespace Ui {
class nietecito;
}

class nietecito : public QDialog
{
    Q_OBJECT

public:
    explicit nietecito(QWidget *parent = 0);
    ~nietecito();

private slots:
    void on_botCancelar_clicked();
    void on_botGuardar_clicked();

private:
    Ui::nietecito *ui;
};

#endif // NIETECITO_H
