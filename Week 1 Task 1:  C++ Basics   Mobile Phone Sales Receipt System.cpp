#include<iostream>
using namespace std;
int main (){
 string customer_name;
 string phone_model;
 int quantity_bought;
 int price_per_phone;
 int sales_amount;


cout<<"ENTER CUSTOMER NAME: "<<endl;
cin>>customer_name;

cout<<"ENTER PHONE MODEL: "<<endl;
cin>>phone_model;

cout<<"ENTER QUANTITY BOUGHT: "<<endl;
cin>>quantity_bought;

cout<<"ENTER PRICE PER PHONE: "<<endl;
cin>>price_per_phone;












 sales_amount= quantity_bought * price_per_phone;


 cout<<"CUSTOMER RECEIPT"<<endl;
 cout<<"________________"<<endl;



 cout<<"CUSTOMER NAME: "<<customer_name<<endl;
 cout<<"PHONE MODEL PURCHASED: "<<phone_model<<endl;
 cout<<"QUANTITY BOUGHT: "<<quantity_bought<<endl;
 cout<<"PRICE PER PHONE: "<<price_per_phone<<endl;
 cout<<"TOTAL SALES AMOUNT: "<<sales_amount<<endl;










return 0;

}
