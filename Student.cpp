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
	//cout << "Student Class Deconstructed" << endl;
}
void Student::setGPA(float gpa)
{
	if(gpa > 0 && gpa <= 4)
	{
		GPA = gpa;
	}
	else
	{
		cout << "GPA input was invalid range." << endl;
		GPA = 0;
	}
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
	if(curCredit >= 0 && curCredit < 18)
	{
		if(c == "Freshman")
		{
			if(curCredit > 15)
			{
				return 15;
			}
			else if(g < 2.5 && curCredit > 12)
			{
				return 12;
			}
			else
				return 15;
		}
		else
			if(curCredit > 18 && curCredit >= 2.5)
			{
				return 18;
			}
			else if(g < 2.5 && curCredit > 12)
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
	cout << endl << left << setw(30) << "Name:";
	cout << right << Person::getLastName() << ",";
	cout << right << Person::getFirstName() << endl;
	cout << left << setw(30) << "GPA:";
	cout << right << GPA << endl;
	cout << left << setw(30) << "Category:";
	cout << right << classStanding << endl;
	cout << left << setw(30) << "Maximum Credit:";
	cout << right << maxCredit << endl;
	cout << left << setw(30) << "Current Credit:";
	cout << right << curCredit << endl;
	cout << left;
	count = 0;
	while(count < 48)
	{
		cout << "*";
		count++;
	}
	cout << endl;
}