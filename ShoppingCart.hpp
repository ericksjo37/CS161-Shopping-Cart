/*
*Author: Josh Erickson
*Date: 2/23/16
*Description: Header file for ShoppingCart.cpp to define a ShoppingCart class to keep track of an array of items and
*contains functions to add items to that array and keep track of the total price of all the items contained within the array
*/

#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP
#include "Item.hpp"

class ShoppingCart	//Define Shopping Cart class
{
private:
	static const int MaxNumItems = 100;		//So that Item* can contain up to 100 pointers
	Item* itemArray[MaxNumItems];			//Pointer to an array of items, holding up to 100 pointers
	int arrayEnd;							//End of Array
public:
	ShoppingCart();					//Default Constructor to initialize each element of the array to NULL and arrayEnd to 0
	void addItem(Item *item);		//Function to take a parameter that is a pointer to an Item and add it to the array, then it updates arrayEnd
	double totalPrice();			//Function to calculate the total cost of all the Items in the ShoppingCart
};
#endif
