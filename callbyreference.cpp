#include <iostream>
using namespace std;
int swap(int *,int *);
int main()
{
	int x =10, y=20;
	
	int z;
	cout<<"before swaping x "<<x<<endl<<"valur of y "<<y<<endl;
	
 swap(&x,&y);
 //cout<<x<<y;
 cout<<x<<endl<<y<<endl;
cout<<"address of  "<<&x<<endl<<&y<<endl;
 


	//cout<<"size of swap "<<sizeof swap(int *,int *)<<endl;
	cout<<"size of main "<<sizeof main()<<endl;
	return 0;
}
int swap(int *x, int *y)
{
	int c;
	c = *x;
	*x = *y;
	*y = c;
	cout<<"pointer "<<*x<<endl<<*y<<endl;
	//	cout<<&x<<endl<<&y<<endl;
//	return(a,b);

	

	

}
