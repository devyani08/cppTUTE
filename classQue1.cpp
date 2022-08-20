#include<iostream>
using namespace std;
 class student
 {
 	public:
 		
 		string name;
 		int roll_no;
 		
 };

int main()
{
	
student d;
d.name = "john";		//the mistake was i have replace d in suffix instead of prefix
d.roll_no = 2;

cout<<"The name of the student is "<<d.name<<" and the roll number is "<<d.roll_no<<endl;
	
	return 0;
}
