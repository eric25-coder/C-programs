// ERIK MUKIRI CT101/G/29069/25
#include<iostream>
using namespace std;

void getCustomerDetails(string &customer_name, float &units_consumed, float &rate_per_unit);
float calculateBill(float units_consumed, float rate_per_unit);
float applyDiscount(float water_bill, float units_consumed);
void displayBill(string customer_name, float units_consumed, float water_bill, float discount, float amount_payable);

int main()
{
    string customer_name;
    float units_consumed, water_bill, discount, amount_payable, rate_per_unit;

    getCustomerDetails(customer_name, units_consumed, rate_per_unit);

    water_bill = calculateBill(units_consumed, rate_per_unit);

    discount = applyDiscount(water_bill, units_consumed);

    amount_payable = water_bill - discount;

    displayBill(customer_name, units_consumed, water_bill, discount, amount_payable);

    return 0;
}

void getCustomerDetails(string &customer_name, float &units_consumed, float &rate_per_unit)
{
    cout << "ENTER CUSTOMER NAME: " << endl;
    cin >> customer_name;

    cout << "ENTER NUMBER OF UNITS CONSUMED: " << endl;
    cin >> units_consumed;

    cout << "ENTER RATE PER UNIT: " << endl;
    cin >> rate_per_unit;
}

float calculateBill(float units_consumed, float rate_per_unit)
{
    float water_bill = units_consumed * rate_per_unit;

    return water_bill;
}

float applyDiscount(float water_bill, float units_consumed)
{
    if (units_consumed > 100)
    {
        return water_bill * 0.1;
    }
    else
    {
        return 0;
    }
}

void displayBill(string customer_name, float units_consumed, float water_bill, float discount, float amount_payable)
{
    cout << "\nWATER BILLING SYSTEM" << endl;
    cout << "______________________" << endl;

    cout << "CUSTOMER NAME: " << customer_name << endl;
    cout << "UNITS CONSUMED: " << units_consumed << endl;
    cout << "TOTAL BILL BEFORE DISCOUNT: " << water_bill << endl;
    cout << "DISCOUNT: " << discount << endl;
    cout << "FINAL PAYABLE AMOUNT: " << amount_payable << endl;
}
