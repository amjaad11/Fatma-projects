#include <iostream>
using namespace std;
#include <string>
void readarraysDate(string fruits[5])
{
    cout << "is it " << fruits[0] << endl;
    cout << "is it " << fruits[1] << endl;
    cout << "is it " << (fruits[2] = "teen") << endl;
    
    cout << "is it " << fruits[3] << endl;
    cout << "is it " << fruits[4] << endl;


};
 
void print(string fruits[5])
 {
    fruits[0] = "apple";
   fruits[1] = "orange";
   fruits[2] = "banana";
   fruits[3]  = "kiwi";
   fruits[4]  = "watermelon";

      
    

    
 }
int main ()
{

string fruits[5];
print(fruits);


cout << "Fruits: " << endl; 
readarraysDate(fruits);


};