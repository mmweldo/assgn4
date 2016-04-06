#ifndef CPSCCOURSE_H
#define CPSCCOURSE_H

#include <string>
using namespace std;

/*This class holds the information about the cpsc courses*/
class CpscCourse {
	private:
		string courseName;
		int courseNum;
		int courseSect;
		int availSeats; //available seats
		int openSeats;

	public:
		/*Constructors*/
		//Default Constructor
		CpscCourse();

		//Parameterized Constructor
		CpscCourse(string cName, int cNum, int cSect, int aSeats, int oSeats);

		/*Destructors*/
		~CpscCourse();

		/*Setters*/
		void setCourseName(string cName);
		void setCourseNum(int cNum);
		void setCourseSect(int cSect);
		void setAvailSeats(int aSeats);
		void setOpenSeats(int oSeats);

		/*Getters*/
		string getCourseName();
		int getCourseNum();
		int getCourseSect();
		int getAvailSeats();
		int getOpenSeats();

		/*Member Functions (Methods)*/
		void printInfo();
		//static int courseID;
};

#endif
