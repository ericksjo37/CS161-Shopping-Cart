#include <iostream>
#include <string>
#include "Item.hpp"
#include "ShoppingCart.hpp"

using namespace std;

int main()
{
	Item a("affidavit", 179.99, 12);
	Item b("Bildungsroman", 0.7, 20);
	Item c("capybara", 4.5, 6);
	Item d("dirigible", 100.05, 16);
	ShoppingCart sc1;
	sc1.addItem(&a);
	sc1.addItem(&b);
	sc1.addItem(&c);
	sc1.addItem(&d);
	double diff = sc1.totalPrice();
	cout << "First item: " << a.getName() << ", " << a.getPrice() << ", " << a.getQuantity() << endl;
	cout << "Second item: " << b.getName() << ", " << b.getPrice() << ", " << b.getQuantity() << endl;
	cout << "Third item: " << c.getName() << ", " << c.getPrice() << ", " << c.getQuantity() << endl;
	cout << "Fourth item: " << d.getName() << ", " << c.getPrice() << ", " << c.getQuantity() << endl;
	cout << diff << endl;
	return 0;
}