#include <iostream>
#include <vector>
#include "library.h"

int main() {
  Library library;
  std::string temp;
  std::string end = "end";
  std::cout << "Welcome to the _____ Library!" << std::endl;
  std::cout << "Type 'end' to exit!" << std::endl;

  while(temp != end) {
  	std::cout << "What would you like to do?" << std::endl;
  	std::cout << "[1] Add patron" << std::endl;
  	std::cout << "[2] Check out book" << std::endl;
  	std::cout << "[3] Return book" << std::endl;
    int action;
    std::cin >> action;

    if(action = 1) {
      std::string patron_name;
      std::cout << "What is this patron's name?" << std::endl;
      std::cin >> patron_name;
      library.AddPatron(patron_name);
    } else if(action = 2) {
      std::string patron_name;
      std::string book_name;
      std::cout << "What is the name of the patron this book will be checked out to?" << std::endl;
      std::cin >> patron_name;
      std::cout << "What is the name of the book you would like to check out?" << std::endl;
      std::cin >> book_name;
      Library::Patron patron = library.get_patron(patron_name);
      library.CheckOutBook(patron, book_name);
    }
  }
}