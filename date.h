#ifndef DATE_IS_DEFINED
#define DATE_IS_DEFINED

#include <iostream>

class Date{
	protected:
		std::string date;
		int day;
		int month;
		int year;
	
	public:
		Date();
		void init(std::string date);
		void printDate();

}; //end class definition

#endif
