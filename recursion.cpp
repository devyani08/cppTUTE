//Recursion and overloading
//warning : memory breach problem can occur. End it at earliest
#include<iostream>
using namespace std;
int rec();
//float rec();

int main()
{
	
	//rec();
	return rec();
}
int rec()
{
	cout<<"helo i am a resursive function"<<endl;
	
	return rec();
}
//float rec();
