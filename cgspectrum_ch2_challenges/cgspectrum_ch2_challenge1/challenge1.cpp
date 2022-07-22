#include <iostream>


double Sum(double x, double y, double z) {
	return x + y + z;
}

double Average(double x, double y, double z) {
	return double(Sum(x, y, z)) / 3.0;
}

int main() {

	double x, y, z;

	std::cout << "Please provide a number (3 left): ";
	//std::cin >> x;
	while (!(std::cin >> x)) {
		std::cout << "Invalid number, try again (3 numbers left): ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "Please provide another number (2 left): ";
	//std::cin >> y;
	while (!(std::cin >> y)) {
		std::cout << "Invalid number, try again (2 numbers left): ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "Please provide a final number (1 left): ";
	//std::cin >> z;
	while (!(std::cin >> z)) {
		std::cout << "Invalid number, try again (1 numbers left): ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "Sum of the 3 numbers: " << Sum(x, y, z) << std::endl;
	std::cout << "Average of the 3 numbers: " << Average(x, y, z) << std::endl;

	return 0;
}