#include <iostream>

using namespace std;

int main(void)
{
	int small_rooms {0};
	int large_rooms {0};
	const double price_per_small_room {25.0};
	const double price_per_large_room {35.0};
	const double tax_rate {6};
	double tax {0.0};
	double estimate {0.0};
	double cost {0};

	cout << "Welcome to Frank's Carpet Cleaning Services\n\n";
	cout << "How many small rooms would you like cleaned: ";
	cin >> small_rooms;
	cout << "How many large rooms would you like cleaned: ";
	cin >> large_rooms;

	cout << "Estimate for carpet cleaning service:\n";
	cout << "Number of small rooms: " << small_rooms << endl;
	cout << "Number of large rooms: " << large_rooms << endl;
	cout << "Price per room: $" << price_per_small_room << endl;
	cout << "Price per room: $" << price_per_large_room << endl;

	cost = (price_per_small_room * small_rooms) + (price_per_large_room * large_rooms);
	cout << "Cost: $" << cost << endl;

	tax = cost * (tax_rate / 100);
	cout << "Tax: $" << tax << endl;

	estimate = cost + (cost * (tax_rate / 100));
	cout << "===============================" << endl;
	cout << "Total estimate: $" << estimate << endl;
	cout << "This estiamte is valid for 30 days\n";

	return (0);
}