#pragma once



 
//---------------------------------------------------------------------------- 
//  Character.h 
//  Maxwell Twente 
//  Programming 1 D&D
//  This program is entirely my own work 
//---------------------------------------------------------------------------- 
class Character
{
private:
	char m_sName[65];     // holds the value for characters name
	int m_iClass;	  // holds the value for characters class
	int m_iAlignment;  // holds the value for characters alignment
	int m_iHitPoints;  // holds the value for characters hit points
	int m_iCharTraits[6]; // used to represent the character qualities of: Strength, Dexterity, Constitution, Intelligence, Wisdom, and Charisma
public:
	Character(char *name, int cl, int al, int hp, int str, int dex, int con, int itl, int wis, int chr); //------------------------------------------------------------------------------
																										 //A parameterized constructor which shall take as arguments 
																										 //a character array giving the name and integer arguments specifying 
																									     //the class, alignment, hit points, strength, dexterity, constitution, intelligence,
																										 //wisdom, and charisma of the character.
																										 //------------------------------------------------------------------------------
	void getName(char* name);      // - Get and set the player name. 
	void setName(char name[]);  
	void getClass(int& cl);	       // - Get and set the player class. The get function shall be a reference function.
	void setClass(int cl);
	void getAlignment(int& al);    // - Get and set the player alignment value. The get function shall be a reference function.
	void setAlignment(int al);
	void getHitPoints(int& hp);    // - Get and set the player hit points. The get function shall be a reference function.
	void setHitPoints(int hp);
	void getStrength(int *str);	   // - Get and set the player Strength score (m_iCharTraits[0]). 
	void setStrength(int str);
	void getDexterity(int *dex);   // - Get and set the player Dexterity score (m_iCharTraits[1])
	void setDexterity(int dex);
	void getConstitution(int *con); // - Get and set the player Constitution score (m_iCharTraits[2]). 
	void setConstitution(int con);
	void getIntelligence(int *itl);// - Get and set the player Intelligence score (m_iCharTraits[3]). 
	void setIntelligence(int itl); 
	void getWisdom(int *wis);	   // - Get and set the player Wisdom score (m_iCharTraits[4]). 
	void setWisdom(int wis);      
	void getCharisma(int *chr);    // - Get and set the player Charisma score (m_iCharTraits[5]).
	void setCharisma(int chr);   
 	void printAll();               // - Print all information on this character. This includes, Name, Class, Alignment, Hit points, and all 6 character trait values.
	
	
	Character(void);			   //default constructor and destructor.
	~Character(void);
};

