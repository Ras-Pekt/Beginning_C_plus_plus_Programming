#include <iostream>

using namespace std;

int main(void)
{
	int no_of_rooms;
	const double price_per_room {32.5};
	const double tax_rate {6};
	double tax {0.0};
	double estimate {0.0};
	double cost {0};

	cout << "Enter the number of rooms to be cleaned: ";
	cin >> no_of_rooms;

	cout << "Estimate for carpet cleaning service:\n";
	cout << "Number of rooms: " << no_of_rooms << endl;
	cout << "Price per room: $" << price_per_room << endl;

	cost = price_per_room * no_of_rooms;
	cout << "Cost: $" << cost << endl;

	tax = cost * (tax_rate / 100);
	cout << "Tax: $" << tax << endl;

	estimate = cost + (cost * (tax_rate / 100));
	cout << "===============================" << endl;
	cout << "Total estimate: $" << estimate << endl;
	cout << "This estiamte is valid for 30 days\n";

	return (0);
}