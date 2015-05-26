#-------------------------------------------------
#
# Project created by QtCreator 2015-05-14T16:54:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = Espos3_Control_GUI
TEMPLATE = app

INCLUDEPATH +=  /home/oscar/Documents/RTAI/ethercat-1.5.2/ \                
              /home/oscar/Documents/RTAI/ethercat-1.5.2/include2/.


SOURCES += Command.cpp \
           CommandDownload.cpp \
           CommandMaster.cpp \
           CommandSdos.cpp \
           CommandUpload.cpp \
           DataTypeHandler.cpp \
           epos3.cpp \
           Epos3ReadWriteLib.cpp \
           main.cpp \
           MasterDevice.cpp \
           NumberListParser.cpp \
           SdoCommand.cpp \
    qcustomplot.cpp

HEADERS  += Command.h \
           CommandDownload.h \
           CommandMaster.h \
           CommandSdos.h \
           CommandUpload.h \
           DataTypeHandler.h \
           epos3.h \
           Epos3ReadWriteLib.h \
           MasterDevice.h \
           NumberListParser.h \
           SdoCommand.h \
           ui_epos3.h \
           ../master/ioctl.h \
           ../master/globals.h \
           ../globals.h \
           ../config.h \
           ../include2/ecrt.h \
           ../lib/ioctl.h \
    qcustomplot.h


FORMS    += epos3.ui



