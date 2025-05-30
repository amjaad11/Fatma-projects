#include <iostream>
#include <cmath>
using namespace std;


float pow1(float number,float M)
{

    
    return round(pow(number, M));
}
int main()
{
    float number;
    float M;
    cout << "enter number,M " << endl;
    cin >> number >> M;
    cout << "result " << pow1(number,M) << endl;
    return 0;
}