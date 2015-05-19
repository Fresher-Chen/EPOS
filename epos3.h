#ifndef EPOS3_H
#define EPOS3_H

#include <QMainWindow>

namespace Ui {
class epos3;
}

class epos3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit epos3(QWidget *parent = 0);
    ~epos3();


private slots:
    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::epos3 *ui;
};

#endif // EPOS3_H
