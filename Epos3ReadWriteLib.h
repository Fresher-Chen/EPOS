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

using namespace std;

/*****************************************************************************/
class Epos3ReadWriteLib {
public:


typedef list<Command *> CommandList;
CommandList commandList;

string binaryBaseName;
string commandName;
Command::StringVector commandArgs;

// option variables
string masters = "-"; // all masters
string positions = "-"; // all positions
string aliases = "-"; // all aliases
string domains = "-"; // all domains
string dataTypeStr;
Command::Verbosity verbosity = Command::Normal;
bool force = true;
bool helpRequested = false;
string outputFile;
string skin;


void initEPOS3();
int sendUploadCommand(string, string, string, string);
int sendDownloadCommand(string, string, string, string, string);

};
/*****************************************************************************/
