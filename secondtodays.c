#include <iostream>
#include <cmath>

using namespace std;

void second1() 
{
int sec;
cout << "give me days,hour,munits" << endl;
cin >> sec;
int day = (sec / 86400);
int remain = sec % 86400;
int hour = (remain / 3600);
remain %= 3600;
int munits = remain / 60;
int second = round(remain % 60);

cout << day << " days " << hour << " hour " << munits << " munits " << second << " second " << endl;  
};
 int main()  
 {


second1();
 };