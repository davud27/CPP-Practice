#include <iostream>
int inventory[3];
bool end = false;

struct Choices
{
    int itemChoice;
    int amountChoice;
};

int pickChoices()
{
    std::cout << "1. View Inventory \n2. Add Items\n3. Remove Items\n4. Exit\n";
    int choice;
    std::cin >> choice;
    return choice;
}
void displayInventory()
{
    std::cout << "Inventory: \n";
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Item " << i << ": " << *(inventory + i) << std::endl;
    }
    std::cout << "\n";
}
void addItems(int itemNumber, int itemAmount)
{
    *(inventory + itemNumber) += itemAmount;
}
void removeItems(int itemNumber, int itemAmount)
{
    *(inventory + itemNumber) -= itemAmount;
}
void updatePlayerChoices(int *amoutPointer, int *itemPointer)
{
    int newItemChoice;
    int newAmountChoice;
    std::cout << "Which item? ";
    std::cin >> newItemChoice;
    std::cout << "\nHow many to add? ";
    std::cin >> newAmountChoice;

    *amoutPointer = newAmountChoice;
    *itemPointer = newItemChoice;
}

int main()
{
    while (!end)
    {
        int playerChoice = pickChoices();
        std::cout << "\nYou chose option: " << playerChoice << "\n"
                  << std::endl;
        switch (playerChoice)
        {
        case 1:
            /* code */
            displayInventory();
            break;
        case 2:
        {
            /* code */
            Choices playerAddChoices;
            int *addItemPointer = &playerAddChoices.itemChoice;
            int *addAmountPointer = &playerAddChoices.amountChoice;

            updatePlayerChoices(addAmountPointer, addItemPointer);
            addItems(playerAddChoices.itemChoice, playerAddChoices.amountChoice);
            break;
        }
        case 3:
        {

            /* code */
            Choices playerRemoveChoices;
            int *removeItemPointer = &playerRemoveChoices.itemChoice;
            int *removeAmountPointer = &playerRemoveChoices.amountChoice;
            updatePlayerChoices(removeAmountPointer, removeItemPointer);
            removeItems(playerRemoveChoices.itemChoice, playerRemoveChoices.amountChoice);
            break;
        }
        case 4:
        {
            /* code */
            end = true;
            break;
        }
        }
    }
}