#include <iostream>
#include <vector>
#include "library.h"

void Library::AddPatron(std::string name) {
  Patron test;
  Patron.name_ = name
  patrons_.push_back(test)
}

std::vector<int> Library::GetDate() {
  std::vector<int> date;
  int month = 0;
  int day = 0;
  int year = 0;
  std::cout << "Please enter the current month" << std::end1;
  std::cin >> month;
  vector.push_back(month);
  std::cout << "Please enter the current day" << std::end1;
  std::cin >> day;
  vector.push_back(day);
  std::cout << "Please enter the current year" << std::end1;
  std::cin >> year;
  vector.push_back(year);
  return date;
}

void Library::CheckOutBook(Patron patron, std::string book_name) {
  bool book_exists = false;
  for(Book i:books_){
    if(i.name_ == book_name){
      book_exists = true; 
    }
  }
  
  if(book_exists) && (i.in_){
    i.in_ = false;
    
  }
}