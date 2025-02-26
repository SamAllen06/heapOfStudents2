#include "date.h"
#include <iostream>
#include <sstream>

Date::Date(){
	Date::date = "";
	Date::day = 0;
	Date::month = 0;
	Date::year = 0;
} //end constructor definition

void Date::init(std::string date){
	Date::date = date;
	std::string sDay;
	std::string sMonth;
	std::string sYear;
	std::stringstream converter;
	
	converter.clear();
	converter.str("");
	
	converter.str(Date::date);
	getline(converter, sMonth, '/');
	getline(converter, sDay, '/');
	getline(converter, sYear, '/');
	
	converter.clear();
	converter.str("");

	converter << sMonth << " " << sDay << " " << sYear;
	converter >> Date::month >> Date::day >> Date::year;
} //end initializer definition

void Date::printDate(){
	std::string months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	std::cout << months[Date::month] << " "  << Date::day << ", " << Date::year<< std::endl;
} //end printDate definition
