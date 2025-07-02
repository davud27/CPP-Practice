#include <iostream>
#include <Book.hpp>
#include <memory>
int main(){
    std::unique_ptr<Book> Book1 = std::make_unique<Book>();
    Book1->printInfo();






    return 0;
}
