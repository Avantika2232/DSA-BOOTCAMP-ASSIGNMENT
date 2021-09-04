//Q5. Write a program to check whether a number is Prime or Not.

#include<iostream>
using namespace std;
int main()
{  int n,i;
   cout<<"Enter the number:";
   cin>>n;
   for(i=2;i<=n;i++)
   {
   	 if(n%i==0)
   	 {break;
		}
   }
   if(n==i)
   cout<<"Prime Number"<<endl;
   else
   cout<<"Not a prime Number";
}