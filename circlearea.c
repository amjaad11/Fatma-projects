#include <iostream>
using namespace std;
#include  <cmath>

float area(float pi, float r)
{
cout << "Calculate circle area r" << endl;
return pi * pow(r, 2);     

};

int main()
{
    
     float pi = 3.14;
     float  r;
     float ara1 = area(pi, r);
     cin >> r;
    cout << "result " << pi * pow(r, 2) << endl;
    

    return 0;
}