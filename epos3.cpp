#include "epos3.h"
#include "ui_epos3.h"
#include "Epos3ReadWriteLib.h"
#include <string.h>




using namespace std;

Epos3ReadWriteLib epos3Lib;


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

    //epos3Lib = new Epos3ReadWriteLib();
    epos3Lib.initEPOS3();

}

void epos3::on_pushButton_10_clicked()
{
    int index,motor0, motor1;
    QString targetPosition;
    QString targetVelocity;

    index = ui->comboBox->currentIndex();
    cout << index <<endl;

    if (index==0)
    {
        epos3Lib.sendDownloadCommand("0", "0x6060", "0", "uint8","0x01");
    }
    else if(index==1)
    {
        epos3Lib.sendDownloadCommand("0", "0x6060", "0", "uint8","0x03");
    }

    targetPosition = ui->lineEdit->text();
    targetVelocity = ui->lineEdit_2->text();

    if(targetPosition !=""){
        epos3Lib.sendDownloadCommand("0", "0x607A", "0", "uint32",targetPosition.toStdString());
    }

    if(targetVelocity !=""){
        epos3Lib.sendDownloadCommand("0", "0x60FF", "0", "uint32",targetVelocity.toStdString());
    }
}

void epos3::on_pushButton_11_clicked()
{
    int operationMode_int;
    int actualPosition_int;
    int actualVelocity_int;
    int controlWord_int;
    int statusWord_int;

    operationMode_int = epos3Lib.sendUploadCommand("0", "0x6060", "0", "uint8");
    actualPosition_int = epos3Lib.sendUploadCommand("0", "0x6064", "0", "uint32");
    actualVelocity_int = epos3Lib.sendUploadCommand("0", "0x606C", "0", "uint32");
    controlWord_int = epos3Lib.sendUploadCommand("0", "0x6040", "0", "uint16");
    statusWord_int = epos3Lib.sendUploadCommand("0", "0x6041", "0", "uint16");


    ui->lcdNumber_5->display(operationMode_int);
    ui->lcdNumber_4->display(actualPosition_int);
    ui->lcdNumber_3->display(actualVelocity_int);
    ui->lcdNumber_2->display(controlWord_int);
    ui->lcdNumber->display(statusWord_int);
}
