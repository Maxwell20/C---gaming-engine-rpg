//---------------------------------------------------------------
// File: GameGraph.cpp
// Programming assignment 4
// this is entirly my own work
// Author:Maxwell Twente
//---------------------------------------------------------------
#include "GameGraph.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;
#define NUMROOMS 20

GameGraph::GameGraph(void)
{
// Initialize Adjacency Matrix to all '\0's
	for(int i=0; i<NUMROOMS; i++)
	{
		for(int j=0; j<NUMROOMS; j++)
		{
			m_cAdjMatrix[i][j] = '\0';
		}
	}
	m_iLocation=0;	
}

GameGraph::~GameGraph(void)
{
}
// Read game file, build scenario and describe first room.

bool GameGraph::LoadGame(char *filename)  
{
	char line[128];
    int link;
    bool done;

// Try to open the file with the graph data
    m_InFile.open(filename, ifstream::in); 
    if(!m_InFile.is_open())
    {
       // inFile.is_open() returns false if the file could not be found or
       //    if for some other reason the open failed.
        cout << "Unable to open file  \nProgram terminating...\n";
        return false;
    }
	done = false;

// Read all the graph data and build the adjacency matrix
    for(int i=0; i<NUMROOMS; i++)
    {
        // Read room name
       getNextLine(line, 128);
        /* --- Copy room name into data structure i --- */
			strcpy(m_Rms[i].m_sRoomName,line);
        // Read room description
       getNextLine(line, 128);
        /* --- Copy room description into data structure i --- */
			strcpy(m_Rms[i].m_sRoomDesc,line);
        // Read room item
       getNextLine(line, 128);
        /* --- Copy room item name into data structure i --- */
			strcpy(m_Rms[i].m_sItemName,line);
	    // Read room creature
       getNextLine(line, 128);
        /* --- Copy room creature name into data structure i --- */
			strcpy(m_Rms[i].m_sCreatureName,line);
        // Read North door------------------------------------------
       getNextLine(line, 128);
        link = atoi(line); // Convrt to room index
        // Call function to set link in adjacency matrix
		if(link>=0)
			setLink(i,link,'N');
        // Read South door------------------------------------------
       getNextLine(line, 128);
        
			link = atoi(line);    // Convert to room index
        // Call function to set link in adjacency matrix
			if(link>=0)
				setLink(i,link,'S');
        // Read East door-------------------------------------------
       getNextLine(line, 128);
       
			link = atoi(line);    // Convert to room index
        // Call function to set link in adjacency matrix
			if(link>=0)
				setLink(i,link,'E');
        // Read West door-------------------------------------------
      getNextLine(line, 128);
      
		link = atoi(line);    // Convert to room index
        // Call function to set link in adjacency matrix
		if(link>=0)
				setLink(i,link,'W');
        // Read up stairway-----------------------------------------
       getNextLine(line, 128);
       
			link = atoi(line);    // Convert to room index
        // Call function to set link in adjacency matrix
			if(link>=0)
				setLink(i,link,'U');
        // Read down stairway---------------------------------------
       getNextLine(line, 128);
       
			link = atoi(line);    // Convert to room index
        // Call function to set link in adjacency matrix
			if(link>=0)
				setLink(i,link,'D');
    }
    
	m_InFile.close();
	describeRoom(m_iLocation);
	return true;
	

	

}

      // Execute a command                                            
