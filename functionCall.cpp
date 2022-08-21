#include<iostream>
using namespace std;
int addition(int,int);
int main()
{
	int x;
	int y;
	int z;
	x = 10;
	y = 20;
	cout<<"the address of x is "<<&x<<"the address of "<<&y<<endl;
 z=addition(x,y);
 cout<<z;	

	return 0;
}
//int addition(int,int);
int addition(int x,int y)
{
	cout<<"the address of x is "<<&x<<"the address of "<<&y<<endl;
	return(x+y);
}
int swap()
{
	int a = x;
	int b = y;
	
	a = b;
	b = c;
	c = a;
	
	cout<<"value of a "<<a<<" value of b "<<b;<<endl;
	
	
}


