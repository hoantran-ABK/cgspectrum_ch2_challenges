#include <iostream>

int cubed(int i) {
	return std::pow(i, 3);
}

int main() {

	int i;
	std::cout << "Provide a value to be cubed: ";
	std::cin >> i;

	std::cout << cubed(i) << std::endl;

	return 0;
}