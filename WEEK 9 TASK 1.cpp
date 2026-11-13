//SCHOOL MANAGEMENT system
//ERIK MUKIRI GITAU
// CT101/G/29069/25



#include<iostream>
#include<string>
using namespace std;

class Person{

    public:
        string name;
        int age;


void displayPerson()
{

cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;


}

};



class Student: public Person
{

    public:
int admission_number;

int class_name;




void displayStudent()
{
cout<<"Admission Number: "<<admission_number<<endl;;
cout<<"Class: "<<class_name<<endl;


}

};



int main()
{

Student pupils;

cout<<"ENTER NAME: "<<endl;
cin>>pupils.name;
cout<<"ENTER AGE: "<<endl;
cin>>pupils.age;
cout<<"ENTER ADMISSION NUMBER: "<<endl;
cin>>pupils.admission_number;
cout<<"ENTER CLASS NAME: "<<endl;
cin>>pupils.class_name;


cout<<"STUDENT DETAILS"<<endl;
cout<<"_________________"<<endl;

pupils.displayPerson();
pupils.displayStudent();




return 0;


}
