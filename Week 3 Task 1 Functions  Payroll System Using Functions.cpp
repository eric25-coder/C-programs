//ERIK MUKIRI GITAU
//CT101/G/29069/25

#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void getEmployeeDetails(string &employee_name, float &basic_salary,
                        float &overtime_hours, float &rate_per_hour);

float calculateOvertimePay(float overtime_hours, float rate_per_hour);

float calculateNetSalary(float basic_salary, float overtime_pay);

void displayPayslip(string employee_name, float basic_salary,
                    float overtime_hours, float overtime_pay,
                    float net_salary);


int main()
{
    // Variables
    string employee_name;
    float basic_salary;
    float overtime_hours;
    float rate_per_hour;
    float overtime_pay;
    float net_salary;


    getEmployeeDetails(employee_name, basic_salary,
                       overtime_hours, rate_per_hour);


    overtime_pay = calculateOvertimePay(overtime_hours, rate_per_hour);


    net_salary = calculateNetSalary(basic_salary, overtime_pay);


    displayPayslip(employee_name, basic_salary,
                   overtime_hours, overtime_pay, net_salary);

    return 0;
}



void getEmployeeDetails(string &employee_name, float &basic_salary,
                        float &overtime_hours, float &rate_per_hour)
{
    cout << "ENTER EMPLOYEE'S NAME: ";
    cin >> employee_name;

    cout << "ENTER BASIC SALARY: ";
    cin >> basic_salary;

    cout << "ENTER OVERTIME HOURS: ";
    cin >> overtime_hours;

    cout << "ENTER RATE PER OVERTIME HOUR: ";
    cin >> rate_per_hour;
}



float calculateOvertimePay(float overtime_hours, float rate_per_hour)
{
    float overtime_pay;

    overtime_pay = overtime_hours * rate_per_hour;

    return overtime_pay;
}



float calculateNetSalary(float basic_salary, float overtime_pay)
{
    float net_salary;

    net_salary = basic_salary + overtime_pay;

    return net_salary;
}



void displayPayslip(string employee_name, float basic_salary,
                    float overtime_hours, float overtime_pay,
                    float net_salary)
{


    cout << "       EMPLOYEE PAYSLIP       " << endl;
    cout << "==============================" << endl;

    cout << "EMPLOYEE'S NAME: " << employee_name << endl;
    cout << "BASIC SALARY: " << basic_salary << endl;
    cout << "OVERTIME HOURS: " << overtime_hours << endl;
    cout << "OVERTIME PAY: " << overtime_pay << endl;
    cout << "NET SALARY: " << net_salary << endl;

    cout << "==============================" << endl;
}
