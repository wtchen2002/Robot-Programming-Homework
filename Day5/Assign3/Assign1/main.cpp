#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int count = 0;

	std::cout << "How many numbers would you like to enter?" << std::endl;
	std::cin >> count;

	std::vector<int> numberlist;

	for (int i = 1; i <= count; i++) {
		int inputnumber = 0;
		std::cout << "Enter the " << i << " number" << std::endl;
		std::cin >> inputnumber;
		numberlist.push_back(inputnumber);
	}

	std::sort(numberlist.begin(), numberlist.end());

	for (int i = 0; i < count; i++) {
    	std::cout << numberlist[i] << " ";
  	}

  	std:: cout << "" << std::endl;

	return 0;
}