#include <iostream>
#include "CharacterList.h"
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
using namespace std;
//---------------------------------------------------------------------------- 
//  Character.cpp 
//  Maxwell Twente 
//  Programming Assignment 2
//  This program is entirely my own work 
//---------------------------------------------------------------------------- 


CharacterList::CharacterList()
{
	firstCharacter = NULL;
	
}

CharacterList::~CharacterList(void)
{
}



bool CharacterList::addCharacter(Character *newCharacter)
{
	
	if(newCharacter == NULL)
	{
		return false;
	}
	Character *back =NULL , *temp=firstCharacter ;
	newCharacter->m_pNext =NULL;
	if(firstCharacter ==NULL)
	{
		firstCharacter= newCharacter;
		return true;
	}
	else
	{

	
//	temp = headfirstCharacter;//new
//	back = NULL;
	//if(temp == NULL)
	//{
	// head=temp;
	// return true;
	//}//end new
	//else
	//{
	//	while((temp !=NULL) && (temp>newCharacter))
	//	{
	//		back = temp;
	//		temp = temp->m_pNext;
	//	}
	//}//end new

	
	char *searchCharacterName = temp->getName();
	char *newCharacterName = newCharacter->getName();
	while((temp != NULL) && (strcmp(newCharacterName,searchCharacterName)>0))//problem
	
	{
		back = temp;
		temp = temp->m_pNext;
		searchCharacterName = temp->getName();
	}
	if(back == NULL)
	{
		newCharacter->m_pNext = firstCharacter;
		firstCharacter = newCharacter;
		return true;
	}
	else 
	{
		newCharacter->m_pNext = temp;
		back ->m_pNext=newCharacter;
		return true;
	}
	}
	return true;
	
	
}


bool CharacterList::deleteCharacter(char *characterName)
{
	Character *temp;
	Character *back;

	
	temp = firstCharacter;
	back = NULL;
		
	
	char *searchCharacterName = temp->getName();


	while((temp !=NULL ) && (!strcmp(searchCharacterName, characterName) == 0))	//!=?
	{
		back = temp;
		temp = temp-> m_pNext;
		searchCharacterName = temp->getName();//??
	}

	if(temp==NULL)
	{
		return false;
	}
	else if(back == NULL)
	{
		firstCharacter = firstCharacter -> m_pNext;
		// back->m_pNext = temp->m_pNext;//?
		delete temp;
		return true;
	}
	else//comment out?
	{
		//back -> m_pNext = temp -> m_pNext;
		delete temp;
		return true;
		
	}
}
bool CharacterList::addItem(char *characterName, Item *newItem)
{	
	Character *temp = firstCharacter;
	Character *back = NULL;

	
	//temp = firstCharacter;
		//find end of the list
	//if(temp ==NULL)
	//{
	//	return false;
	//}
//	else
//	{
//back -> m_pNext = temp -> m_pNext;
//	}
		char *searchCharacterName = temp->getName();
	while((temp != NULL) && (strcmp(characterName,temp->getName())!=0))
		{
			back= temp;
			temp=temp->m_pNext;
			//searchCharacterName = temp->getName();
		}

		// Add this node at the end of the list 
		temp->addItem(newItem);

	
	return true;
}
Item *CharacterList::deleteItem(char *characterName, char *itemName)
{



	Character *temp = firstCharacter;
	Character *back = NULL;
	char *searchCharacterName = temp->getName();
	while((temp != NULL) && (strcmp(characterName, searchCharacterName)!=0))
	{
		back = temp;
		temp= temp-> m_pNext;
		if(temp!=NULL)
		{
			searchCharacterName=temp->getName();
		}
	}
	//if(strcmp(searchCharacterName,characterName)==0)//comment out?
	//{

	//	return temp->dropItem(itemName);
	//}
	//
	if(temp == NULL)
	{
		return NULL;
	}
	else 
	{
	return temp->dropItem(itemName);

		//return false;
	}
}
void CharacterList::printCharacters()
{
	Character *temp=firstCharacter;



	
	
		while(temp != NULL)
		{
			temp->printAll();
			temp = temp->m_pNext;
			cout << endl;
		}
	
}