//
// Created by David Garcia on 7/3/25.
//

#include "Book.h"
#include <iostream>
#include <string>
// Defualt constructor
Book::Book() : title(""), author(""), year(0), isAvailable(true) {
}

// Parameterized constructor
Book::Book(std::string t, std::string a, int y) : title(t), author(a), year(y) {
    isAvailable = true;
}

// Deconstructor
Book::~Book() {
    std::cout << "The book has been deleted" << std::endl;
}

void Book::printInfo() const {
    std::string available;
    if (this->isAvailable) {
        available = "Is available";
    } else {
        available = "Not available";
    }


    std::cout << "Title: " << this->title << std::endl;
    std::cout << "Author: " << this->author << std::endl;
    std::cout << "Year: " << this->year << std::endl;
    std::cout << "Availability: " << available << std::endl;
}

void Book::checkoutBook() {
    if (this->isAvailable == true) {
        this->isAvailable = false;
    }
}

void Book::returnBook() {
    if (this->isAvailable == false) {
        this->isAvailable = true;
    }
}

void Book::printBook() {
    std::cout << "Title: " << this->title << "\n" << "by: " << this->author << "\n" << std::endl;
}



