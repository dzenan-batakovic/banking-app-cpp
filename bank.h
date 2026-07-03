#ifndef BANK_H
#define BANK_H

#include <vector>
#include "account.h"

class Bank {
private:
    std::vector<Account> accounts;

public:
    void createAccount(std::string accNum, std::string name, double initialBalance);
    Account* findAccount(std::string accNum);
    void listAllAccounts() const;


};



#endif