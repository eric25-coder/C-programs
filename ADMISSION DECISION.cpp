//WEEK 2 Task 2: Admission Decision(Nested if)
//ERIK MUKIRI CT101/G/29069/25


#include<iostream>
using namespace std;


int main()
{
string student_name;
int age;
int exam_score;

cout<<"ENTER STUDENT NAME: "<<endl;
cin>>student_name;

cout<<"ENTER AGE: "<<endl;
cin>>age;

cout<<"ENTER EXAM SCORE: "<<endl;
cin>>exam_score;

if (age>=18) {

  if(exam_score>=50)

{cout<<"ADMITTED"<<endl;}

else {cout<<"NOT ADMITTED: LOW SCORE"<<endl;}

}

else { cout<<"NOT COMMITED: UNDERAGE"<<endl;}


return 0;






























}
