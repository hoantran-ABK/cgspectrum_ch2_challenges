#include <iostream>


int Sum(int x, int y, int z) {
	return x + y + z;
}

double Average(int x, int y, int z) {
	return double(Sum(x, y, z)) / 3.0;
}

int main() {

	int x, y, z;

	std::cout << "Provide 3 integer values: \n";
	std::cin >> x;
	std::cin >> y;
	std::cin >> z;

	std::cout << "Sum of the 3 numbers: " << Sum(x, y, z) << std::endl;
	std::cout << "Average of the 3 numbers: " << Average(x, y, z) << std::endl;

	return 0;
}