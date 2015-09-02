#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include "Character.h"

#include <iostream>



using namespace std;
 
//---------------------------------------------------------------------------- 
//  Character.cpp 
//  Maxwell Twente 
//  Programming Assignment 2
//  This program is entirely my own work 
//---------------------------------------------------------------------------- 
Character::Character(void) // default constructor 
{
m_pNext=NULL;
BattleItems= new Possessions();
TreasureItems= new Possessions();

}


Character::~Character(void) // default destructor
{
}

Character::Character(char *name, int cl, int al, int hp, int str, int dex, int con, int itl, int wis, int chr)
{
	strcpy_s(m_sName,name);//strcpy
	m_iClass = cl;																						 
	 //------------------------------------------------------------------------------
	 //A parameterized constructor which shall take as arguments 
	 //a character array giving the name and integer arguments specifying 
	 //the class, alignment, hit points, strength, dexterity, constitution, intelligence,
	 //wisdom, and charisma of the character.
	 //------------------------------------------------------------------------------
	m_iAlignment = al;
	m_iHitPoints = hp;
	m_iCharTraits[0] = str;
	m_iCharTraits[1] = dex;
	m_iCharTraits[2] = con;
	m_iCharTraits[3] = itl;
	m_iCharTraits[4] = wis;
	m_iCharTraits[5] = chr;
	BattleItems=new Possessions();
    TreasureItems=new Possessions();
	m_pNext=NULL;

}
	


char *Character::getName() // - Get and set the player name. 
{
	return m_sName;
}
void Character::setName(char *name) 
{	
	strcpy(m_sName,name);
}
int Character::getClass() // - Get and set the player class.
{
	  return m_iClass;
}
void Character::setClass(int cl)
{
	m_iClass = cl;
}
int Character::getAlignment() // - Get and set the player Alignment.
{
	 return m_iAlignment;
}
void Character::setAlignment(int al)
{
	m_iAlignment=al;
}
int Character::getHitPoints() // - Get and set the player Hit Points
{	 
	    return m_iHitPoints;
}
void Character::setHitPoints(int hp)
{
	m_iHitPoints = hp;
}



int Character::getStrength() // - Get and set the player strength
{
	 return m_iCharTraits[0];
}

void Character::setStrength(int str)
{
	m_iCharTraits[0] = str;
}

int Character::getDexterity() // - Get and set the players Dexterity
{
	 return m_iCharTraits[1];
}

void Character::setDexterity(int dex)
{
	m_iCharTraits[1] = dex;
}
int Character::getConstitution() // - Get and set the players Constitution
{
	return m_iCharTraits[2];
}

void Character::setConstitution(int con)
{
	m_iCharTraits[2] = con;
}

int Character::getIntelligence() // - Get and set the players intelligence
{
   return m_iCharTraits[3];
}

void Character::setIntelligence(int itl)
{
	m_iCharTraits[3] = itl;		
}

int Character::getWisdom() // - Get and set the players wisdom
{
	return m_iCharTraits[4];
}

void Character::setWisdom(int wis)
{
	m_iCharTraits[4] = wis;
}

int Character::getCharisma() // - Get and set the players charisma
{
 return m_iCharTraits[5];

}

void Character::setCharisma(int chr)
{
	m_iCharTraits[5] = chr;
}

//void Character::testGetItem(char *itemName)
//{
//	// Check both trees to search the item
//	// Search in BattleItem tree
//	
//	// Search in TreasureItem tree
//}
void Character::printAll()  // Print all properties.
{
	
	cout << "Name: " << m_sName << endl;
	cout << "Class: " << m_iClass <<endl;
	cout << "Alignment: " << m_iAlignment << endl;
	cout << "Hit Points: " << m_iHitPoints << endl;
	cout << "Strength: " << m_iCharTraits[0] << endl;
	cout << "Dexterity:  " << m_iCharTraits[1] << endl;
	cout << "Constitution: " << m_iCharTraits[2] << endl;
	cout << "Intelligence: " << m_iCharTraits[3] << endl;
	cout << "Wisdom: " << m_iCharTraits[4] << endl;
	cout << "Charisma: " << m_iCharTraits[5] << endl;
	if(BattleItems != NULL)
	{
		BattleItems->printTree();
	}

	if(TreasureItems != NULL)
	{
		TreasureItems->printTree();
	}
	
//int i =0;
//cout<<"Item Details:"<<endl;
//for(i=0;i<10;i++)
//{
//char *itemName = m_Items[i].m_sItemName;
//if(!(strcmp(itemName,"---")==0))
//{
//cout<<"Item name:" << m_Items[i].m_sItemName<<endl;
//cout<<"Item value:" << m_Items[i].m_dValue<<endl;
//cout<<"Item weight:"<< m_Items[i].m_dWeight<<endl;
//cout<<"Item type:"<<m_Items[i].m_iType<<endl<<endl;
//}
//}
//	int i = 0;
//	while((i<10) && (strcmp(m_Items[i].m_sItemName,"---"))!=0)
//	{
//
//cout<<"Item name:" << m_Items[i].m_sItemName<<endl;
//cout<<"Item value:" << m_Items[i].m_dValue<<endl;
//cout<<"Item weight:"<< m_Items[i].m_dWeight<<endl;
//cout<<"Item type:"<<m_Items[i].m_iType<<endl<<endl;
//i++;
//	}

}



//-----------------------------------------------
// Add an item to the list of items
//-----------------------------------------------
bool Character::addItem(Item *item)
{
    
	if(item->m_iType == BATTLE_ITEM)
	{
		// inserting battle item
		
	BattleItems->addItem(item);

	return true;
	}
	else
	{
		// inserting treasure item
	TreasureItems->addItem(item);
	return true;
	}
}
//-----------------------------------------------
// Delete an item from the list of items.  Return
// pointer to item if the item was found or NULL
// if it was not found in the list.
//-----------------------------------------------
Item *Character::dropItem(char *itemName)
{

Item *temp =BattleItems->dropItem(itemName);
	if(temp !=NULL)
	{
	return temp;
	}
	else
	{
	return TreasureItems->dropItem(itemName);
	}

}
//     Search all	
//    for(int i=0; i<10; i++)
//    {
//         If this it the correct item name
//       /* if(strcmp(m_Items[i].m_sItemName, itemName) == 0)
//        {
//            Item *newItem = new Item();*/
//            *newItem = m_Items[i];
//             Set the name of the item to the "Empty" string
//            strcpy(m_Items[i].m_sItemName, "---");
//            return newItem;
//        }
// /*   }
//    return NULL;*/
//}

