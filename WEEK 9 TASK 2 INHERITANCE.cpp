
//VEHICLE SYSTEM
//ERIK MUKIRI GITAU
//CT101/G/29069/25


#include<iostream>
#include<string>
using namespace std;

 class Vehicle
 {

 public:
     string brand;
     int yearOf_manufacture;


     void displayVehicle()
     {
     cout<<"VEHICLE BRAND: "<<brand<<endl;


     cout<<"YEAR OF MANUFACTURE: "<<yearOf_manufacture<<endl;

     }

};


 class Car : public Vehicle
 {
public:
 int numberOf_doors;
 double engine_capacity;

 void displayCar()
 {
 cout<<"NUMBER OF DOORS: "<<numberOf_doors<<endl;


 cout<<"ENGINE CAPACITY: "<<engine_capacity<<"CC"<<endl;


 cout<<"VEHICLE BRAND: "<<brand<<endl;
 cout<<"YEAR OF MANUFACTURE: "<<yearOf_manufacture<<endl;
 }



 };


 int main()
 {

Car obj;

cout<<"ENTER VEHICLE BRAND: "<<endl;
cin>> obj.brand;

cout<<"ENTER YEAR OF MANUFACTURE: "<<endl;
cin>>obj.yearOf_manufacture;

cout<<"ENTER NUMBER OF DOORS: "<<endl;
cin>>obj.numberOf_doors;

cout<<"ENTER ENGINE CAPACITY: "<<endl;
cin>>obj.engine_capacity;


cout<<"\n VEHICLE DETAILS"<<endl;
cout<<"______________________"<<endl;

obj.displayVehicle();
obj.displayCar();

 return 0;

 }

