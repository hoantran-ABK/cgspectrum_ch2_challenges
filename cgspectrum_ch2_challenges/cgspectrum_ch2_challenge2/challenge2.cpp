#include <iostream>

using namespace std;

double cubed(double i)
{
	return pow(i, 3);
}

int main()
{

	double i;

	while (true)
	{
		cout << "Provide a value to be cubed: ";
		
		if (cin >> i)
		{
			break;
		}
		cout << "Invalid number, try again...\n";
		cin.clear();

		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	}
	cout << cubed(i) << endl;

	return 0;
}