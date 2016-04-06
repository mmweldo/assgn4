#include <iostream>
#include "Person.h"
using namespace std;

Person()
{
   firstName = " ";
   lastName = " ";
}
Person(string first, string last)
{
   firstName = first;
   lastName = last;
}
~Person()
{
   cout << "Person object is being destructed!!!" << endl;
}
void setFirstName(string firstn)
{
   firstName = firstn;
}
void setLastName(string lastn)
{
   lastName = lastn;
}
string getFirstName()
{
   return firstName;
}
string getLastName()
{
   return lastName;
}
void printPInfo()
{
   cout << firstName << "," << lastName 
}
