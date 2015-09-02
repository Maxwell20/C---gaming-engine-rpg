//
//#include "CharacterList.h"
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//Character smallGameCharacter = new Character("John",1,180,500,...;
//	
//	//// Small game character
//	//Character smallGameCharacter("Elephant",1,2,3,4,5,6,7,8,9);
//	//smallGameCharacter.setAlignment(360);
//	//smallGameCharacter.setHitPoints(1000);
//	//smallGameCharacter.setStrength(500);	
//	//smallGameCharacter.setName("Elephant");
//	//char* smallCharacterName = "";
//	///*smallGameCharacter.getName(smallCharacterName);
//	//cout<<"Name: "<<smallCharacterName<<endl;*/
//	//
//	//smallGameCharacter.printAll();
//	
//	/*int *strength = 0;
//	smallGameCharacter.getStrength(strength);
//	cout<<"Strength: "<<strength;*/
//
//	//// Horse (Game Character)
//	//Character bigGameCharacter = Character("Horse",1,2,3,4,5,6,7,8,9);
//	//cout << "Horse Properties" <<endl;
//	//int alignment;
//	//
//	//bigGameCharacter.getAlignment(alignment);
//	//cout << "Alignment :"<< alignment <<endl;
//
//	////test strcpy
//	//char sourceString[] ="Test String";
//	//char destinationString[25];
//	//strcpy(destinationString, sourceString);
//
//
//	//Testing (Character Class)
//	//1. Test if Character object is successfully created eg. Character elephant = new Character()
//Character *actor;
//Character *actress;
//Character *son;
//Character *daughter;
//
//actor = new Character("john",1,2,3,4,5,6,7,8,9);
//Item firstItem = {"GUN",1,2,3};
//Item thirdItem = {"gold",1,2,3};
//Item fourthItem = {"chain",1,2,3};
//Item fithItem={"ball",1,2,3};
//Item sixthItem={"chiken",1,2,3};
//Item seventhItem={"wax",1,2,3};
//Item eighthItem={"pen",1,2,3};
//Item ninthItem={"quill",1,2,3};
//Item tenthItem={"axe",1,2,3,};
//Item crashItem={"crash",1,2,3};
////firstItem.m_sItemName[]="GUN";
////strcpy(firstItem->m_sItemName, "GUN");
////firstItem->m_dValue=1;
////firstItem->m_dWeight=10;
////firstItem->m_iType=21;
//
//Item *firstItemPtr;
//firstItemPtr = &firstItem;
//actor->addItem(firstItemPtr);
//
//
//
//Item secondItem = {"SWORD",1,2,3};
//Item *secondItemPtr;
//secondItemPtr = &secondItem;
////actor->addItem(secondItemPtr);
////actor->addItem(firstItemPtr);
//////actor->addItem(secondItemPtr);
////actor->addItem(firstItemPtr);
////actor->addItem(secondItemPtr);
////actor->addItem(firstItemPtr);
////actor->addItem(secondItemPtr);
////actor->addItem(firstItemPtr);
////actor->addItem(secondItemPtr);
////actor->addItem(firstItemPtr);
////actor->addItem(secondItemPtr);
////actor->addItem(firstItemPtr);
//
//
//
//
//actress = new Character("ema",1,2,3,4,5,6,7,8,9);
//actress->addItem(firstItemPtr);
//
//son = new Character("mick",1,2,3,4,5,6,7,8,9);
//son->addItem(firstItemPtr);
//
//daughter = new Character("britney",1,2,3,4,5,6,7,8,9);
//daughter->addItem(secondItemPtr);
//
//
//
//CharacterList *theList = new CharacterList();
//
//theList->addCharacter(actor);
////theList->deleteCharacter("john");
////theList.addCharacter(actress);
////theList.addCharacter(son);
////theList.addCharacter(daughter);
//theList->printCharacters();
//
//
//theList->deleteItem("john","GUN");
//
//
//
//
//
//system("pause");
//
////CharacterList characterlist();
////characterlist.addCharacter(elephant);
//
//
//
//	//2. Test all methods of the characters. 
//	//   a> getters and setters (from previous assignment)
//	//   b> test add item method
//	//   c> test drop itme
//	//   d> test print items
//	
//	// Testing (CharacterList Class)
//
//	// 1. Test AddCharacter
//	// 2. Test DeleteCharacter
//	// 3. Add item for specific character (by passing character name and item name)
//	// 4. Delete specific item for a character (by passing character name and item name)
//	// 5. Test Print character method
//
//
//
//	system("pause");
//	return 0;
//}

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif


#pragma once
#include <iostream>
#include "CharacterList.h"
#include "Item.h"
#include "Character.h"
#include "Possessions.h"

using namespace std;

int main()
{
//declare int variables
Item *item1 = new Item(); item1->m_dValue = 5.0; item1->m_dWeight=50; item1->m_iType=2;strcpy(item1->m_sItemName,"Crown");
Item *item2 = new Item(); item2->m_dValue = 2.5; item2->m_dWeight=5.0; item2->m_iType=1;strcpy(item2->m_sItemName,"Magic_bow_&_arrow");
Item *item3 = new Item();item3->m_dValue = 3.0; item3->m_dWeight=3.0; item3->m_iType=1;strcpy(item3->m_sItemName,"Mace");
Item *item4 = new Item();


item4->m_dValue = 3.5; item4->m_dWeight=5.6; item4->m_iType=1;strcpy(item4->m_sItemName,"Magic_laser_gun");
Item *item5 = new Item();item5->m_dValue = 4.5; item5->m_dWeight=3.9; item5->m_iType=1;strcpy(item5->m_sItemName,"Atom_Smasher");
Item *item6 = new Item();item6->m_dValue = 1.5; item6->m_dWeight=4.5; item6->m_iType=2;strcpy(item6->m_sItemName,"Ring_of_fire");
Item *item7 = new Item();item7->m_dValue = 5.5; item7->m_dWeight=6.9; item7->m_iType=1;strcpy(item7->m_sItemName,"Sword");
Item *item8 = new Item();item8->m_dValue = 0.5; item8->m_dWeight=7.0; item8->m_iType=2;strcpy(item8->m_sItemName,"Magic_locket");
Item *item9 = new Item();item9->m_dValue = 0.5; item9->m_dWeight=7.0; item9->m_iType=2;strcpy(item9->m_sItemName,"Gold_coins");
Item *item10 = new Item();item10->m_dValue = 5.5; item10->m_dWeight=6.0; item10->m_iType=2;strcpy(item10->m_sItemName,"Camelot_key");

//declare char arrays to hold character names
char char_1_Name[65];
char char_2_Name[65];
char char_3_Name[65];
char char_4_Name[65];
char char_5_Name[65];

//Assign values to character name variables
strcpy(char_1_Name, "Mordred");	 //copy string literal to name
strcpy(char_2_Name, "Merlin");	 //copy string literal to name
strcpy(char_3_Name, "Morgana");	 //copy string literal to name
strcpy(char_4_Name, "Arthur");	 //copy string literal to name
strcpy(char_5_Name, "Camelot_gate_keeper");//copy string literal to name

//declare pointers to character names
char *char_1_ptr = char_1_Name;	 //pointer to hold character string of name
char *char_2_ptr = char_2_Name;	 //pointer to hold character string of name
char *char_3_ptr = char_3_Name;	 //pointer to hold character string of name
char *char_4_ptr = char_4_Name;	 //pointer to hold character string of name
char *char_5_ptr = char_4_Name;	 //pointer to hold character string of name

//create characters with the given names
//Character* character5 =  new Character(); //declare and create a default character 
Character* character1 =  new Character(char_1_Name, 1,0,1,1,1,1,0,1,1); //declare and create a Character object
Character* character2 =  new Character(char_2_Name, 2,2,2,3,2,0,0,1,2); //declare and create a Character object
Character* character3 =  new Character(char_3_Name, 3,7,4,4,3,1,6,9,5); //declare and create a Character object
Character* character4 =  new Character(char_4_Name, 4,2,8,6,0,4,5,6,9); //declare and create a Character object


/*create a CharacterList object*/
CharacterList *characterList = new CharacterList(); //create character list

/*add characters to character list*/
characterList->addCharacter(character1);//add character to list
characterList->addCharacter(character2);//add character to list
characterList->addCharacter(character3);//add character to list
characterList->addCharacter(character4);//add character to list
//characterList->addCharacter(character5);//add character to list

/* Add ITEMS TO CHARACTERS*/
//characterList->addItem(char_1_Name, item5);//add items to the characters
//characterList->addItem(char_1_Name, item6);//add items to the characters

characterList->addItem(char_2_Name, item8);//add treasure items to the characters
characterList->addItem(char_2_Name, item10);//add treasure items to the characters
characterList->addItem(char_2_Name, item9);//add treasure items to the characters

//characterList->addItem(char_3_Name, item3);//add items to the characters
//characterList->addItem(char_3_Name, item10);//add items to the characters
characterList->addItem(char_3_Name, item9);//add items to the characters

/**/characterList->addItem(char_4_Name, item1);//add items to the characters
characterList->addItem(char_4_Name, item2);//add items to the characters
characterList->addItem(char_4_Name, item3);//add items to the characters

characterList->printCharacters(); //print character list
//characterList->deleteCharacter(character5->getName()); //print character list
characterList->deleteItem(char_4_Name, "Crown");
characterList->addItem(char_3_Name, item1);
characterList->printCharacters(); //print character list
//------------------------------------test for binary tree-----------------------
Possessions *p1;
Item *newItem;
p1 = new Possessions();
//inserting nodes into the treee
//node 1
newItem = new Item;
strcpy(newItem->m_sItemName,"Chicken");
newItem->m_dValue=1;
newItem->m_dWeight=2;
newItem->m_iType=2;
strcpy(newItem->m_sDesc,"Chicken");
newItem->left = newItem->right = NULL;
    p1->addItem(newItem);

//node 2
newItem = new Item;
strcpy(newItem->m_sItemName,"Silver_Bar");
newItem->m_dValue=1;
newItem->m_dWeight=2;
newItem->m_iType=2;
strcpy(newItem->m_sDesc,"Silver_Bar is shiney");
newItem->left = newItem->right = NULL;
    p1->addItem(newItem);

//node 3
newItem = new Item;
strcpy(newItem->m_sItemName,"Toothpick");
newItem->m_dValue=1;
newItem->m_dWeight=2;
newItem->m_iType=1;
strcpy(newItem->m_sDesc,"gotta use something");
newItem->left = newItem->right = NULL;
    p1->addItem(newItem);

//node 4
newItem = new Item;
strcpy(newItem->m_sItemName,"Gold_Bar");
newItem->m_dValue=1;
newItem->m_dWeight=2;
newItem->m_iType=2;
strcpy(newItem->m_sDesc,"gold is nice");
newItem->left = newItem->right = NULL;
    p1->addItem(newItem);

//node 5
newItem = new Item;
strcpy(newItem->m_sItemName,"Club");
newItem->m_dValue=1;
newItem->m_dWeight=2;
newItem->m_iType=1;
strcpy(newItem->m_sDesc,"blugeoned wepon");
newItem->left = newItem->right = NULL;
    p1->addItem(newItem);

//node 6
newItem = new Item;
strcpy(newItem->m_sItemName,"Diamond");
newItem->m_dValue=1;
newItem->m_dWeight=2;
newItem->m_iType=2;
strcpy(newItem->m_sDesc,"shiney");
newItem->left = newItem->right = NULL;
    p1->addItem(newItem);








// Print the tree
    cout <<"-----------------------------------------------------\n";
    p1->printTree();
    cout <<"Press Enter to continue...";
    cin.get();
    cout <<"-----------------------------------------------------\n";
	////  Find some nodes and print them
	//    cout <<"-----------------------------------------------------\n";
	//    cout <<"Testing the search function\n";
	//    newItem = p1->getItem("Chicken");
	//if(newItem != NULL)
 //   {
 //       p1->printOne(newItem);
 //       delete newItem; // Remember this is a duplicate node of the one in
 //                      // in the tree and main() is responsible for deleting it.
 //   }
 //   else
 //       cout <<"Search key not found.\n";

         //Delete some nodes
    cout <<"-----------------------------------------------------\n";
    cout <<"Testing delete function\n";
    cout <<"-----------------------------------------------------\n";
    cout <<"Testing deleting a Gold_Bar...\n";
    p1->dropItem("Gold_Bar");    // Delete a known leaf
	p1->dropItem("Toothpick");
    p1->printTree();
     cout <<"Press Enter to continue...";
    cin.get();
    cout <<"-----------------------------------------------------\n";

    

system("pause");
return 0;
}// end main