bool GameGraph::doCommand(char *cmd)
{	
	//------------------------------------------------------
	//notes from class
	//use m_iLocation to hold the index of the current room
    //initialize iNext to = -1
	//use for loops
	//m_iLocation=0
	//if iNext>=0
	//m_ilocation=iNext
	//use s scan f to read first word If word is go GO read both words
	//-------------------------------------------------------


	char cmd1[10];
	char cmd2[10];
	int iNext =-1;//??
	bool directionExist = false;
	bool notValidDirection = false;

	sscanf(cmd,"%s",cmd1);
	if(strcmp(cmd1,"GO")==0)
	{
		sscanf(cmd,"%s %s",cmd1,cmd2);

			if(strcmp(cmd2,"NORTH")==0)//?//this way is wrong
			{
		//itterate through and find index of the room
				int j = 0;
				for(j = 0;j<NUMROOMS;j++)
				{
					if(m_cAdjMatrix[m_iLocation][j]=='N')
					{
						m_iLocation = j;
						directionExist = true;
						break;						
					}
				
				}
			}
			else if(strcmp(cmd2,"SOUTH")==0)
			{
				int j = 0;
				for(j = 0;j<NUMROOMS;j++)
				{
					if(m_cAdjMatrix[m_iLocation][j]=='S')
					{
						m_iLocation = j;
						directionExist = true;
						break;
						
					}
				
				}
			}

			else if(strcmp(cmd2,"EAST")==0)
			{
				int j = 0;
				for(j = 0;j<NUMROOMS;j++)
				{
					if(m_cAdjMatrix[m_iLocation][j]=='E')
					{
						m_iLocation = j;
						directionExist = true;
						break;
						
					}
		
				}

			}
			else if(strcmp(cmd2,"WEST")==0)
			{
				int j = 0;
				for(j = 0;j<NUMROOMS;j++)
				{
					if(m_cAdjMatrix[m_iLocation][j]=='W')
					{
						m_iLocation = j;
						directionExist = true;
						break;
						
					}
				}
			}
			else if(strcmp(cmd2,"UP")==0)
			{
				int j = 0;
				for(j = 0;j<NUMROOMS;j++)
				{
					if(m_cAdjMatrix[m_iLocation][j]=='U')
					{
						m_iLocation = j;
						directionExist = true;
						break;
						
					}
				}
			}
			else if(strcmp(cmd2,"DOWN")==0)
			{
				int j = 0;
				for(j = 0;j<NUMROOMS;j++)
				{
					if(m_cAdjMatrix[m_iLocation][j]=='D')
					{
						m_iLocation = j;
						directionExist = true;
						break;
					}
			
				}

			}
			else
			{
				notValidDirection = true;				
			}
			
			if((!directionExist) && (!notValidDirection))
			{
				cout << "No room or staircase in that direction." <<endl;
			}
			else if(notValidDirection)
			{
				cout << "Not a valid direction." << endl;
			}
			else
			{
				describeRoom(m_iLocation);
			}

		return false;
	}
	else if(strcmp(cmd1,"QUIT")==0)
	{
		return true;
	}
	else if(strcmp(cmd1,"TAKE")==0)
	{
		cout << "NOT IMPLEMENTED YET" << endl;
		return false;
	}
	else if(strcmp(cmd1,"FIGHT")==0)
	{
		cout << "NOT IMPLEMENTED YET" << endl;
		return false;
	}
	else
	{
		cout << "NOT VALID COMMAND" << endl;
		return false;
	}
	///*else
	//{
	//	cout << "Command:"<< cmd << " is not implemented yet!"<< endl;
	//}*/
}
//-------------------------------------------------------------------------------------------------------
//This function shall print all information in each Room structure and all the links in the graph. 
//This function is to be used primarily during development and testing to make sure all data have been
//read and stored correctly.
//-------------------------------------------------------------------------------------------------------
void GameGraph::PrintAll()
{
	//print matrix to show links
	cout << "room layout:" << endl;
	cout <<"  ";
	for(int k = 0; k < NUMROOMS; k++)
	{
		if(k<10)
		{
			cout << "0"<<k << " ";
		}
		else
		{
			cout << k << " ";
		}
	}
	cout <<endl;
	for(int i=0; i<NUMROOMS; i++)
	{
		if(i<10)
		{
			cout << "0" <<i << " ";
		}
		else
		{
			cout << i << " ";
		}
		for(int j=0; j<NUMROOMS; j++)
		{
			cout << m_cAdjMatrix[i][j] << "  ";
			//cout <<" " << j;
		}
		cout << endl;
	}
		//print all room information
	cout << "ALL ROOM DESCRIPTIONS:" << endl;
		

	for(int j=0; j<NUMROOMS; j++)
	{
	// describe each room (i.e. for m_iLocation = 0 to 19)
		describeRoom(j);		
	}
}
//-------------------------------------------
// GetNextLine()
// Read the next line from the file.
// dr coleman
//-------------------------------------------
void GameGraph::getNextLine(char *line, int lineLen)
{
    int    done = false;

    while(!done)
    {
        m_InFile.getline(line, lineLen);
        
        if(m_InFile.good())    // If a line was successfully read
        {
           if(strlen(line) == 0)  // Skip any blank lines
                continue;
            else if(line[0] == '#')  // Skip any comment lines
                continue;
            else done = true;    // Got a valid data line so return 
                                 // with this line
        }
        else
        {
            strcpy(line, "");
            return;
        }
    } // end while
}
void GameGraph::setLink(int roomIdx, int linkIdx, char dCode)
{
        m_cAdjMatrix[roomIdx][linkIdx]=dCode;
}
void GameGraph::describeRoom(int roomIdx)
{		
		cout << "---------------------------------" << endl;
		cout << "You are in room: " << roomIdx << endl;
		cout <<	m_Rms[roomIdx].m_sRoomName << endl;
		cout <<	m_Rms[roomIdx].m_sRoomDesc << endl;
		cout <<	m_Rms[roomIdx].m_sItemName << endl;
		cout <<	m_Rms[roomIdx].m_sCreatureName << endl;

		int i =0;
		for(i=0;i<NUMROOMS;i++)
		{
			char direction = m_cAdjMatrix[m_iLocation][i];

			if(direction=='N')
			{
				cout << "There is a door in the North wall." << endl;
			}

			else if(direction=='S')
			{
				cout << "There is a door in the South wall." << endl;
			}
			else if(direction=='E')
			{
				cout << "There is a door in the East wall." << endl;
			}
			else if(direction=='W')
			{
				cout << "There is a door in the West wall." << endl;
			}
			else if(direction=='U')
			{
				cout << "There is a staircase going Up." << endl;
			}
			else if(direction=='D')
			{
				cout << "There is a staircase going Down." << endl;
			}
		}
		cout << "---------------------------------" << endl;
}