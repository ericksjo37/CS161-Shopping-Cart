/*
*Author: Josh Erickson
*Date: 2/23/16
*Description: Header file for Item.cpp to receive the name, price, and quantity information for an item.
*/

#include <string>

using namespace std;

#ifndef ITEM_HPP
#define ITEM_HPP
class Item   //Item class to contain name, price, and quantitiy info.
{
private:
	string name;  //Name of item
	double price; //Price of item
	int quantity; //Number of items
public:
	Item();								//Default contructor
	Item(string, double, int);			//Constructor to take the name, price, and quantitiy info.
	string getName();					//Get method for name
	void setName(string na);			//Set method for name
	double getPrice();					//Get method for price
	void setPrice(double pr);			//Set method for price
	int getQuantity();					//Get method for quantity
	void setQuantity(int qu);			//Set method for quantity
};
#endif