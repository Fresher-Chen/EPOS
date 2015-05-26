#include "epos3.h"
#include "ui_epos3.h"
#include "Epos3ReadWriteLib.h"
#include <string.h>
#include <QElapsedTimer>
#include <stdlib.h>



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
//restart button
void epos3::on_pushButton_9_clicked()
{
    QElapsedTimer timer;
    timer.start();
    //epos3Lib.sendDownloadCommand("0", "0x2010", "0", "uint16","0x01");
    epos3Lib.initEPOS3();
    //epos3Lib.sendDownloadCommand("0", "0x2010", "0", "uint16","1");//
    cout << "!!!The slow operation took: " <<  timer.nsecsElapsed()<< " ns"<<endl;
}
//pause button
void epos3::on_pushButton_3_clicked()
{
    epos3Lib.sendDownloadCommand("0","0x6040","0","uint16","0x017f");
}
//stop button
void epos3::on_pushButton_5_clicked()
{
    QElapsedTimer timer;
    timer.start();
    epos3Lib.sendDownloadCommand("0","0x6040","0","uint16","0x02");
    cout << "!!!The slow operation took: " <<  timer.nsecsElapsed()<< " ns"<<endl;
}

void epos3::on_pushButton_7_clicked()
{
    epos3Lib.sendDownloadCommand("1","0x6040","0","uint16","0x017f");
}

void epos3::on_pushButton_8_clicked()
{
    epos3Lib.sendDownloadCommand("1","0x6040","0","uint16","0x02");
}
void epos3::on_pushButton_10_clicked()
{
    int index,motor0, motor1;
    QString targetPosition;
    QString targetVelocity;

    index = ui->comboBox->currentIndex();
    cout << index <<endl;

    if (index==1)
    {
        epos3Lib.sendDownloadCommand("0", "0x6060", "0", "uint8","0x01");
    }
    else if(index==0)
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

    /*For recordering mode/Buffer Recorder*/
    epos3Lib.sendDownloadCommand("0", "0x2010", "0", "uint16","0x01");//start recording
    epos3Lib.sendDownloadCommand("0", "0x2011", "0", "uint16","0x01");//trigger at movement start
    epos3Lib.sendDownloadCommand("0", "0x2012", "0", "uint16","10");//samplig period at 1ms
    epos3Lib.sendDownloadCommand("0", "0x2013", "0", "uint16","0");//samplig period at 1ms
    epos3Lib.sendDownloadCommand("0", "0x2014", "0", "uint16","1");//Number of variables
    //epos3Lib.sendDownloadCommand("0", "0x2015", "1", "uint16","0x6064");//velocity actual value
    epos3Lib.sendDownloadCommand("0", "0x2015", "1", "uint16","0x606C");//velocity actual value
    epos3Lib.sendDownloadCommand("0", "0x2016", "1", "uint16","0");//

}

void epos3::on_pushButton_11_clicked()
{
    int operationMode_int;
    int actualPosition_int;
    int actualVelocity_int;
    int controlWord_int;
    int statusWord_int;
    int recoderStatus_int;
    int offsetDataBuffer_int;

    operationMode_int = epos3Lib.sendUploadCommand("0", "0x6060", "0", "uint8");
    actualPosition_int = epos3Lib.sendUploadCommand("0", "0x6064", "0", "uint32");
    actualVelocity_int = epos3Lib.sendUploadCommand("0", "0x606C", "0", "uint32");
    controlWord_int = epos3Lib.sendUploadCommand("0", "0x6040", "0", "uint16");
    statusWord_int = epos3Lib.sendUploadCommand("0", "0x6041", "0", "uint16");
    recoderStatus_int = epos3Lib.sendUploadCommand("0", "0x2017", "0", "uint16");


    ui->lcdNumber_5->display(operationMode_int);
    ui->lcdNumber_4->display(actualPosition_int);
    ui->lcdNumber_3->display(actualVelocity_int);
    ui->lcdNumber_2->display(controlWord_int);
    ui->lcdNumber->display(statusWord_int);
    ui->lcdNumber_11->display(recoderStatus_int);

    /*read buffer*/

    operationMode_int = epos3Lib.sendUploadCommandBuffer("0", "0x201B", "0", "string");
    //epos3Lib.sendDownloadCommand("0", "0x2010", "0", "uint16","0");


    offsetDataBuffer_int = epos3Lib.sendUploadCommand("0", "0x2019", "0", "uint16");


    /***********************************************************************/
    //Creating the graph

    QVector<double> x(256), y(256); // initialize with entries 0..100
    for (int i=0; i<256; ++i)
    {
      x[i] = i; // x goes from -1 to 1
      y[i] = (double)atof(epos3Lib.dataBuffer[i].c_str()); // let's plot a quadratic function

      if(y[i]>=(65536/2))
      {
         y[i]= -(65536 - y[i] + 1);
      }
    }

    // create graph and assign data to it:
    ui->widget->addGraph();
    ui->widget->graph(0)->setData(x, y);
    // give the axes some labels:
    ui->widget->xAxis->setLabel("x");
    ui->widget->yAxis->setLabel("y");
    // set axes ranges, so we see all data:
    ui->widget->xAxis->setRange(0, 256);
    ui->widget->yAxis->setRange(0, 1500);
    ui->widget->replot();


}




void epos3::on_pushButton_clicked()
{
    QString targetPosition,targetVelocity;
    char newTargetPosition_chr[11];
    string newTargetPosition_str;
    int newTargetPosition_int;

    targetPosition = ui->lineEdit->text();
    targetVelocity = ui->lineEdit_2->text();


    newTargetPosition_int = 0xffffffff - targetPosition.toInt() + 1;

    sprintf(newTargetPosition_chr,"%x",newTargetPosition_int);

    newTargetPosition_str = "0x" + string(newTargetPosition_chr);


    epos3Lib.moveMotor("0", newTargetPosition_str,targetVelocity.toStdString() );
}

void epos3::on_pushButton_2_clicked()
{

    QString targetPosition,targetVelocity;

    targetPosition = ui->lineEdit->text();
    targetVelocity = ui->lineEdit_2->text();

    epos3Lib.moveMotor("0",targetPosition.toStdString(),targetVelocity.toStdString() );

}
