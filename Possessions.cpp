//---------------------------------------------------------------------------- 
//  Possessions.cpp 
//  Maxwell Twente 
//  Programming Assignment 2
//  This program is entirely my own work 
//---------------------------------------------------------------------------- 
//#include "Character.h"
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include "Possessions.h"
using namespace std;

Possessions::Possessions()
{
	root = NULL;

}
Possessions::~Possessions()
{
//destroyTree(Item *rt);// is this necissary?
}



bool Possessions::addItem(Item *newItem)
{
	Item *temp=root;
	Item *back=NULL;

	//temp= root;
	//back= NULL;
	while(temp != NULL)// loop till temp fallls out of the tree
	{
		  back = temp;
        if((strcmp(newItem->m_sItemName, temp->m_sItemName)<0))
            temp = temp->left;
        else
            temp = temp->right;
	}
 // Now attach the new node to the node that back points to 
    if(back == NULL) // Attach as root node in a new tree 
        root = newItem;
    else
    {
        if((strcmp(newItem->m_sItemName, back->m_sItemName)<0))
            back->left = newItem;
        else
            back->right = newItem;
    }
   return true;
}


Item *Possessions::dropItem(char *itemName)
{
   Item *back;
   Item *temp;
   Item *delParent;    // Parent of node to delete
   Item *delNode;      // Node to delete

    temp = root;
    back = NULL;

    // Find the node to delete 
    while((temp != NULL) && (strcmp(itemName, temp->m_sItemName) != 0))
    {
        back = temp;
        if(strcmp(itemName, temp->m_sItemName)<0)
            temp = temp->left;
        else
            temp = temp->right;
    }

    if(temp == NULL) // Didn't find the one to delete 
    {
        cout << "Key not found. Nothing deleted.\n";
        return false;
    }
    else
    {
        if(temp == root) // Deleting the root 
        {
            delNode = root;
            delParent = NULL; 
        }                
        else
        {
            delNode = temp;
            delParent = back;
        }
    }

    // Case 1: Deleting node with no children or one child 
    if(delNode->right == NULL)
    {
        if(delParent == NULL)    // If deleting the root    
        {
            root = delNode->left;
			return delNode;     
        }
        else
        {
            if(delParent->left == delNode)
                delParent->left = delNode->left;
            else
                delParent->right = delNode->left;
			return delNode;
        }
    }
    else // There is at least one child 
    {
        if(delNode->left == NULL)    // Only 1 child and it is on the right
        {
            if(delParent == NULL)    // If deleting the root    
            {
                root = delNode->right;
                return delNode;
              
            }
            else
            {
                if(delParent->left == delNode)
                    delParent->left = delNode->right;
                else
                    delParent->right = delNode->right;
                delete delNode;//return delnode
               
            }
        }
        else // Case 2: Deleting node with two children 
        {
            // Find the replacement value.  Locate the node  
            // containing the largest value smaller than the 
            // key of the node being deleted.                
            temp = delNode->left;
            back = delNode;
            while(temp->right != NULL)
            {
                back = temp;
                temp = temp->right;
            }
         // Copy the replacement values into the node to be deleted 
				Item *duplicate = new Item;
				*duplicate = *delNode;
				duplicate->left=duplicate->right=NULL;
			strcpy(delNode->m_sItemName,temp->m_sItemName); // key? // is this sring compare?
            delNode->m_dValue = temp->m_dValue; //fValue?
            delNode->m_dWeight = temp->m_dWeight; //iValue?m_iType??
            delNode->m_iType = temp->m_iType;
			strcpy(delNode->m_sDesc, temp->m_sDesc);
        // Remove the replacement node from the tree 
            if(back == delNode)
                back->left = temp->left;
            else
                back->right = temp->left;
            return duplicate;

        }
    }
}
Item *Possessions::getItem(char *itemName)
{
int ValueInTree = false;

    Item *temp;
	temp = root;
    while((temp != NULL) && (strcmp(itemName, temp->m_sItemName) != 0))
    {
        if((strcmp(itemName, temp->m_sItemName)<0))
            temp = temp->left;  // Search key comes before this node.
        else
            temp = temp->right; // Search key comes after this node 
    }
   
        return(temp);    // Found it so return a duplicate
}
void Possessions::printTree()
{
	// Prints all possessions of a character.  
	printAll(root);

}

void Possessions::printAll(Item *rt)
{
	if(rt != NULL)
    {
       printAll(rt->left); 
       printOne(rt);
       printAll(rt->right);
    }
}

void Possessions::printOne(Item *item)
{
	cout << "---------------------------------"<< endl;
	cout << "Item Name: " << item->m_sItemName << endl;
	cout << "Item Description: " << item->m_sDesc << endl;		
	cout << "Item Weight: " << item->m_dWeight << endl;
	cout << "Item Type: " << item->m_iType << endl;
	cout << "Item Value: " << item->m_dValue << endl;
	cout << "---------------------------------"<< endl;
}
void Possessions::destroyTree(Item *rt)
{
	if(rt==NULL) return;  // Nothing to clear
    if(rt->left != NULL) destroyTree(rt->left); // Clear left sub-tree
    if(rt->right != NULL) destroyTree(rt->right); // Clear right sub-tree
    delete rt;    // Destroy this node
    
}
