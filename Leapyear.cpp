//Q3. Write a program to check whether a year entered by a user is Leap year or not.

#include<iostream>
using namespace std;
main()
{   int y;
    cout<<"Enter the year:";
    cin>>y;
    if(y%400==0)
       cout<<"Leap Year"<<endl;
    else if(y%4==0 && y%100!=0)
       cout<<"Leap year"<<endl;
    else
       cout<<"Not a leap year";
}