#include <iostream>

using namespace std;

double Sum(double x, double y, double z)
{
	return x + y + z;
}

double Average(double x, double y, double z)
{
	return double(Sum(x, y, z)) / 3.0;
}

int main()
{

	double x, y, z;

	cout << "Please provide a number (3 left): ";
	//cin >> x;
	while (!(cin >> x))
	{
		cout << "Invalid number, try again (3 numbers left): ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	cout << "Please provide another number (2 left): ";
	//cin >> y;
	while (!(cin >> y))
	{
		cout << "Invalid number, try again (2 numbers left): ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	cout << "Please provide a final number (1 left): ";
	//cin >> z;
	while (!(cin >> z))
	{
		cout << "Invalid number, try again (1 numbers left): ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	cout << "Sum of the 3 numbers: " << Sum(x, y, z) << endl;
	cout << "Average of the 3 numbers: " << Average(x, y, z) << endl;

	return 0;
}