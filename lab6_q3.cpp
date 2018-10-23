
//include library
#include<iostream>
using namespace std;

//declare and define variable to find maximum
int findmax(int a,int b)
  
{
  //check for maximum value and assign it to the variable
  int max;
        if (a>b)
         max = a;
        else if (b>a)
         max = b;
  
  return max;
}

//write main function
int main ()
{  
  
  int a,b,c;
 
 //ask user for two values
 cout <<" Enter the numbers required"endl;
 cin>>a>>b;
  
 //assign the return value to the variable
 c = findmax (a,b);
 
 if (c ==0)
   cout <<"both the numbers are equal" endl;
 else 
   cout <<"maximum is"<<c endl;
 return 9;
}
    
  
