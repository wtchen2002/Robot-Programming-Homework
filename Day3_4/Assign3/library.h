#ifndef DAY3+4_ASSIGN3_LIBRARY_H_
#define DAY3+4_ASSIGN3_LIBRARY_H_
#include <vector>

class Library {
 public:
  class Book {
   public:
    std::string name_;
    bool in_ = true;
    std::vector<int> date_out_; // month, day, year
    std::vector<int> date_due_; // month, day, year
  };

  class Patron {
   public:
    std::vector<Book> books_out_;
    std::string name_;
  };

  std::vector<Book> books_;
  std::vector<Patron> patrons_;

  std::vector<int> GetDate();
  void AddPatron(std::string);
  void CheckOutBook(Patron, std::string);
  Patron get_patron(std::string);
  Book search_for_book(std::string);
  bool check_if_overdue(std::string);
};

#endif
