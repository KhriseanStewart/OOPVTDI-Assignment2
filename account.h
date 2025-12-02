#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
protected:
    double balance;

public:
    Account(double initialBalance)
    {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    //deposit function
    void credit(double amount)
    {
        balance += amount;
    }

    // withdraw
    bool debit(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            return true;
        }
        return false;
    }

    double getBalance() const
    {
        return balance;
    }
};

#endif
