#include <iostream>
#include <cmath>
using namespace std;

float seconds(float d,float h,float m,float s)
{
return round(d * 86400) + (h * 3600) + (m * 60) + s;
};
int main()
{
    float d;
    float h;
    float m;
    float s;

    cout << "how match sedcnd " << endl;
    cin >> d >> h >> m >> s;

    
    cout << "result = " << seconds(d, h, m,s) << endl;
    return 0;
}