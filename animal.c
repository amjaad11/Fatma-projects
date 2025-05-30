#include <iostream>
using namespace std;

enum Animal { cat, dog,bird,other};
struct animal
{
    
    int age;
    string healthstatus;
   
    Animal tybe;
};
int main()
{
    struct animal animal1;
    {
    animal1.age = 5; 
    animal1.healthstatus = "good"; 

    animal1.tybe = Animal::bird;
    
    
    cout << "Animal tybe bird = " << animal1.tybe << endl;

    cout << "Animal age:" <<animal1.age << "\n" << "Animal healthstatus " << animal1.healthstatus << endl;
    return 0;
}
};