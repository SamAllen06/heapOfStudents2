#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include "student.h"
#include "date.h"
#include "address.h"

std::string menu();
void loadStudents(std::vector<Student>& students);
void printStudents(std::vector<Student>& students);
void printStudentNames(std::vector<Student>& students);
void searchStudents(std::vector<Student>& students);
void delStudents(std::vector<Student>& students);

int main(){
	bool keepGoing = true;
	std::string userChoice = "";
	
	std::vector<Student> students = {};
	loadStudents(students);
	
	while (keepGoing){
		userChoice = menu();
		if (userChoice == "0"){
			std::cout << "Goodbye!" << std::endl;
			delStudents(students);
			keepGoing = false;
		} //end if statement
		else if (userChoice == "1"){
			printStudentNames(students);
		} //end else if statement
		else if (userChoice == "2"){
			printStudents(students);
		} //end else if statement
		else if (userChoice == "3"){
			searchStudents(students);
		} //end else if statement
		else{
			std::cout << "Sorry, that's not a valid option! Try again please. " << std::endl;
		} //end else statement
	} //end while loop

	return 0;
} //end main

std::string menu(){
	std::string userChoice = "";

	std::cout << "O: Quit" << std::endl << "1: Print all student names" << std::endl << "2: Print all student data" << std::endl << "3: find a student" << std::endl << "Please choose 0-3: ";
	std::cin.clear();
	std::cin >> userChoice;
	std::cout << userChoice; //for testing purposes
	
	return userChoice;
} //end menu definition

void loadStudents(std::vector<Student> students){
	std::ifstream inFile;
	std::string studentLine;
	inFile.open("students.csv");

	while (getline(inFile, studentLine)){
		Student* student = new Student();
		student->init(studentLine);

		students.push_back(student);
	} //end while loop
	inFile.close();
} //end loadStudents definition

void printStudents(std::vector<Student> students){
	int i;
	for (i = 0; i < students.size(); i++){
		students[i]->printStudent();
	} //end for loop
} //end printStudents definition

void printStudentNames(std::vector<Student> students){
	int i;
	for (i = 0; i < students.size(); i++){
		std::cout << students[i]->getLastFirst() << std::endl;
	} //end for loop
} //end printStudentNames definition

void searchStudents(std::vector<Student> students){
	std::string searchQuery = "";
	int results = 0;
	int i;

	std::cout << "Enter last name: ";
	std::cin.clear();
	std::cin >> searchQuery;

	for (i = 0; i < students.size(); i++){
		if (lastName.find(searchQuery) != std::string::npos){
			std::cout << students[i]->getLast() << std::endl;
			results++;
		} //end if statement
	} //end for loop
	if (results == 0){
		std::cout << "No results, sorry" << std::endl;
	} //end if statement	
} //end searchStudents definition

void delStudents(std::vector<Student> students){
	int i;

	for (i = 0; i < students.size(); i++){
		delete students[i];
	} //end for loop
} //end delStudents definition
