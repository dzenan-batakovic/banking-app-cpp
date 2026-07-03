#ifndef ACCOUNT_H
#define ACCOUNT_H


#include <string>

class Account {
private:
std::string accountNumber;
std::string holderName;
double balance;

public:

// Konstruktor
Account(std::string accNum, std::string name, double initialBalance);

// Funkcije
void deposit(double amount);
bool withdraw(double amount);
void displayInfo() const;

// Get
std::string getAccountNumber() const;
double getBalance() const;


};


#endif