//Q2. Write a program to find the largest number among three numbers entered by the user.

#include<iostream>
using namespace std;
main()
{    float a,b,c;
     cout<<"Enter Three numbers:";
     cin>>a>>b>>c;
     if(a>b)
       {if(a>c)
        {cout<<"largest number is:"<<a<<endl;
         }
        else 
		cout<<"largest number is:"<<c<<endl;
        }
        else
        {
         if(b>c)
         {cout<<"largest number is:"<<b<<endl;
          }  
         else
         {cout<<"largest number is:"<<c;
          }
	    }
}