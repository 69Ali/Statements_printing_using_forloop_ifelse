#include<iostream>
using namespace std;

main(){
   int num1=2, num2=5, sum, i, j, k;
    cout<<"My VU id is BC220421425 \n";
    sum = num1+num2;
    cout<<"The sum of first and last digit of vu id is = " <<sum;
    cout<<"\n";
	if (sum > 7)
    { for(i=0; i<=sum; i++)
	{
       cout<<"Welcome to VU \n";
	}
	   }
	else if(sum<7)
	{  
	   for(j=0; j<=sum; j++)
       { cout<<"Welcome to CS201P \n";
	   }
   	}  
   	else
   	{  for(k=0; k<=sum; k++)
   	   {
		cout<<"Sum of first and last digit of my vu id is equal to 7 \n";
	   }
    }
}
