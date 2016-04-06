#include "Student.h"
#include "CpscCourse.h"
#include "Person.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

/*Prototypes */
void fillStudents(ifstream&, vector<Student>&);
void fillCpscCourse(ifstream&, vector<CpscCourse>&);


int main() {
    /*Suggestion: create two vectors to hold the information pertaining to 
      CpscCourse and Student*/
      vector <Student> studentInfo;
      vector <CpscCourse> courseInfo;
	
	
	/*Call fillStudents and fill CpscCourse */
	

	return 0;	
}


void fillStudents(ifstream& inStudent, vector<Student>& stu) 
{
  string stuLast, stuFirst, classStanding;
  int term, creditHours;
  float GPA;

  ofstream output;
  output.open("output.txt");
  
 inStudent.open("studentInfo.txt");
 if(inStudent.is_open())
 {

  inStudent >> term;
  
  for(int x= 0; x < term; x++)
  {
   stu.push_back(Student);
   
   stu[x].setLastName(getline(inStudent,stuLast));
   stu[x].setLastName(getline(inStudent,stuFirst));
   inStudent >> GPA;
   stu[x].setGPA(GPA);
   stu[x].setClassStanding(getline(inStudent,classStanding)));
   inStudent >> creditHours;
   stu[x].setCurCredit(creditHours);
   inStudent.ingore(1,'\n');
  


    output << stu[x].printInfo();
   }
 }
}

void fillCpscCourse(ifstream& in, vector <CpscCourse>& course) 
{

}
