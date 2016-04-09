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

      in >> cName;
      in >> cNum;
      in >> cSect;
      in >> aSeat;
      in >> oSeat;
      in.ignore(1,'\n');

      CpscCourse newCourse(cName,cNum,cSect,aSeat,oSeat);
      course.push_back(newCourse);

      course[x].printInfo();
    }
}
