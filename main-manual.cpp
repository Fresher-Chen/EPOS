/*****************************************************************************
 *
 *  $Id: main.cpp,v 960cc1bb6b4a 2012/10/24 16:21:52 fp $
 *
 *  Copyright (C) 2006-2009  Florian Pose, Ingenieurgemeinschaft IgH
 *
 *  This file is part of the IgH EtherCAT Master.
 *
 *  The IgH EtherCAT Master is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License version 2, as
 *  published by the Free Software Foundation.
 *
 *  The IgH EtherCAT Master is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General
 *  Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with the IgH EtherCAT Master; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *  ---
 *
 *  The license mentioned above concerns the source code only. Using the
 *  EtherCAT technology and brand is only permitted in compliance with the
 *  industrial property and similar rights of Beckhoff Automation GmbH.
 *
 ****************************************************************************/

#include "main.h"
using namespace std;

// option variables
string mastersM = "-"; // all masters
string positionsM = "-"; // all positions
string aliasesM = "-"; // all aliases
string domainsM = "-"; // all domains
string dataTypeStrM;
Command::Verbosity verbosity = Command::Normal;
bool forceM = true;
bool helpRequestedM = false;
string outputFileM;
string skinM;


int main()
{
	int retval = 0;
	int direction = 0;	
	int profileVelocity=0;
	bool returnWhile=false;
	stringstream str;
	string option;
	char temp[11];
	string pos;
	string newVel;
	
	int targerPosition=50000;
	int newtargerPosition=0;
	
	cout<<"main"<<endl;	
	
	cout<<"Press 1 to move to left or 2 to the rigth: "<< option <<endl;
	cout<<"Otion entered: "<< option <<endl;
		
	//Initialization
	
	initEPOS3();
	
	cout<<"Size of int: "<<sizeof(int)<<endl;	
	
	cout<<"*******JAYMI**********************"<<sizeof(int)<<endl;	
	cout<<"Profile Velocity (rpm/s):"<<endl;
	cin>>profileVelocity;	
	cout<<"Target position:"<<endl;
	cin>>targerPosition;
	while(1)
	{
		cout<<"Waiting commands"<<endl;	
		returnWhile=false;
		cin>>direction;
		if (direction ==1)
		{
							
				newtargerPosition = 0xffffffff - targerPosition + 1;
				cout<<"targerPosition: "<<targerPosition<<endl;
		}
		else if(direction==2)
		{
			newtargerPosition = targerPosition;
			cout<<"else if1 "<<endl;
		}
		else if(direction==0)
		{
			break;
			return 0;			
		}
		else if(direction==3)
		{
			cout<<"Profile Velocity (rpm/s):"<<endl;
			cin>>profileVelocity;	
			cout<<"Target position:"<<endl;
			cin>>targerPosition;
		}
		else
		{
			cout<<"Only 1, 2 or 0 options are permitted"<<endl;
			returnWhile=true;
			
		}
		if (!returnWhile)
		{		
			
		cout<<"before sprintf: "<<endl;			
		sprintf(temp,"%x",newtargerPosition);	
		pos = "0x" + string(temp);
		cout<<"pos: "<<pos<<endl;	
		
		
		sprintf(temp,"%x",profileVelocity);	
		newVel = "0x" + string(temp);
		cout<<"newVel: "<<newVel<<endl;
		
		sendDownloadCommand("0", "0x607A", "0", "uint32",pos);
		sendDownloadCommand("0", "0x6081", "0", "uint32",newVel);										
		sendDownloadCommand("0", "0x6040", "0", "uint16","0x006f");
		sendUploadCommand("0", "0x6041", "0", "uint16");
		sendDownloadCommand("0", "0x6040", "0", "uint16","0x007f");	
		sendUploadCommand("0", "0x6041", "0", "uint16");		
		}
		
	}
	return retval;
}

/****************************************************************************/
/**
 * Added by Oscar Caravaca 14/05/2015.
 * This method is for ESPO3 initializtion. It takes the ESPOS to the Operation Mode state
 * @param NUll
 * @return void
 */
