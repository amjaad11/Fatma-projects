#include <iostream>
using namespace std;

float circle(float pi, float a,float b ,float f,float t)
{

return ((pi * b * b ) / f) * (t * a - b) /
    (t * a + b);
};
int main()
{
   
 float pi = 3.1416;
 float a;
 float b;
 float f = 4;
 float t = 2; 
    cout << "enter a,b" <<  endl;
    cin >> a >> b;
    
    float area = circle(pi,a,b , f, t);
    cout << "result a =  "  << area << endl;
    
    return 0;
};