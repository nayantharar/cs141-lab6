//include library
#include<iostream>
using namespace std;

//declare and define necessary variables 
   int ask (int &a, int &b,int &c)
 	 	{
			 cout<< "Enter the units = "<<endl;
			 cin>>a;
      
	 		 cout<< "Enter the unitCst = "<<endl;
	 		 cin>>b;
      
	 		 cout<< "Enter the taxRt = "<<endl;
			 cin>>c;
 	 	}
//Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. 

 	 	void sat (int& a, int& b,int& c)
 	 	{
	 		 int sat = a*b*c;
	 		 cout<< "salesTx = "<< sat <<endl;
 	 	}
 	 	void tot (int& a, int& b,int& c)
 	 	{
	 		 int tot = (a*b*c) + (a*b);
	 		 cout<< "totDue = "<< tot <<endl;
 	 	}
//Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. 	 	
	 	int read (int& a, int& b,int& c)
	 	 { 
	 	    cout<< "The unit cost over the object is " <<b<< ". "<<"The number of units are "<<a<<". "<<"The tax rate is "<<c<<". "<<"the sales tax is "<<(a*b*c)<<". "<<"The total is "<<(a*b*c) + (a*b)<<endl; 
	 	 }

//write the main function
	    int main ()
	 	{
          
//call by reference
	 	  	int a,b,c;
			ask(a,b,c);
	 	  	sat(a,b,c);
	 	  	tot(a,b,c);
	 	  	read(a,b,c);
//return the values
	 	  	return 9;
		}
   
   
   
   

