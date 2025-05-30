#include <iostream>
#include <cmath>
using namespace std;

    float myarea(float a, float b, float c, float pi)

    {
       cin >> a >> b >> c;
    float p = (a + b + c) / 2; 
    float s = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    s = pow(s, 2);
    float area = round(pi * s); 
    return area;
    }

int main()
{
    float a;
    float b;
    float c;
    float pi = 3.14;
    cout << "user should enter a,b,c" << endl;
    float result = myarea(a,b, c, pi);
    cout << "result " << result << endl;
    return 0;
}