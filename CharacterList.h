#pragma once
#include "Character.h"


//---------------------------------------------------------------------------- 
//  Character.cpp 
//  Maxwell Twente 
//  Programming Assignment 2
//  This program is entirely my own work 
//---------------------------------------------------------------------------- 
class CharacterList
{
private:
	Character *firstCharacter;	
public:
	CharacterList(void);
	~CharacterList(void);
	
	bool addCharacter(Character *newCharacter);
	bool deleteCharacter(char *characterName);
	bool addItem(char *characterName, Item *newItem);
	Item *deleteItem(char *characterName, char *itemName);
	void printCharacters();

};
