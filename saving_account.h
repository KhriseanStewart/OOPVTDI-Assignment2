#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "account.h"

class SavingsAccount : public Account
{
private:
    double interestRate;

public:
    SavingsAccount(double initialBalance, double rate)
        : Account(initialBalance)
    {
        interestRate = rate;
    }

    double calculateInterest() const
    {
        return balance * interestRate;
    }
};

#endif
