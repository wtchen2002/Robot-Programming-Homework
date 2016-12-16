#ifndef DAY3+4_ASSIGN3_LIBRARY_H_
#define DAY3+4_ASSIGN3_LIBRARY_H_
#include <vector>

class Library {
 public:
  class Book {
   public:
    void SetIn(bool);
    void SetDate(std::vector<int>);
    bool in_;
    std::vector<int> date_out_; // month, day, year
    std::vector<int> date_due_; // month, day, year
  };

  class Patron {
   public:
    std::vector<Book> book_out_;
    std::string name_;
  };

  std::vector<Patron> patrons_;

  void AddPatron(std::string);
  void CheckOutBook(Patron, Book);
  Book search_for_book(std::string);
  bool check_if_overdue(Book);
};

#endif
