#include <iostream>
int balance = 0;

void checkBalence()
{
    std::cout << "Your current balence is: " << balance << std::endl;
}
void depositCash(int amount)
{
    balance = +amount;
    std::cout << "You have deposited " << amount << " Dollars" << std::endl;
}
void withdrawCash(int amount)
{
    balance = -amount;
    std::cout << "You have withdrew " << amount << " Dollars" << std::endl;
}

int main()
{
    int chosenAmount;
    int choice;
    while (choice != 4)
    {
        std::cout << "Would you like to \n1. Check Balence\n2. Deposit Money\n3. Withdraw Money\n4. End Program\n";
        std::cin >> choice;
        
        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            checkBalence();
            break;
        case 2:
            std::cin >> chosenAmount;
            depositCash(chosenAmount);
            break;
        case 3:
            std::cin >> chosenAmount;
            withdrawCash(chosenAmount);
            break;
        default:
            std::cout << "Invalid Choice\n";
        }
    }
    return 0;
}
