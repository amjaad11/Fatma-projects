#include <iostream>
#include <stdio.h>
using namespace std;

struct strInfo
{
string name;
string Lastname;
int age;
string city;
string country;
int monthlysolory;
int yearlysolory;
string Gender;
string Married;
};
void readInfo(strInfo &Info)
{
    cout << "enter your FirstName? \n";
    cin >> Info.name;

    cout << "enter your LastName? \n";
    cin >> Info.Lastname;
    cout << "enter your Age? \n";
    cin >> Info.age;
    cout << "enter your City? \n";
    cin >> Info.city;
    cout << "enter your Country? \n";
    cin >> Info.country;


    cout << "enter your Monthly Solory? \n";
    cin >> Info.monthlysolory;
    cout << "enter your Yearly Solory? \n";
    cin >> Info.yearlysolory;
    cout << "enter your Gender? \n";
    cin >> Info.Gender; 
    cout << "Married? \n";
    cin >> Info.Married;

    
}
void printinfo(strInfo Info)
{
    cout << "\n******************** \n";

    cout << "Firstname: " << Info.name << endl;
    cout << "Lastname: " << Info.Lastname << endl;
    cout << "Age: " <<  Info.age << endl;
    cout << "City: " <<  Info.city << endl;
    cout << "Country: " <<  Info.country << endl;
 
    cout << "Monthly Solory: " <<  Info.monthlysolory << endl;
    cout << "Yearly Solory: " <<  Info.yearlysolory << endl;
    cout << "Gender: " <<  Info.Gender << endl;
    cout << "Married : " <<  Info.Married << endl;

}
int main ()
{
    strInfo read1Info;
    readInfo(read1Info);
    printinfo(read1Info);
};
