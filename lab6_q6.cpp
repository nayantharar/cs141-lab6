
//include library
#include<iostream>
using namespace std;

//declare and define function
int sumEvennumbers(int a,int b)
{
  int sum=0;
  for(int i=a+1;i<=b-1;i++)
   {
    if(i%2==0)
       sum=sum+i;
    else
       sum=sum;
   }
return sum;
}


int sumOddnumbers(int a,int b)
{
  int sum=0;
  for(int i=a+1;i<=b-1;i++)
  {
     if(i%2!=0)
         sum=sum+i;
     else
         sum=sum;
   }
return sum;
}

int sumSquareOddnumbers(int a,int b)
{ 
  int sum=0,i=a+1;
  while(i<=b-1)
 
    {
      if(i%2!=0)
         sum=sum+i*i;
      else
         sum=sum;
    }
i++;
  }
 
  return sum;
}

int sumSquareEvennumbers(int a,int b)
{
   int sum=0,i=a+1;
   while(i<=b-1)

     {
         if(i%2==0)
         sum=sum+i*i;

         else
        sum=sum;
        i++;
     } 
return sum;
}
                                                                                          
int main()
{
  // decrlare necessry variables
int firstnum,secondnum,sumEven,sumOdd,sumSquareEven,sumSquareOdd;
  
  cout<<"enter the  numbers in ascending order "<<endl;
  cin>>firstnum>>secondnum;
  //get the values and print them
sumEven=sumEvennumbers(firstnum,secondnum);
sumOdd=sumOddnumbers(firstnum,secondnum);
sumSquareEven=sumSquareEvennumbers(firstnum,secondnum);
sumSquareOdd=sumSquareOddnumbers(firstnum,secondnum);
  
cout<<sumEven<<' '<<sumOdd<<' '<<sumSquareEven<<' '<<sumSquareOdd<<endl;
return 9;
}
