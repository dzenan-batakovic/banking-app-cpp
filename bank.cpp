#include "Bank.h"
#include <iostream>

void Bank::createAccount(std::string accNum, std::string name, double initialBalance) {
    if (findAccount(accNum) != nullptr) {
        std::cout << "[SYSTEM]: Account with this account number already exists!\n";
        return;
    }
    Account newAccount(accNum, name, initialBalance);
    accounts.push_back(newAccount);
    std::cout << "[SYSTEM]: Accnount for " << name << " was successfully created!\n";
}


Account* Bank::findAccount(std::string accNum){
    for (size_t i = 0; i < accounts.size(); i++) {
        if (accounts[i].getAccountNumber() == accNum) {
            return &accounts[i];
        }
    }
    return nullptr;
}


void Bank::listAllAccounts() const {
    std::cout << "\n--- LIST OF ALL ACCOUNTS ---\n";
    for (const auto& acc : accounts) { 
        acc.displayInfo();
    }
}