////---------------------------------------------------------------
//// File: TreeMain.cpp
//// Purpose: Main file for a demonstration of a binary tree
//// Programming Language: C
//// Author: Dr. Rick Coleman
//// Date: February, 2002
////---------------------------------------------------------------
//#include <iostream>
//#include <string.h>
//#include "Code202_Tree.h"
//
//using namespace std;
//
//int main(void)
//{
//    Possessions    *theTree;
//    TreeNode        *newNode;
//
//    // Do initialization stuff
//    theTree = new Possessions();
//
//    cout <<"Building tree...\n";
//    // Do simple insert of 15 nodes into tree.
//    // Insert with keys in the order.
//    //   8, 4, 12, 2, 6, 10, 14, 1, 3, 5, 7, 9, 11, 13, 15 
//    // First 5 nodes are inserted using Insert1(). Remainder using Insert2()
//
//    // Node 1
//    newNode = new TreeNode();
//    newNode->Key = 8;
//    newNode->iValue = 2;
//    newNode->fValue = 2.3f;
//    strcpy(newNode->cArray, "Node1");
//    newNode->left = newNode->right = NULL;
//    theTree->Insert(newNode);
//
//    // Node 2
//    // Note: Each time a new node is allocated we reuse the same pointer
//    // Access to the previous node is not lost because it is not in the tree.
//    newNode = new TreeNode();
//    newNode->Key = 4;
//    newNode->iValue = 4;
//    newNode->fValue = 3.4f;
//    strcpy(newNode->cArray, "Node2");
//    newNode->left = newNode->right = NULL;
//    theTree->Insert(newNode);
//
//    // Node 3
//    newNode = new TreeNode();
//    newNode->Key = 12;
//    newNode->iValue = 8;
//    newNode->fValue = 4.5f;
//    strcpy(newNode->cArray, "Node3");
//    newNode->left = newNode->right = NULL;
//    theTree->Insert(newNode);
//
//    // Node 4
//    newNode = new TreeNode();
//    newNode->Key = 2;
//    newNode->iValue = 16;
//    newNode->fValue = 5.6f;
//    strcpy(newNode->cArray, "Node4");
//    newNode->left = newNode->right = NULL;
//    theTree->Insert(newNode);
//
//    // Node 5
//    newNode = new TreeNode();
//    newNode->Key = 6;
//    newNode->iValue = 32;
//    newNode->fValue = 6.7f;
//    strcpy(newNode->cArray, "Node5");
//    newNode->left = newNode->right = NULL;
//    theTree->Insert(newNode);
//
//    // Node 6
//    // Remainder of the nodes are inserted using Insert2()
//    theTree->Insert(10, 7.8f, 64, "Node6");
//
//    // Node 7
//    theTree->Insert(14, 8.9f, 128, "Node7");
//
//    // Node 8
//    theTree->Insert(1, 9.0f, 256, "Node8");
//
//    // Node 9
//    theTree->Insert(3, 0.9f, 512, "Node9");
//
//    // Node 10
//    theTree->Insert(5, 9.8f, 1024, "Node10");
//
//    // Node 11
//    theTree->Insert(7, 8.7f, 2048, "Node11");
//
//    // Node 12
//    theTree->Insert(9, 7.6f, 4096, "Node12");
//
//    // Node 13
//    theTree->Insert(11, 6.5f, 8192, "Node13");
//
//    // Node 14
//    theTree->Insert(13, 5.4f, 16384, "Node14");
//
//    // Node 15
//    theTree->Insert(15, 4.3f, 32768, "Node15");
//
//    cout <<"All nodes inserted\n";
//
//    // Print the tree
//    cout <<"-----------------------------------------------------\n";
//    theTree->PrintTree();
//    cout <<"Press Enter to continue...";
//    cin.get();
//    cout <<"-----------------------------------------------------\n";
//
//    // Find some nodes and print them
//    cout <<"-----------------------------------------------------\n";
//    cout <<"Testing the search function\n";
//    newNode = theTree->SearchTree(13);
//    if(newNode != NULL)
//    {
//        theTree->PrintOne(newNode);
//        delete newNode; // Remember this is a duplicate node of the one in
//                       // in the tree and main() is responsible for deleting it.
//    }
//    else
//        cout <<"Search key not found.\n";
//
//    newNode = theTree->SearchTree(6);
//    if(newNode != NULL)
//    {
//        theTree->PrintOne(newNode);
//        delete newNode;
//    }
//    else
//        cout <<"Search key not found.\n";
//
//    newNode = theTree->SearchTree(1);
//    if(newNode != NULL)
//    {
//        theTree->PrintOne(newNode);
//        delete newNode;
//    }
//    else
//        cout <<"Search key not found.\n";
//
//    newNode = theTree->SearchTree(25); // Note: there is no Key=25 in the tree
//    if(newNode != NULL)
//    {
//        theTree->PrintOne(newNode);
//        delete newNode;
//    }
//    else
//        cout <<"Search key not found.\n";
//
//    // Delete some nodes
//    cout <<"-----------------------------------------------------\n";
//    cout <<"Testing delete function\n";
//    cout <<"-----------------------------------------------------\n";
//    cout <<"Testing deleting a leaf...\n";
//    theTree->Delete(7);    // Delete a known leaf
//    theTree->PrintTree();
//     cout <<"Press Enter to continue...";
//    cin.get();
//    cout <<"-----------------------------------------------------\n";
//
//    cout <<"-----------------------------------------------------\n";
//    cout <<"Testing deleting a node with 2 children...\n";
//    theTree->Delete(12);    // Delete a node known to have 2 children
//    theTree->PrintTree();
//    cout <<"Press Enter to continue...";
//    cin.get();
//    cout <<"-----------------------------------------------------\n";
//
//    cout <<"-----------------------------------------------------\n";
//    cout <<"Testing deleting a node with 1 child...\n";
//    theTree->Delete(6);    // Delete a node known to have only 1 child
//    theTree->PrintTree();
//    cout <<"Press Enter to continue...";
//    cin.get();
//    cout <<"-----------------------------------------------------\n";
//
//    cout <<"-----------------------------------------------------\n";
//    cout <<"Testing trying to delete a node that is not in the tree...\n";
//    theTree->Delete(7);    // Delete a node that is not there
//    theTree->PrintTree();
//    cout <<"Press Enter to continue...";
//    cin.get();
//    cout <<"-----------------------------------------------------\n";
//
//    cout <<"-----------------------------------------------------\n";
//    cout <<"Testing deleting the root...\n";
//    theTree->Delete(8);    // Delete the root
//    theTree->PrintTree();
//    cout <<"Done.\nPress Enter to continue...";
//    cin.get();
//
//    cout <<"-----------------------------------------------------\n";
//    return 0;
//}
