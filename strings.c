#include <iostream>
#include <string.h>
using namespace std;

int main (void)
{

string fullname;
cout << "Please enter string1? " << endl;
getline(cin, fullname);
cout << "the length of string1 is? " << fullname.length() << endl;


cout <<"Characters at 0,2,4,7 Are: " << fullname[0] << " "<< fullname[2] << " "<< fullname [4] << " "<< fullname[7] << endl;






string f;
cout << "Please enter string2? " << endl;

cin >> f;
cout << f << endl;
string t;
cout << "Please enter string3? " << endl;
cin >> t;
cout << t << endl;
string bls = f + t;
int bls1 = stoi(f) * stoi(t);
cout << "Concatenating string2 and string3 = " << bls << " * =" << bls1 << endl;

cout << "string mystr" << "*******************" << endl;


};

