/*Q6. Print this pattern using loops
For n=5
	    *
	   * *
	  * * *
	 * * * *
	* * * * *
*/
#include<iostream>
using namespace std;                                        
int main()
{   int n,row,sps,col;
    cout<<"Enter The  number:";
    cin>>n;
      for(row=0;row<n;row++)
      {
	     for(sps=0;sps<n-row;sps++)
         cout<<" ";
         for(col=0;col<=row;col++)
          {
		    cout<<"*";
		  }
		  cout<<"\n ";
       }
}
      