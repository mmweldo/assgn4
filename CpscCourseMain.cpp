#include "Student.h"
#include "CpscCourse.h"
#include "Person.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*Prototypes */
void fillStudents(ifstream&, vector<Student>&);
void fillCpscCourse(ifstream&, vector<CpscCourse>&);


int main() {
	/*Suggestion: create two vectors to hold the information pertaining to 
	CpscCourse and Student*/
	vector <Student> studentInfo;
	vector <CpscCourse> courseInfo;

	ifstream stuInfo("studentInfo.txt");
	ifstream corInfo("cpscInfo.txt");

	/*Call fillStudents and fill CpscCourse */
	fillStudents(stuInfo,studentInfo);
	fillCpscCourse(corInfo,courseInfo);

	stuInfo.close();
	corInfo.close();

	return 0;	
}


void fillStudents(ifstream& inStudent, vector<Student>& stu) 
{
  string stuLast, stuFirst, classStanding;
  int term, creditHours;
  float GPA;

  inStudent >> term;
  
  for(int x= 0; x < term; x++)
  {
   
   Student newStudent;
   stu.push_back(newStudent);
   
   inStudent >> stuLast;
   inStudent >> stuFirst;
   inStudent >> GPA;
   inStudent >> classStanding;
   inStudent >> creditHours;
   inStudent.ignore(1,'\n');

   /*Below the vector calls the setter functions, this doesnt matter at all for
   student, you can keep it or change it similar to course*/
   stu[x].Person:: setFirstName(stuFirst);
   stu[x].Person:: setLastName(stuLast);
   stu[x].setGPA(GPA);
   stu[x].setClassStanding(classStanding);
   stu[x].setCurCredit(creditHours);
  
   stu[x].printInfo();
  }
}



void fillCpscCourse(ifstream& in, vector <CpscCourse>& course) 
{
    string cName;
    int term, cNum, cSect, aSeat, oSeat;

    in >> term;

    for(int x = 0; x < term; x++)
    {

      CpscCourse newCourse;
      course.push_back(newCourse);
      in >> cName;
      in >> cNum;
      in >> cSect;
      in >> aSeat;
      in >> oSeat;
      in.ignore(1,'\n');

      /*This calls setters, this doesnt call the overloarded constructor for course
      	This means that the static int doesnt increment. To change, delete the course[x]
      	setter functions up to print and move the newCourse object creation to bottom 
        and put the variables from in into it to match the overloaded constructor call
        also put the pushback call for putting it at the end of the vector uunder the object creation
      */
      course[x].setCourseName(cName);
      course[x].setCourseNum(cNum);
      course[x].setCourseSect(cSect);
      course[x].setAvailSeats(aSeat);
      course[x].setOpenSeats(oSeat);

      course[x].printInfo();
    }
}
