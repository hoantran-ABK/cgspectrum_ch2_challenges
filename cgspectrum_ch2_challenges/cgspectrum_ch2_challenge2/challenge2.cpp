#include <iostream>

double cubed(double i) {
	return std::pow(i, 3);
}

int main() {

	double i;
	std::cout << "Provide a value to be cubed: ";
	std::cin >> i;

	std::cout << cubed(i) << std::endl;

	return 0;
}