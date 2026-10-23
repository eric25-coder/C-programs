//ERIK MUKIRI GITAU
// CT101/G/29069/25
//Bank account system


#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string account_holder_name;
    int account_number;
    double account_balance;

public:

    BankAccount(string name, int number, double balance) {
        account_holder_name = name;
        account_number = number;
        account_balance = balance;

        cout <<"Account successfully created\n" <<endl;
    }


    void displayAccount() {
        cout<<"Bank Account Details" <<endl;
        cout<<"________________________\n"<<endl ;
        cout << "Account Holder: " << account_holder_name <<endl;
        cout<< "Account Number: " << account_number <<endl;
        cout<< "Account Balance: Ksh" << account_balance <<endl;
    }


    ~BankAccount() {
        cout<<"\n Account closed successfully"<<endl;
    }
};

int main() {

    BankAccount account("Erik Mukiri", 43893, 5000.00);


    account.displayAccount();

    return 0;
}
