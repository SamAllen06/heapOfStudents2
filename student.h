#ifndef STUDENT_IS_DEFINED
#define STUDENT_IS_DEFINED

#include <iostream>
#include "address.h"
#include "date.h"

class Student{
	protected:
		std::string studentString;
		std::string lName;
		std::string fName;
		Date* birthDate;
		Date* expectedGrad;
		Address* address;
		int credits;
	
	public:
		Student();
		~Student();
		void init(std::string studentString);
		void printStudent();
		std::string getLastFirst();


}; //end class definition

#endif
