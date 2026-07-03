#include <iostream>
#include "bank.h"

int main() {
    Bank myBank;
    int choice;
    std::string accNum, name;
    double amount;

    myBank.createAccount("SI56-111", "Luka", 500.0);
    myBank.createAccount("SI56-293", "Stjepan", 5737.63);


    while (true) {
        std::cout << "\n=== BANKING SYSTEM ===\n";
        std::cout << "1. Create a new account\n";
        std::cout << "2. Deposit funds\n";
        std::cout << "3. Withdraw funds\n";
        std::cout << "4. Show all accounts\n";
        std::cout << "5. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;


        switch (choice)
        {
        case 1:
            std::cout << "[SYSTEM] - Enter account number: "; std::cin >> accNum;
            std::cout << "[SYSTEM] - Enter owners name: "; std::cin >> name;
            std::cout << "[SYSTEM] - First deposit: "; std::cin >> amount;
            break;

        case 2: {
            std::cout << "[SYSTEM] - Enter your account number: "; std::cin >> accNum;
        Account* acc = myBank.findAccount(accNum);
        if (acc) {
            std::cout << "[SYSTEM] - Deposit amount: "; std::cin >> amount;
            acc->deposit(amount);
        }
        else {
            std::cout << "[SYSTEM] - Account was not found!\n";
        }
        break;
        }
        

        case 3: {
            std::cout << "[SYSTEM] - Enter account number: "; std::cin >> accNum;
        Account* acc = myBank.findAccount(accNum);
        if (acc) {
            std::cout << "[SYSTEM] - Enter withdrawl amount: "; std::cin >> amount;
            acc->withdraw(amount);
        }
        else {
            std::cout << "[SYSTEM] - Account was not found!\n";
        }
        break;
        }
        

        case 4:
        myBank.listAllAccounts();
        break;

        case 5:
        return 0;

        default:
            std::cout << "[SYSTEM] - Invalid choice!\n";
        }
    }
}