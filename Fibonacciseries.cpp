//Q4. Write a program to display Fibonacci Series upto nth term. (Using loops)

#include<iostream>
using namespace std;
int main()
{   int n,x=0,y=1,z;
	cout<<"Enter the number of elements of series:";
	cin>>n;
    cout<<x<<","<<y;
    for(int i=1;i<n-1;i++)
    {
       z=x+y;
       cout<<","<<z;
       x=y;     
       y=z;     
    }
}