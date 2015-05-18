#include <getopt.h>
#include <libgen.h> // basename()
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "CommandDownload.h"
#include "CommandUpload.h"
#include "MasterDevice.h"
#include <unistd.h>
#include <string>
#include <QApplication>


/*****************************************************************************/
string commandNameM;
Command::StringVector commandArgsM;
/*****************************************************************************/

inline int sendUploadCommand(string, string, string, string);
inline int sendDownloadCommand(string, string, string, string, string);
inline void initEPOS3();

/****************************************************************************/
