//Q7.Write a program that takes n elements from the user and displays the second largest element of an array.
#include <iostream>
using namespace std;
int main()
{
  int a[50],n;
  cout<<"Enter number of elements";
  cin>>n;
  cout<<"Enter elements:"<<endl;
  for(int i=0;i<n;i++)
  {
  	cin>>a[i];
  }
   //sorting the array
   int max1=a[0],max2;
   for(int i=1;i<n;i++)
   {
     if(a[i]>max1)
     {
	 max2=max1;
     max1=a[i];
	}
	 else if(a[i]<max1&&a[i]>max2)
	    max2=a[i];
   }
   cout<<"Second largest number is:"<<max2;
}
