
#include "Epos3ReadWriteLib.h"



/****************************************************************************/
/**
 * Added by Oscar Caravaca 14/05/2015.
 * This method is for ESPO3 initializtion. It takes the ESPOS to the Operation Mode state
 * @param NUll
 * @return void
 */
void Epos3ReadWriteLib::initEPOS3()
{
	int val=0;
	cout<<"Initializing ESPO3"<<endl;	
	
	sendDownloadCommand("0", "0x6040", "0", "uint16","0x00ff");
	sendUploadCommand("0", "0x6041", "0", "uint16");		
	sendDownloadCommand("0", "0x6040", "0", "uint16","0x0006");
	sendUploadCommand("0", "0x6041", "0", "uint16");
	sendDownloadCommand("0", "0x6040", "0", "uint16","0x0007");
	sendUploadCommand("0", "0x6041", "0", "uint16");
	sendDownloadCommand("0", "0x6040", "0", "uint16","0x000f");
	val = sendUploadCommand("0", "0x6041", "0", "uint16");
	cout<<"Val:"<<val<<endl;
}

/****************************************************************************/
/**
 * Added by Oscar Caravaca 14/05/2015.
 * This method send an upload command in order to read a register values
 * @param string positionStr: string parameter to indicate the slave position, example: "0"
 * @param string regStr: string parameter to indicate the register to be read, example: "0x6041"
 * @param string indexStr: string parameter to indicate the subindex of the register to be read, example: "0"
 * @param string dataTypeStr: string parameter to indicate the data type of the value is expected to read, example: "tuint16", see ESPOS3 documentation.
 * @return integer value of the read register. 
 */
int Epos3ReadWriteLib::sendUploadCommand(string positionStr, string regStr, string indexStr, string dataTypeStr)
{
	int retval = 0;
	commandArgs.clear();
	
	commandName = "upload";
	commandArgs.push_back(regStr);
	commandArgs.push_back(indexStr);
	
	cout<<"sending Upload command..."<<endl;
		
		CommandUpload *cmd;
		cmd = new CommandUpload();	
		
		cout<<"ckeck1"<< positions<<endl;						

		
                    try
                    {
						cout<<"ckeck2:"<< positions<<endl;	
						cmd->setMasters(masters);
						cout<<"cmd->setMasters(masters):"<< masters<<endl;
						cmd->setVerbosity(verbosity);
						cout<<"cmd->setVerbosity(verbosity):"<< verbosity<<endl;
						cmd->setAliases(aliases);
						cout<<"cmd->setAliases(aliases):"<< aliases<<endl;
						cout<<"ckeck3"<<endl;	
						cmd->setPositions(positions);
						cout<<"cmd->setPositions(positions):"<< positions<<endl;
						cmd->setDomains(domains);
						cout<<"cmd->setDomains(domains):"<< domains<<endl;
						cmd->setDataType(dataTypeStr);
						cout<<"cmd->setDataType(dataTypeStr):"<< dataTypeStr<<endl;
						cmd->setOutputFile(outputFile);
						cout<<"cmd->setOutputFile(outputFile):"<< outputFile<<endl;
						cmd->setSkin(skin);
						cout<<"cmd->setSkin(skin):"<< skin<<endl;
						force=true;
						cmd->setForce(force);
						cout<<"cmd->setForce(force):"<< force<<endl;																	
						cmd->execute(commandArgs);
						retval = cmd->getRegValue();
                    }
                    catch (InvalidUsageException &e)
                    {
                        cerr <<"cerr"<<e.what()<<"<->"<< endl << endl;
							
                        if(e.what()=="  Failed to download SDO: Input/output error")
						{
							cout<<"Catch!!!!!!!!!!!!!!"<<endl;
                        }else
                        {
						retval = -1;					
                        }
                    }
		
		return retval;
}
/****************************************************************************/
/**
 * Added by Oscar Caravaca 14/05/2015.
 * This method send an upload command in order to read a register values
 * @param string positionStr: string parameter to indicate the slave position, example: "0"
 * @param string regStr: string parameter to indicate the register to be read, example: "0x6041"
 * @param string indexStr: string parameter to indicate the subindex of the register to be read, example: "0"
 * @param string dataTypeStr: string parameter to indicate the data type of the value is expected to read, example: "tuint16", see ESPOS3 documentation.
 * @param string valuesStr: string parameter to indicate the value to written in the require register.
 * @return void: no return.
 */
int Epos3ReadWriteLib::sendDownloadCommand(string positionStr, string regStr, string indexStr, string dataTypeStr, string valuesStr)
{
	int retval = 0;
	commandArgs.clear();
	
	commandName = "download";
	commandArgs.push_back(regStr);
	commandArgs.push_back(indexStr);
	commandArgs.push_back(valuesStr);
	
	cout<<"sending download command..."<<endl;
		

		Command *cmd;	
		cmd = new CommandDownload();	

					try {
						cout<<"ckeck2"<< positions<<endl;	
						cmd->setMasters(masters);
						cout<<"cmd->setMasters(masters)"<< masters<<endl;
						cmd->setVerbosity(verbosity);
						cout<<"cmd->setVerbosity(verbosity)"<< verbosity<<endl;
						cmd->setAliases(aliases);
						cout<<"cmd->setAliases(aliases)"<< aliases<<endl;
						cout<<"ckeck3"<<endl;	
						cmd->setPositions(positions);
						cout<<"cmd->setPositions(positions)"<< positions<<endl;
						cmd->setDomains(domains);
						cout<<"cmd->setDomains(domains)"<< domains<<endl;
						cmd->setDataType(dataTypeStr);
						cout<<"cmd->setDataType(dataTypeStr)"<< dataTypeStr<<endl;
						cmd->setOutputFile(outputFile);
						cout<<"cmd->setOutputFile(outputFile)"<< outputFile<<endl;
						cmd->setSkin(skin);
						cout<<"cmd->setSkin(skin)"<< skin<<endl;
						force=true;
						cmd->setForce(force);
						cout<<"cmd->setForce(force)"<< force<<endl;																	
						cmd->execute(commandArgs);
					} catch (InvalidUsageException &e) {
                        cerr <<"cerr"<<e.what()<<"<->"<< endl << endl;

                        if(e.what()=="  Failed to download SDO: Input/output error")
                        {
                            cout<<"Catch!!!!!!!!!!!!!!"<<endl;
                        }else
                        {
                        retval = -1;
                        }
					}
					
					
		return retval;
}

void Epos3ReadWriteLib::moveMotor( string pos, string newtargerPosition, string profileVelocity )
{
  /*  char temp[11];
 //   string pos;
    string newVel;

//    sprintf(temp,"%x",newtargerPosition);
//    pos = "0x" + string(temp);


 //   sprintf(temp,"%x",profileVelocity);
  //  newVel = "0x" + string(temp);*/

    sendDownloadCommand(pos, "0x607A", "0", "uint32",newtargerPosition);
    sendDownloadCommand(pos, "0x6081", "0", "uint32",profileVelocity);
    sendDownloadCommand(pos, "0x6040", "0", "uint16","0x006f");
    sendDownloadCommand(pos, "0x6040", "0", "uint16","0x007f");
}
