#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector <int> vector_1;
	vector <int> vector_2;

	// adding elements to vector_1
	vector_1.push_back(10);
	vector_1.push_back(20);

	// display elements of vector_1
	cout << "Elements at index 0: " << vector_1.at(0) << endl;
	cout << "Elements at index 1: " << vector_1.at(1) << endl;
	cout << "Size of vector_1: " << vector_1.size() << endl;

	cout << "============================\n";

	// adding elements to vector_2
	vector_2.push_back(100);
	vector_2.push_back(200);

	// display elements of vector_1
	cout << "Elements at index 0: " << vector_2.at(0) << endl;
	cout << "Elements at index 1: " << vector_2.at(1) << endl;
	cout << "Size of vector_2: " << vector_2.size() << endl;

	cout << "============================\n";

	// declaring a 2D vector
	vector <vector <int>> vector_2d;

	// adding vector_1 and vector_2 to vector_2d
	vector_2d.push_back(vector_1);
	vector_2d.push_back(vector_2);

	// display elements of vector_2d
	cout << "Element at index 0-0: " << vector_2d.at(0).at(0) << endl;
	cout << "Element at index 0-1: " << vector_2d.at(0).at(1) << endl;
	cout << "Element at index 1-0: " << vector_2d.at(1).at(0) << endl;
	cout << "Element at index 1-1: " << vector_2d.at(1).at(1) << endl;

	cout << "============================\n";

	// changing element at index 0 of vector_1
	vector_1.at(0) = 1000;

	// displaying elements of vector_2d again
	cout << "Element at index 0-0: " << vector_2d.at(0).at(0) << endl;
	cout << "Element at index 0-1: " << vector_2d.at(0).at(1) << endl;
	cout << "Element at index 1-0: " << vector_2d.at(1).at(0) << endl;
	cout << "Element at index 1-1: " << vector_2d.at(1).at(1) << endl;

	cout << "============================\n";

	// displaying elements of vector_1 again
	cout << "Elements at index 0: " << vector_1.at(0) << endl;
	cout << "Elements at index 1: " << vector_1.at(1) << endl;

	return (0);
}