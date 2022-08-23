//23 total code samples are present in programmong/c++ folder this one is 24

#include<iostream>
using namespace std;

class AllCal
{
	public:
		int add(int, int);			//declared function inside a class is by default an inline function
		int mul(int, int);
		float div(int, int);
		int sub(int, int);
};

inline int AllCal :: add(int a, int b)
{
	cout<<"the addition of two given number is be :" ;
	return(a+b);
}

inline int AllCal :: mul(int a, int b)
{
	cout<<"the multiplication of the given number is : ";
	return(a*b);
}
inline float AllCal :: div(int a, int b)
{
	cout<<"the division of given two numbers will be : " ;
	return(a/b);
	}
inline int AllCal :: sub(int a, int b)
{
	cout<<"the subtraction of the given number is :" ;
	return(a-b);
}

int main()
{
	AllCal g;
	
	int a, b;
	cout<<"enter first number "<<endl;
	cin>>a;
	cout<<"enter second number "<<endl;
	cin>>b;
	cout<<g.add(a,b)<<endl;
	cout<<g.div(a,b)<<endl;
	cout<<g.mul(a,b)<<endl;
	cout<<g.sub(a,b)<<endl;
	return 0;
}
