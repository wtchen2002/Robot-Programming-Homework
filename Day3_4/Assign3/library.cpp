#include <iostream>
#include <vector>
#include "library.h"

void Library::AddPatron(std::string name) {
  bool patron_exists = false;
  for(Patron i:patrons_) {
    if(i.name_ == name) {
      patron_exists = true;
      std::cout << "This patron already exists!" << std::endl;
    } else {
       Patron test;
       test.name_ = name;
       patrons_.push_back(test);
    }
  }
}

std::vector<int> Library::GetDate() {
  std::vector<int> date;
  int month = 0;
  int day = 0;
  int year = 0;
  std::cout << "Please enter the current month" << std::endl;
  std::cin >> month;
  date.push_back(month);
  std::cout << "Please enter the current day" << std::endl;
  std::cin >> day;
  date.push_back(day);
  std::cout << "Please enter the current year" << std::endl;
  std::cin >> year;
  date.push_back(year);
  return date;
}

Library::Book Library::search_for_book(std::string book_name) {
  bool book_exists = false;
  for(Book i:books_) {
    if(i.name_ == book_name) {
      book_exists = true;
      return i;
    }

    if(!(book_exists)) {
      Book book;
      book.name_ = book_name;
      return book;
    }
  }
}

void Library::CheckOutBook(Patron patron, std::string book_name) {
  bool book_exists = false;
  for(Book i:books_) {
    if(i.name_ == book_name) {
      book_exists = true; 
    }

    if((book_exists) && (i.in_)) {
      i.in_ = false;
      i.date_out_ = Library::GetDate();
      std::vector<int> temp;

      if(temp [0] < 12) {
        temp[0] = temp[0] + 1;
      } else if(temp [0] >= 12) {
        temp[0] = 1;
      }

      i.date_due_ = temp;
      patron.books_out_.push_back(i);
    } else if((book_exists) && !(i.in_)) {
      std::cout << "Sorry, this book is currently checked out" << std::endl;
    }

    if(!(book_exists)) {
      Book book;
      book.name_ = book_name;
      book.in_ = false;
      book.date_out_ = Library::GetDate();
      std::vector<int> temp;

      if(temp[0] < 12) {
        temp[0] = temp[0] + 1;
      } else if(temp [0] >= 12) {
        temp[0] = 1;
      }

      book.date_due_ = temp;
      books_.push_back(book);
      patron.books_out_.push_back(book);
    }
  }
}

 bool Library::check_if_overdue(std::string book_name) {
  bool book_exists = false;
  for(Book i:books_) {
    if(i.name_ == book_name) {
      book_exists = true;
      std::vector<int> date = Library::GetDate();
      if(!(i.date_due_[1] > date[1])) {
        if(!(i.date_due_[0] > date[0])) {
          if(!(i.date_due_[2] > date[2])) {
            return false;
          }
        }
      }
    }
  }
  return true;
}

Library::Patron Library::get_patron(std::string name) {
  bool patron_exists = false;
  for(Patron i:patrons_) {
    if(i.name_ == name) {
      patron_exists = true;
      return i;
    } else {
       std::cout << "This patron does not exist!" << std::endl;
    }
  }
}