#include <iostream>
#include "Person.h"
#include <string>
using namespace std;

Person::Person()
{
   firstName = " ";
   lastName = " ";
}
Person::Person(string first, string last)
{
   firstName = first;
   lastName = last;
}
Person::~Person()
{
}
void Person::setFirstName(string firstn)
{
   firstName = firstn;
}
void Person::setLastName(string lastn)
{
   lastName = lastn;
}
string Person::getFirstName()
{
   return firstName;
}
string Person::getLastName()
{
   return lastName;
}
void Person::printPInfo()
{
   cout << firstName << "," << lastName;
}
