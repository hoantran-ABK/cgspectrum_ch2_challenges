#include <iostream>

double cubed(double i) {
	return std::pow(i, 3);
}

int main() {

	double i;

	while (true) {
		std::cout << "Provide a value to be cubed: ";
		
		if (std::cin >> i) {
			break;
		}
		std::cout << "Invalid number, try again...\n";
		std::cin.clear();

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	}
	std::cout << cubed(i) << std::endl;

	return 0;
}