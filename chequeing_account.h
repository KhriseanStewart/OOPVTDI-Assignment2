#ifndef CHEQUINGACCOUNT_H
#define CHEQUINGACCOUNT_H

#include "account.h"

class ChequingAccount : public Account {
private:
    double transactionFee;

public:
    ChequingAccount(double initialBalance, double fee)
        : Account(initialBalance) {
        transactionFee = fee;
    }

    bool debit(double amount) {
        if (Account::debit(amount)) {
            balance -= transactionFee;
            return true;
        }
        return false;
    }
};

#endif
