#include <iostream>
using namespace std;
#include <cmath>

float circle(float L, float pi)
{
const int A = 4;
return floor(pow(L, 2) / (A * pi ));
}

int main()
{
    float L;
    float pi = 3.1416;
    
    cout << "enter L" << endl;
    
    cin >> L;
    float area = circle(L, pi);
    cout << "result L " << area << endl;

  return 0; 
};