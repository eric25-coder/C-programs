//WEEK 2 Task 3 Simple calculator(switch statement)
//Erik Mukiri Gitau CT101/G/29069/25






#include<iostream>
using namespace std;
int main ()
{
float number1, number2, result;
char operation;


cout<<"Enter FIRST NUMBER: "<<endl;
cin>> number1;

cout<<"ENTER OPERATOR: "<<endl;
cin>> operation;

cout<<"ENTER SECOND NUMBER: "<<endl;
cin>> number2;


switch(operation)
{

case '+':

result= number1+number2;

cout<<"RESULT: "<<result<<endl;
break;


case'-':

result=number1-number2;

cout<<"RESULT: "<<result<<endl;
break;


case '*':
result=number1*number2;

cout<<"RESULT: "<<result<<endl;
break;

case '/':
if (number2==0)
{
cout<<"DIVISION BY 0 NOT SUPPORTED"<<result<<endl;

}

else

result=number1/number2;

cout<< "RESULT: "<<result<<endl;
break;




return 0;










}





















}