void initEPOS3()
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
int sendUploadCommand(string positionStr, string regStr, string indexStr, string dataTypeStr)
{
	int retval = 0;
	commandArgsM.clear();
	
	commandNameM = "upload";
	commandArgsM.push_back(regStr);
	commandArgsM.push_back(indexStr);
	
	cout<<"sending Upload command..."<<endl;
		
		CommandUpload *cmd;
		cmd = new CommandUpload();	
		
		cout<<"ckeck1"<< positionsM<<endl;						

		
					try {
						cout<<"ckeck2:"<< positionsM<<endl;	
						cmd->setMasters(mastersM);
						cout<<"cmd->setMasters(masters):"<< mastersM<<endl;
						cmd->setVerbosity(verbosity);
						cout<<"cmd->setVerbosity(verbosity):"<< verbosity<<endl;
						cmd->setAliases(aliasesM);
						cout<<"cmd->setAliases(aliases):"<< aliasesM<<endl;
						cout<<"ckeck3"<<endl;	
						cmd->setPositions(positionsM);
						cout<<"cmd->setPositions(positions):"<< positionsM<<endl;
						cmd->setDomains(domainsM);
						cout<<"cmd->setDomains(domains):"<< domainsM<<endl;
						cmd->setDataType(dataTypeStrM);
						cout<<"cmd->setDataType(dataTypeStr):"<< dataTypeStrM<<endl;
						cmd->setOutputFile(outputFileM);
						cout<<"cmd->setOutputFile(outputFile):"<< outputFileM<<endl;
						cmd->setSkin(skinM);
						cout<<"cmd->setSkin(skin):"<< skinM<<endl;
						forceM=true;
						cmd->setForce(forceM);
						cout<<"cmd->setForce(force):"<< forceM<<endl;																	
						cmd->execute(commandArgsM);
					} catch (InvalidUsageException &e) {
						cerr << e.what() << endl << endl;
	
						
						if(e.what()=="Failed to download SDO: Input/output error")
						{
							cout<<"Catch!!!!!!!!!!!!!!"<<endl;
						}
						retval = 1;
					}					
		retval = cmd->getRegValue();
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
int sendDownloadCommand(string positionStr, string regStr, string indexStr, string dataTypeStr, string valuesStr)
{
	int retval = 0;
	commandArgsM.clear();
	
	commandNameM = "download";
	commandArgsM.push_back(regStr);
	commandArgsM.push_back(indexStr);
	commandArgsM.push_back(valuesStr);
	
	cout<<"sending download command..."<<endl;
		

		Command *cmd;	
		cmd = new CommandDownload();	

					try {
						cout<<"ckeck2"<< positionsM<<endl;	
						cmd->setMasters(mastersM);
						cout<<"cmd->setMasters(masters)"<< mastersM<<endl;
						cmd->setVerbosity(verbosity);
						cout<<"cmd->setVerbosity(verbosity)"<< verbosity<<endl;
						cmd->setAliases(aliasesM);
						cout<<"cmd->setAliases(aliases)"<< aliasesM<<endl;
						cout<<"ckeck3"<<endl;	
						cmd->setPositions(positionsM);
						cout<<"cmd->setPositions(positions)"<< positionsM<<endl;
						cmd->setDomains(domainsM);
						cout<<"cmd->setDomains(domains)"<< domainsM<<endl;
						cmd->setDataType(dataTypeStrM);
						cout<<"cmd->setDataType(dataTypeStr)"<< dataTypeStrM<<endl;
						cmd->setOutputFile(outputFileM);
						cout<<"cmd->setOutputFile(outputFile)"<< outputFileM<<endl;
						cmd->setSkin(skinM);
						cout<<"cmd->setSkin(skin)"<< skinM<<endl;
						forceM=true;
						cmd->setForce(forceM);
						cout<<"cmd->setForce(force)"<< forceM<<endl;																	
						cmd->execute(commandArgsM);
					} catch (InvalidUsageException &e) {
						cerr << e.what() << endl << endl;
						retval = 1;
					}
					
					
		return retval;
}
