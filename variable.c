#include <iostream>
#include <cmath>
using namespace std;
int f = 500;

void seconds()
{
int f = 10;
cout << "the local value of f inside function is: " << f << endl;
};
int main()
{
int f = 100;
cout <<  "the value of f function is: " << f << endl;

cout << "the golobal value of f  is: " << ::f << endl;


seconds();


};    