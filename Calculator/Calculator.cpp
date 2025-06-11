#include <iostream>
using namespace std;

int calc(int x, int y, int choice){
    //if choice is 0 then add
    //if choice is 1 then subtract
    // 2 is multiple
    // 3 is divide
    int answer = 0;
    switch (choice)
    {
    case 0:
        answer = x + y;
        break;
    case 1:
        answer = x - y;
        break;
    case 2:
        answer = x * y;
        break;
    case 3: 
        answer = x / y;
        break;
    }



    return answer;
}

int main(){
    int choice, num1, num2;
    //Asking what type of operation the user would like to do
    std::cout << "What type of operation would you like to do" << std::endl;
    std::cout << "0. Add" << std::endl;
    std::cout << "1. Subtract" << std::endl;
    std::cout << "2. Multiply" << std::endl;
    std::cout << "3. Divide" << std::endl;

    std::cin >> choice;

    std::cout << "Enter first number" << std::endl;
    std::cin >> num1;

    std::cout << "Enter second number" << std::endl;
    std::cin >> num2;

    int answer = calc(num1,num2,choice);
    
    std::cout << "Your Answer is: " << answer << std::endl;
    return 0;
}