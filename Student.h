#ifndef STUDENT_H
#define STUDENT_H

class Student : public Person {
	private:
		/*Student's GPA*/
		float GPA;
		/*What class is the students in (Freshman, Sophomore, Junior, Senior)*/
		string classStanding;
		int maxCredit;
		int curCredit;

	public:
		/*constructors and destructors*/
		Student();
		Student(string fName, string lName, float sgpa, string sclass, 
			    int smaxCredit, int scurCredit);
		~Student();

		/*setters and getters*/
		void setGPA(float gpa);
		void setClassStanding(string classStanding);
		void setCurCredit(int credit);
		float getGPA();
		string getClassStanding();
		int getCurCredit();

		/*Member Functions (Methods)*/
		/*What is the maximum credit hours a student can take?
		  If a student is a first semester Freshman they can only take 15 credit 
		  hours.  Any student (this includes 2nd semester freshman) with a gpa 
		  < 2.5 can take no more than 12 hours. If they are a sophomore, juniors, 
		  or seniors with a gpa >= 2.5 they can take up to 18 hours. */
		int getMaxCredit(float g, string c);//gpa and classStanding		

		void printInfo();

};

#endif