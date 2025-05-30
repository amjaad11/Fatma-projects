#include <iostream>
using namespace std;
#include <stdio.h>

struct book
{
    string title;
    int pages;
    
};

void createbeak(book bookes)
{
cout << "Enter the book title and number of pages" << endl;

cin >> bookes.title;
cin >> bookes.pages;
}
void update(book &bookes)
{
    cout << " book information after update " << endl;
    cin >> bookes.title;
    cout << " pages after update " << endl;
    cin >> bookes.pages;
    
}
int main()
{
  book mybooke;  
  createbeak(mybooke);  
  update(mybooke);
}