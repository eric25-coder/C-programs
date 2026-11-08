//CT101/G/29069/25
//ERIK MUKIRI GITAU
#include<iostream>
#include<string>
using namespace std;

class Employee
 {
private :
    string employee_name;
    int employee_id;
    float basic_salary;


public:
    void EmployeeDetails()
    {

    cout<<"Enter Employee Name: "<<endl;
    cin>>employee_name;

    cout<<"Enter Employee ID: "<<endl;
    cin>>employee_id;

    cout<<"Enter Basic Salary: "<<endl;
    cin>>basic_salary;



    }

double CalculateSalary()
{

double net_salary= basic_salary+0.10*basic_salary;

return net_salary;

}



void displayEmployeeDetails()

{
cout<<"EMPLOYEE DETAILS"<<endl;
cout<<"_________________"<<endl;

cout<<"Employee Name: "<<employee_name<<endl;
cout<<"Employee ID :"<<employee_id<<endl;
cout<<"Basic Salary: "<<basic_salary<<endl;
cout<<"Net Salary: "<<CalculateSalary()<<endl;




}

};





int main()
{

Employee worker;
worker.EmployeeDetails();
worker.displayEmployeeDetails() ;


return 0;


}
