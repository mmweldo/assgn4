#include "CpscCourse.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Initialize static CourseID

/*	The static int needs to be set to -1, because otherwise
	it will print course numbers 1,2,3 not 0,1,2
*/

static int courseID = 0;

//Default Constructor
CpscCourse::CpscCourse()
{
    courseName = "Cpsc 0000";
    courseNum = 0;
    courseSect = 0;
    availSeats = 0;
    openSeats = 0;
}

//Overloaded Constructor
CpscCourse::CpscCourse(string cName, int cNum, int cSect, int aSeats, int oSeats)
{
    //Increment CourseID everytime new object is created
    courseID++;
    
    setCourseName(cName);
    
    if(cNum < 0)
    {
        cout << "Invalid Course number entered." << endl;
    }
    else
    {
        setCourseNum(cNum);
    }
    
    if(cSect < 0)
    {
        cout << "Invalid Section number entered." << endl;
    }
    else
    {
        setCourseSect(cSect);
    }
    
    if(aSeats < 0)
    {
        cout << "Invalid number of available seats entered." << endl;
    }
    else
    {
        setAvailSeats(aSeats);
    }
    
    if(oSeats < 0)
    {
        cout << "Invalid number of open seats entered.." << endl;
    }
    else
    {
        setOpenSeats(oSeats);
    }
}

//Destructor
CpscCourse::~CpscCourse()
{
	/*Comment out the deconstructor
	*/
    cout << "CpscCourse Object is destroyed." << endl;
}

//Setters

//Sets Course Name
void CpscCourse::setCourseName(string cName)
{
    courseName = cName;
}

//Sets Course Number
void CpscCourse::setCourseNum(int cNum)
{
    courseNum = cNum;
}

//Sets Course Section
void CpscCourse::setCourseSect(int cSect)
{
    courseSect = cSect;
}

//Sets Available Seats
void CpscCourse::setAvailSeats(int aSeats)
{
    availSeats = aSeats;
}

//Sets Open Seats
void CpscCourse::setOpenSeats(int oSeats)
{
    openSeats = oSeats;
}

//Getters

//Returns Course Name
string CpscCourse::getCourseName()
{
    return courseName;
}

//Returns Course Number
int CpscCourse::getCourseNum()
{
    return courseNum;
}

//Returns Course Section
int CpscCourse::getCourseSect()
{
    return courseSect;
}

//Returns Available Seats
int CpscCourse::getAvailSeats()
{
    return availSeats;
}

//Returns Open Seats
int CpscCourse::getOpenSeats()
{
    return openSeats;
}

//Prints block of Course information
void CpscCourse::printInfo()
{
	/*	Delete 13 stars so the overhang int as apparent, it will then
		match the student output as well
	*/
    cout << "************************************************" << endl;
    cout << setw(20) << "Course Name:" << courseName << endl;
    cout << setw(20) << "Course Number:" << courseNum << endl;
    cout << setw(20) << "Course Section:" << courseSect << endl;
    cout << setw(20) << "Available Seats:" << availSeats << endl;
    cout << setw(20) << "Open Seats:" << openSeats << endl;
    cout << setw(20) << "Course ID:" << courseID << endl;
    cout << "************************************************" << endl;
}




