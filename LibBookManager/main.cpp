#include <iostream>
#include "Book.h"
#include <memory>
#include <vector>

std::vector<std::unique_ptr<Book> > bookLibrary;
bool end = false;


int choices() {
    int returnedChoice;
    std::cout <<
            "\nPlease choose one of the 5 options: \n1. Add a Book\n2. List all books\n3. Check out a book\n4. Return a Book\n5. Exit Program\n";
    std::cin >> returnedChoice;
    return returnedChoice;
}

std::unique_ptr<Book> createBook() {
    using namespace std;
    cout << "\n" << "What is the Tile of the book: " << std::endl;
    string tempBookTitle;
    cin >> tempBookTitle;
    cout << "\n" << "Who is the author of the book: " << std::endl;
    string tempBookAuthor;
    cin >> tempBookAuthor;
    cout << "\n" << "What year was the book made: " << std::endl;
    int tempBookYear;
    cin >> tempBookYear;
    return (std::make_unique<Book>(tempBookTitle, tempBookAuthor, tempBookYear));
}

void showBooks(bool isCheckOut) {
    if (isCheckOut) {
        std::cout << "Which Book would you like to check out \n" << std::endl;
        for (int i = 0; i < bookLibrary.size(); i++) {
            if (bookLibrary[i]->isAvailable) {
                std::cout << "Book: " << i << std::endl;
                bookLibrary[i]->printBook();
                //To Do, choose a book and do the action
            }
        }
    } else {
        std::cout << "Which Book would you like to return \n" << std::endl;
        for (int i = 0; i < bookLibrary.size(); i++) {
            if (!bookLibrary[i]->isAvailable) {
                std::cout << "Book: " << i << std::endl;
                bookLibrary[i]->printBook();
                //To Do, choose a book and do the action
            }
        }
    }
}

int main() {
    //std::unique_ptr<Book> Book1 = std::make_unique<Book>("Harry Potter", "that one lady", 2000);
    while (!end) {
        switch (choices()) {
            default:
                end = true;
                break;
            case 1:
                bookLibrary.push_back(createBook());
                break;
            case 2:
                for (int i = 0; i < bookLibrary.size(); i++) {
                    std::cout << "\n" << "Book " << i + 1 << ": " << std::endl;
                    bookLibrary[i]->printInfo();
                }
            case 3:
                showBooks(true);

            case 4:
                showBooks(false);
        }
    }
    return 0;
}
