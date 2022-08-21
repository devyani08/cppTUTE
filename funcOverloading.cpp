
//can we call all overloaded function at the same time
//how would we know which function is to be called



#include<iostream>
using namespace std;

int add1(int, int)
{ 

//cout<<"The sum of two integer value is: "<<sum;
}

float add1(float, int)
{ 


//cout<<"The sum of one int and one float value is: "<<sum;
}

float add1(float, float)
{ 

//sum = a+b;
//return(sum);
//cout<<"The sum of two float value is: "<<sum;
}

int main()
{
	int x=10;
    float y=30.65;
    float sum;
    sum = x+y;
	add1(x,y);
	
	cout<<"The sum of two  value is: "<<sum;   // did i have too declare 'sum' in global scope
	
}

