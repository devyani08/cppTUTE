#include<iostream>
using namespace std;

int main()
{

int employee;
int Department;
cout<<"enter employee details";
cin>>employee;
//cin>>Department;

switch(employee)
        {
            case 1:
                cout<<"Devyani Arya";
                break;
            case 2:
                cout<<"Manisha Kalota";
                break;
            case 3:
                cout<<"Prafful Choudhary";
                break;
            case 4:
                cout<<"Harsh Shrivastava";
                break;
            case 5:
                cout<<"Akshita Bajpai";
                break;
//            case 6 :
//              cout<<"employee number 6";
//                switch(Department)
//                {
//                    case 11:
//                        cout<<"IT Department";
//                        break;
//                    case 22:
//                        cout<<"Management Department";
//                        break;
//                    case 33:
//                        cout<<"Account section";
//                        break;
//                }
//                break;
            default:
                cout<<"Enter employee id or department name for info";
    	}

return 0;
}


/* total code is wrong because its not working*/



// Program to build a simple calculator using switch Statement





//-------------------------------------------------------------------//
//#include <iostream>
//using namespace std;
//
//int main() {
//    char oper;
//    float num1, num2;
//    cout << "Enter an operator (+, -, *, /): ";
//    cin >> oper;
//    cout << "Enter two numbers: " << endl;
//    cin >> num1 >> num2;
//
//    switch (oper) {
//        case '+':
//            cout << num1 << " + " << num2 << " = " << num1 + num2;
//            break;
//        case '-':
//            cout << num1 << " - " << num2 << " = " << num1 - num2;
//            break;
//        case '*':
//            cout << num1 << " * " << num2 << " = " << num1 * num2;
//            break;
//        case '/':
//            cout << num1 << " / " << num2 << " = " << num1 / num2;
//            break;
//        default:
//            // operator is doesn't match any case constant (+, -, *, /)
//            cout << "Error! The operator is not correct";
//            break;
//    }
//
//    return 0;
//}
