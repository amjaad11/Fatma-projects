#include <iostream>
using namespace std;

void myfunc(int &number1 ,int &number2)
{

int swap = number1;
number1 = number2;
number2 = swap;

cout << "number 1 after swap: " << number1 << " and " << "number 2 after swap: "
 << number2 << endl;
};

int main()
{
int number1;
int number2; 
 cout << "enter number1,number2" << endl;  
cin >> number1 >> number2;
cout << "number 1 is " << number1 << " and " << "number 2 is " << 
number2  << endl;
myfunc(number1,number2);
cout << "after swap inside main the function: " << "number1= " << number1 << " nember2= " << number2 << endl;

};