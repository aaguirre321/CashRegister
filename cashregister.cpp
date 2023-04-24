/*
Arely Aguirre
UID: 605505030
Disc: 1C
*/

#include <iostream>

using namespace std;

class CashRegister
{
	public:
		CashRegister();
		void add_items();
		int get_item_count() const;
		int get_total_price() const;
	private:
		double price;
		int penny_price;
		int total_price;
		int item_count;
		int convert_pennies(double dollar_price);

};

CashRegister::CashRegister()
// clears any values in data members before implementing an object
{
	price = 0;
	penny_price = 0;
	total_price = 0;
	item_count = 0;

}

void CashRegister::add_items()
// accesses convert_pennies to add to the total price in pennies
// keeps count of items
{

	while (cin >> price)
	{
		total_price = total_price + convert_pennies(price);
		item_count++;
	}
}

int CashRegister::convert_pennies(double dollar_price)
// converts ammount in dollars and cents to ammount in pennies
{
	penny_price = price * 100;

	return penny_price;
}

int CashRegister::get_item_count() const
{
	return item_count;
}

int CashRegister::get_total_price() const
{
	return total_price;
}


int main()
{
	CashRegister reg1;
	cout << "Enter item prices (Q when done): ";
	reg1.add_items();
	cout << "Total items: " << reg1.get_item_count() << endl;
	cout << "Total price in cents: " << reg1.get_total_price() << endl;
	
	return 0;
}