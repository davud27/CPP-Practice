#include <string>
#include <iostream>
#include <book.hpp>

// Defualt constructor
Book::Book() : title(""), author(""), year(0), isAvailable(true) {}

// Parameterized constructor
Book::Book(std::string t, std::string a, int y, bool isAval) : title(t), author(a), year(y), isAvailable(isAval) {}

// Deconstructor
Book::~Book()
{
    std::cout << "The book has been deleted" << std::endl;
}
void Book::printInfo()
{
    std::cout << "Title: " << this->title << std::endl;
    std::cout << "Author: " << this->author << std::endl;
    std::cout << "Year: " << this->year << std::endl;
    std::cout << "Availability: " << this->isAvailable << std::endl;
}
