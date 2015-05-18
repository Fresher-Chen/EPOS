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

private:
    Ui::epos3 *ui;
};

#endif // EPOS3_H
