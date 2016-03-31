class Person {
	private:
		string firstName;
		string lastName;

	public:
		/*constructors and destructors*/
		Person();
		Person(string, string);
		~Person();
		
		/*setters and getters*/
		void setFirstName(string firstn);
		void setLastName(string lastn);
		string getFirstName();
		string getLastName();

		/*Member Functions (Methods)*/
		void printPInfo();
};

