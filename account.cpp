#include "account.h"
#include <iostream>

Account::Account(std::string accNum, std::string name, double initialBalance) {
    accountNumber = accNum;
    holderName = name;
    balance = initialBalance;
}

void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "[SYSTEM]: Succsessful deposit of: " << amount << " EUR\n";
    }
}

bool Account::withdraw(double amount) {
    if (amount > balance) {
        std::cout << "[SYSTEM]: Error, insufficient funds!";
        return false;
    }
    if (amount <= 0) return false;


    balance -= amount;
    std::cout << "[SYSTEM]: Successful withdraw: " << amount << " EUR\n";
    return true;
}

void Account::displayInfo() const {
    std::cout << "Account num: " << accountNumber
              << " | Owner: " << holderName
              << " | Balance: " << balance << " EUR\n";
}


std::string Account::getAccountNumber() const { return accountNumber; }
double Account::getBalance() const { return balance; }