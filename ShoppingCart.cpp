/*
*Author: Josh Erickson
*Date: 2/23/16
*Description: Source file for ShoppingCart to define the methods in ShoppingCart class. Contains the definitions for addItem function
* and totalPrice function.
*/

#include <cstdlib>	//Including for NULL definition
#include "ShoppingCart.hpp"

ShoppingCart::ShoppingCart() //ShoppingCart default constructor to initialize arrayEnd to 0 and each item in the array to NULL
{
	arrayEnd = 0;
	for (int count = 0; count < MaxNumItems; count++) //Loops through the array to initialize each item to NULL
		itemArray[count] = NULL;
}
void ShoppingCart::addItem(Item* addedItem)	//Function to take a pointer to an Item and add it to the array, then update arrayEnd
{
	itemArray[arrayEnd] = addedItem;
	arrayEnd++;
}
double ShoppingCart::totalPrice()	//Function to calculate the total cost of all the items in the cart.
{
	double total = 0;	//total cost is initialized to 0
	for (int count = 0; count < arrayEnd; count++)
	{
		total += (itemArray[count]->getPrice() * itemArray[count]->getQuantity()); //Multiplies the price of an item by the quntity of that item for each item in the array
	}
	return total;	//Returns the total price
}