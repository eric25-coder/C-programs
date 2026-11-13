//STUDENT FEE SECURITY system
//ERIK MUKIRI GITAU
//CT101/G/29069/25



#include<iostream>
#include<string>
using namespace std;


class student

{
    private:
string student_name;
int admission_number;
float fee_balance;

void setStudentName(string s)
{
    student_name = s;
}

void setAdmissionNumber(int n)
{
    admission_number = n;
}

void setFeeBalance(float f)
{
    fee_balance = f;
}


string getStudentName()
{
    return student_name;
}

int getAdmissionNumber()
{
 return admission_number ;
}

float getFeeBalance()
{

 return fee_balance;
}



    public:

void inputStudentData()
{
cout<<"ENTER STUDENT NAME: "<<endl;
cin>>student_name;

cout<<"ENTER ADMISSION NUMBER"<<endl;
cin>>admission_number;

cout<<"ENTER FEE BALANCE"<<endl;
cin>>fee_balance;




}


float makePayment()

{

    double amount_paid;
cout<<"ENTER AMOUNT TO PAY: "<<endl;
cin>>amount_paid;

if (amount_paid>0&&amount_paid<=fee_balance){

float fee_balance=fee_balance-amount_paid;

cout<<"Payment Successfull"<<endl;
}

else
    {cout<<"Invalid amount"<<endl;}


return fee_balance;


}

void displayStatus()

{
cout<<"Student Name: "<<student_name<<endl;
cout<<"Admssion Number: "<<admission_number<<endl;
cout<<"Fee Balance: "<<fee_balance<<endl;



}


};


int main()
{

student pupil;
pupil.inputStudentData();
pupil.makePayment();
pupil.displayStatus();





return 0;





}
