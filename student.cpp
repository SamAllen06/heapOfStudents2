#include <iostream>
#include <sstream>
#include "student.h"
#include "address.h"
#include"date.h"

Student::Student(){
	std::string studentString = "";
	std::string lName = "";
	std::string fName = "";
	birthDate = new Date();
	expectedGrad = new Date();
	address = new Address();
	int credits = 0;
} //end constructor definition

Student::~Student(){
	delete birthDate;
	delete expectedGrad;
	delete address;
} //end destructor definition

void Student::init(std::string studentString){
	Student::studentString = studentString;
	std::string streetAddress = "";
	std::string city = "";
	std::string state = "";
	std::string zip = "";
	std::string dob = "";
	std::string grad = "";
	std::string stringCredits = "";
	std::stringstream converter;

	converter.clear();
	converter.str("");

	converter.str(Student::studentString);
	getline(converter, Student::fName, ',');
	getline(converter, Student::lName, ',');
	getline(converter, streetAddress, ',');
	getline(converter, city, ',');
	getline(converter, state, ',');
	getline(converter, zip, ',');
	getline(converter, dob, ',');
	getline(converter, grad, ',');
	getline(converter, stringCredits, ',');
	
	converter.clear();
	converter.str("");
	
	birthDate->init(dob);
	expectedGrad->init(grad);
	address->init(streetAddress, city, state, zip);
	
	converter << stringCredits;
	converter >> Student::credits;
} //end initializer

void Student::printStudent(){
	std::cout << Student::fName << " " << Student::lName << std::endl;
	address->printAddress();
	std::cout << "DOB: ";
	birthDate->printDate();
	std::cout << "Grad: ";
	expectedGrad->printDate();
	std::cout << "Credits: " << Student::credits << std::endl;
} //end printStudent

std::string Student::getLastFirst(){
	std::string lastFirst = Student::lName + ", " + Student::fName;
	return lastFirst;
} //end getLastFirst

std::string Student::getLast(){
	return lName;
} //end getLast
