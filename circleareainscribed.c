#include <iostream>
using namespace std;
#include <cmath>
float area(float A, float pi)
{
    // calculate the circle area inscribed in a square
    return (pi * pow( A, 2))/ 4;
};
int main()
{
    float A;
    float pi = 3.14;
    
    cout <<"use should enter A " << endl;
    cin >> A;
    float ar = area(A, pi);
    cout << "this result circle area inscribed " << ar << endl;
    
}