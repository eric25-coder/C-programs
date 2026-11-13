//ERIK MUKIRI GITAU CT101/G/29069/25

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    string admissionNumber;
    float feeBalance;

public:

    void inputStudent()
    {
        cout << "ENTER STUDENT NAME: ";
        cin>>name;

        cout << "ENTER ADMISSION NUMBER: ";
        cin>>admissionNumber;

        cout << "ENTER FEE BALANCE: ";
        cin >> feeBalance;
    }


    void makePayment()
    {
        float payment;

        cout <<"ENTER AMOUNT TO PAY: ";
        cin >> payment;

        if (payment <= 0)
        {
            cout << "INVALID PAYMENT AMOUNT!." << endl;
        }
        else if (payment > feeBalance)
        {
            cout << "PAYMENT EXCEEDS THE FEE BALANCE!." << endl;
        }
        else
        {
            feeBalance = feeBalance - payment;
            cout << "PAYMENT SUCCESSFUL!" << endl;
        }
    }


    void displayStatus()
    {
        cout << "STUDENT FEES STRUCTURE" << endl;
        cout<<" _______________________"<<endl;

        cout << "Student name: " << name << endl;
        cout << "Admission number: " << admissionNumber << endl;
        cout << "Remaining fee balance: Ksh "
             << feeBalance << endl;
    }
};

int main()
{
    Student student1;


    student1.inputStudent();


    student1.makePayment();

    s
    student1.displayStatus();

    return 0;
}
