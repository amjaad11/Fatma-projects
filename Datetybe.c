#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{ 
    // string convert to duble and float and int
    string st1 = "43.22";
        double ndouble = stod(st1);
        float flo = stod(st1);
        int in1 = stod(st1);
         cout << " convert string to double "<< ndouble << "\n"<<"convert string to float " << flo << "\n"<< "convert string to int " << in1 << endl;
        // Convert int to string
        int n1 = 20;
        string s1;
        s1 = to_string(n1);
        cout << " int to string " << s1 <<endl;

       
       // Convert double to string
       double do1 = 33.5;
       string st2;
       st2 = to_string(do1);
       cout << "Convert double to string" << st2 <<endl;
       // Convert float to string
       float flo1 = 55.23;
       string str3;
       str3 = to_string(flo1);
       cout << "Convert float to string" << str3 <<endl;
       int ant1;
       ant1 = flo1;
        cout << "Convert float to int " << ant1 <<endl;
       


    //
};