#include <iostream>
using namespace std;


void read()
{
cout << "Please Enter Grode1 \n"<< endl;
cin >> x[0];
cout << "Please Enter Grode2 \n" << endl;
cin >> x[1];
cout << "Please Enter Grode3 \n"<< endl;
cin >> x[2];
};
int printread(int x[3])
{

cout << "The average of grades is:  \n" << endl;  
return (x[0] + x[1] + x[2]) /3;
};
int main ()
{
read();
int printread();

};