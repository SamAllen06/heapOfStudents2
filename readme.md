pseudocode

main
	create a vector on the heap for the Student pointers
	call loadStudents to fill the vector
	set keepGoing to TRUE
	start a while loop using keepGoing
		userChoice gets what menu() returns
		if userChoice is equal to "0"
			print "goodbye"
			call delStudents to delete the vector
			keepGoing gets False
		elseif userChoice is equal to "1"
			call printStudentNames(students vector)
		elseif userChoice is equal to "2"
			call printStudents(students vector)
		elseif userChoice is equal to "3"
			call searchStudents(students vector)
		else
			print "that's not a valid option"
	
string menu()
	print "Choose an option: 0: quit, 1: print all student names, 2: print all student data, 3: find a student, please choose 0-3: "
	take in the student's response as userChoice
	return userChoice
	

void loadStudents(students vector)
	open the students.csv file
	start a while loop using getline
		for each line, make a Student instance on the heap
		call initializer with string from csv file
		append that instance to the vector
	close the file

void printStudents(students vector)
	start a for loop using the number of items in the student vector
		call printStudent() for each item

void printStudentNames(students vector)
	start a for loop using the number of items in the student vector
		print getLastFirst() for each item

void searchStudents(students vector)
	print "Enter last name: "
	put response in searchQuery
	start a for loop using the number of items in the student vector
		use getLast() function to get the last name
		if lastName.find(searchQuery) is not equal to std::string::npos
			print getLastFirst() for that student

void delStudents(students vector)
	start a for loop for the number of items in the student vector
		delete the item
	delete the vector
