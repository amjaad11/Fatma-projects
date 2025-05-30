#include <iostream>
using namespace std;
#include <cmath>

using namespace std;

float area(float D, float pi)
{
// calculate the circle area through diameter
return (pi * pow(D, 2))/ 4;    
};
int main()
{
    float D;
    float pi = 3.14;
    
    cout << "enter D " << endl;
    cin >> D;
    float ar = area(D,pi);
    cout << "result " << ar << endl;

   
}