#ifndef REGALO_H
#define REGALO_H

#include <QDialog>

namespace Ui {
class regalo;
}

class regalo : public QDialog
{
    Q_OBJECT

public:
    explicit regalo(QWidget *parent = 0);
    ~regalo();

private slots:
    void on_botCancelar_clicked();
    void on_botGuardar_clicked();

private:
    Ui::regalo *ui;
};

#endif // REGALO_H
