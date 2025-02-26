#include <iostream>
#include <sstream>
#include <fstream>

std::string menu();
void loadStudents(students);
void printStudents(students);
void printStudentNames(students);
void searchStudents(students);
void delStudents(students);

int main{
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

void loadStudents(students){
	int studentNum = 0;
	
	std::ofstream outFile;
	outFile.open("students.csv");

	while (getline(outFile, studentLine)){
		Student* student.studentNum = new Student();

		students.push_back(student.studentNum);

		studentNum++;
	} //end while loop
} //end loadStudents definition

void printStudents(students){
	
} //end printStudents definition

void printStudentNames(students){
	
} //end printStudentNames definition

void searchStudents(students){
	
} //end searchStudents definition

void delStudents(students){
	
} //end delStudents definition
