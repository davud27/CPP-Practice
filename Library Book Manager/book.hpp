#ifndef BOOK_HPP
#define BOOK_HPP
#include <string>
class Book
{
private:
    std::string title, author;
    int year;
    bool isAvailable;

public:
    Book();
    Book(std::string title, std::string author, int year, bool isAvailable);
    ~Book();
    void printInfo();
};

#endif