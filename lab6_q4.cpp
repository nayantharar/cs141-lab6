
//include library
#include<iostream>
using namespace std;

//decrale and define function to finfd minimum
int findmin (int a,int b)
  
{ 
   //check for minimum value and assign it to variable
   int min;
   
             if(a<b)
                return a;
             else(b<a)
                return b; 
  
   //return value
   return min;
}



void byreference(int a,int b,int &sum)
{
   sum= byvalue(a,b);
  cout<<"minimum="<<sum;
}

int main()
{
  int a,b,sum=0;
  cout<<"Enter the numbers required"<<endl;
  cin>>a>>b;
  byvalue(a,b);
  byreference(a,b,sum);
return 9;
}
