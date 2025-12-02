#include <iostream>
#include "saving_account.h"
#include "chequeing_account.h"

using namespace std;

//Implimented the including file here to run the main program

int main()
{
    SavingsAccount savings(1000.0, 0.05);
    ChequingAccount chequing(500.0, 10.0);

    cout << "--- savings account test ---" << endl;
    cout << "Initial Balance: $" << savings.getBalance() << endl;

    //interest calculation
    double interest = savings.calculateInterest();
    cout << "Interest Earned: $" << interest << endl;

    savings.credit(interest);

    cout << "New Balance After Adding Interest: $"
         << savings.getBalance() << endl
         << endl;

    cout << "--- Chequing Account Test ---" << endl;
    cout << "Initial Balance: $" << chequing.getBalance() << endl;

    cout << "Attempting withdrawal of $100..." << endl;
    if (chequing.debit(100.0))
    {
        cout << "Withdrawal successful (fee charged)." << endl;
    }
    else
    {
        cout << "Withdrawal failed (insufficient funds)." << endl;
    }

    cout << "Balance After Withdrawal + Fee: $"
         << chequing.getBalance() << endl;

    return 0;
}
