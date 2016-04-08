#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person {
	private:
		string firstName;
		string lastName;

	public:
		/*constructors and destructors*/
		Person();
		Person(string first, string last);
		~Person();
		
		/*setters and getters*/
		void setFirstName(string firstn);
		void setLastName(string lastn);
		string getFirstName();
		string getLastName();

		/*Member Functions (Methods)*/
		void printPInfo();
};
#endif