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
	std::cin >> x;
	std::cout << "Please provide a number (2 left): ";
	std::cin >> y;
	std::cout << "Please provide a number (1 left): ";
	std::cin >> z;

	std::cout << "Sum of the 3 numbers: " << Sum(x, y, z) << std::endl;
	std::cout << "Average of the 3 numbers: " << Average(x, y, z) << std::endl;

	return 0;
}