#include <iostream>
#include "calculate.h"

int main() {
	std::cout << "Put in a number" << std::endl;
	int number;
	std::cin >> number;

	std::cout << calculate(number) << std::endl;
}