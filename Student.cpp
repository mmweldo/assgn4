#include "Student.h"
Student::Student()
{
	classStanding = "";
	GPA = 0;
	maxCredit = 0;
	curCredit = 0;
}
Student::Student(string fName, string lName, float sgpa, 
	string sclass, int smaxCredit, int scurCredit) 
: Person(fName, lName), GPA(sgpa), classStanding(sclass), 
maxCredit(smaxCredit), curCredit(scurCredit)
{
}
Student::~Student()
{
	cout << "Student Class Deconstructed" << endl;
}
void Student::setGPA(float gpa)
{
	if(gpa > 0 && <= 4)
	{
		GPA = gpa;
	}
	else
		cout << "GPA input was invalid range." << endl;
		GPA = 0;
}
void Student::setClassStanding(string classStanding)
{
	if(classStanding == "Freshman" ||
		classStanding == "Sophmore" ||
		classStanding == "Junior" ||
		classStanding == "Senior")
	this->classStanding = classStanding;
	else
		cout << "Invalid input of class standing." << endl;
}
void Student::setCurCredit(int credit)
{	
	curCredit = credit;
}
float Student::getGPA()
{
	return GPA;
}
string Student::getClassStanding()
{
	return classStanding;
}
int Student::getCurCredit()
{
	return curCredit;
}
int Student::getMaxCredit(float g, string c)
{
	if(credit >= 0 && credit < 18)
	{
		if(classStanding == "Freshman")
		{
			if(credit > 15)
			{
				return 15;
			}
			else if(GPA < 2.5 && credit > 12)
			{
				return 12;
			}
			else
				return 15;
		}
		else
			if(credit > 18 && credit >= 2.5)
			{
				return 18;
			}
			else if(gpa < 2.5 && credit > 12)
			{
				return 12;
			}
			else
				return 18;
	} 
	else
		return 0;
}
//Prints out Name,Gpa,classStanding,current and max credit to file
void Student::printInfo()
{
	int count = 0;
	while(count < 48)
	{
		cout << "*";
		count++;
	}
	cout << endl << setw(20) << "Name:"
		 << Person::lastName << ","
		 << Person::firstName << endl;
	cout << setw(20) << "GPA:"
		 << GPA << endl;
	cout << setw(20) << "Category:"
		 << classStanding << endl;
	cout << setw(20) << "Maximum Credit:"
		 << maxCredit << endl;
	cout << setw(20) << "Current Credit:"
		 << curCredit << endl;
	while(count < 48)
	{
		cout << "*";
		count++;
	}
}