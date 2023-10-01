#include <iostream>

int main(void)
{
	int favorite_number;

	std::cout << "Enter your favorite number bewteeen 1 and 100: ";
	std::cin >> favorite_number;

	std::cout << "Amazing! Thats my favorite number too" << std::endl;
	std::cout << "No really!!!, " << favorite_number <<  " is my favorite number too!" << std::endl;

	return (0);
}
