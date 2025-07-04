//
// Created by David Garcia on 7/3/25.
//

#ifndef BOOK_H
#define BOOK_H
#include <string>


class Book {
    std::string title, author;
    int year;

public:
    bool isAvailable;

    Book();

    Book(std::string t, std::string a, int y);


    ~Book();

    void printInfo() const;

    void returnBook();

    void checkoutBook();

    void printBook();
};


#endif //BOOK_H
