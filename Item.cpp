/*
*Author: Josh Erickson
*Date: 2/23/16
*Description: Source file for Item class to contain set and get methods for the name, price, and quantity information for an item, along with default contructors. 
*/

#include <iostream>
#include "Item.hpp"

using namespace std;

Item::Item()	//Default constructor for Item, sets name to " ", price to 0.0, quantity to 0
{
	setName("");
	setPrice(0.0);
	setQuantity(0);
}
Item::Item(string na, double pr, int qu)	//Constructor for Item, accepts 3 parameters in the order string, double, int for the item name, price, quantity
{
	setName(na);
	setPrice(pr);
	setQuantity(qu);
}
string Item::getName()	//Get method for item name
{
	return name;
}
void Item::setName(string na)	//Set method for item name
{
	name = na;
}
double Item::getPrice()	//Get method for item price
{
	return price;
}
void Item::setPrice(double pr) //Set method for item price
{
	price = pr;
}
int Item::getQuantity()	//Get method for item quantity
{
	return quantity;
}
void Item::setQuantity(int qu)	//Set method for item quantity
{
	quantity = qu;
}