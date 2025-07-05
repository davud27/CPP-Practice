#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string inputtedFood;
    std::cout << "What did you eat today: " << std::endl;
    std::cin >> inputtedFood;

    //Writing to the file
    std::ofstream file("example.txt");

    if (!file) {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    file << inputtedFood;
    file.close();
    std::cout << "Data written to file." << std::endl;

    std::cout << "\nStarting to read from file." << std::endl;
    std::ifstream readFile("example.txt");
    std::string outputtedString;
    readFile >> outputtedString;
    std::cout << "File says: " << outputtedString << std::endl;






    return 0;
}