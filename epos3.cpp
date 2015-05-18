#include "epos3.h"
#include "ui_epos3.h"
#include "Epos3ReadWriteLib.h"


using namespace std;

epos3::epos3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::epos3)
{
    ui->setupUi(this);

}

epos3::~epos3()
{
    delete ui;
}

void epos3::on_pushButton_9_clicked()
{
    Epos3ReadWriteLib epos3Lib;
    //epos3Lib = new Epos3ReadWriteLib();
    epos3Lib.initEPOS3();

}
