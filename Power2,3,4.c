#include <iostream>
#include <cmath>
using namespace std;
void mypow()
{
     int tow;
    
    cout << "enter number" << endl;
   
    cin >> tow;
   
    int a = round(pow(tow, 2)); 
    int b = pow(tow, 3); 
    int c = pow(tow, 4);
    cout << "result " << a  << " result " << b  << " result " << c << endl;
    
}
int main ()
{ 
    mypow();
}