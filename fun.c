#include <iostream>
#include <stdio.h>
using namespace std;

void mysumprocedure()
{
int ten;
int tony;
cout << "please enter Number1 " << endl;
cin >> ten;
cout << "please enter Number2 " << endl;
cin >> tony;
cout << " " << ten + tony << endl;
};
int myfunction()
{
int n;
int tm;
cout << "please enter Number 1 and number2: " << endl;

cin >> n >> tm;

return n + tm;

};
int main ()
{
 int f = myfunction();  
cout << "result " <<f << endl;

mysumprocedure();

return 0;
};