#include <iostream>

int main() {
	std::cout << "What is your name?" << std::endl;
	std::string name;
	std::cin >> name;

	std::cout << "What is your age?" << std::endl;
	int age;
	std::cin >> age;

	std::string greeting1 = "How are you?";
	std::string greeting2 = "How is Elementary School?";
	std::string greeting3 = "How is Jr High School?";
	std::string greeting4 = "How is High School?";
	std::string greeting5 = "How are you doing?";

	if (age <= 4) {
		std::cout << "Hello " << name << ". " << greeting1 << std::endl;
	} 
	else if (age <= 11) {
		std::cout << "Hello " << name << ". " << greeting2 << std::endl;
	} 
	else if (age <= 14) {
		std::cout << "Hello " << name << ". " << greeting3 << std::endl;
	} 
	else if (age <= 18) {
		std::cout << "Hello " << name << ". " << greeting4 << std::endl;
	} 
	else {
		std::cout << "Hello " << name << ". " << greeting5 << std::endl;
	}

	return 0;
}