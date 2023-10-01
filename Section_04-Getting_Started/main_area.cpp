#include <iostream>
using namespace std;

// calculates the area of a room

int main(void)
{
	int room_width {0}, room_height {0}, room_area {0};

	cout << "Enter the width of the room ";
	cin >> room_width;

	cout << "Enter the height of the room ";
	cin >> room_height;

	room_area = room_width * room_height;
	cout << "The area of the room is " << room_area << endl;

	short int value1 {30000}, value2 {1000};
	// short int product = value1 * value2; this will lead to an overflow
	int product {value1 * value2}; // list declaration is prefered to highlight errors at compile-time

	cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;

	return(0);
}