// main.cpp

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "address.h"
#include "student.h"

void testAddress();
void testDate();
void testStudent();
void loadStudents(std::vector<Student*>&students);
void printStudents(std::vector<Student*>&students);
void showStudents(std::vector<Student*>&students);
void findStudents(std::vector<Student*>&students);
void delStudents(std::vector<Student*>&students);
std::string menu();

int main() {
	std::vector<Student*> students;
 	//testAddress();
 	//testDate();
 	//testStudent();
	std::string input;
	bool keepGoing = true;

	loadStudents(students);
	
	while (keepGoing) {
		input = menu();

		if (input == "0") {
			keepGoing = false;
		} else if (input == "1") {
			printStudents(students);
		} else if (input == "2") {
			showStudents(students);
		} else {
			findStudents(students);
		} // End elif statement
	} // End while loop
	
	delStudents(students);
	
 	return 0;
} // end main

void testAddress(){
  Address a;
  a.init("123 W Main St", "Muncie", "IN", "47303");
  a.printAddress();
} // end testAddress

void testDate(){
 Date d;
 d.init("01/27/1997");
 d.printDate();
} // end testDate

void testStudent(){
  std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
  Student* student = new Student();
  student->init(studentString);
  student->printStudent();
  std::cout << std::endl;
  std::cout << student->getLastFirst();
  delete student;
} // end testStudent

void loadStudents(std::vector<Student*>&students) {
	std::string filename = "students.csv";
	std::ifstream file(filename);
	std::string current;
	std::stringstream ss;

	while (getline(file, current)) {
		Student* student = new Student();
		student -> init(current);
		students.push_back(student);
	} // End while loop
	
	file.close();

} // End loadStudents

void printStudents(std::vector<Student*>&students) {
	for (auto &student: students) {
		student -> printStudent();
	} // End for loop
	std::cout << std::endl;
} // End printStudents

void showStudents(std::vector<Student*>&students) {
	for (auto &student: students) {
		std::cout << student -> getLastFirst() << " | " << student -> getCreditHours() << std::endl;
	} // End for loop
} // End showStudents

void findStudents(std::vector<Student*>&students) {
	std::string target;
	std::cout << "Enter last name: ";
	std::cin >> target;
	std::cout << std::endl;

	for (auto &student: students) {
		if (student -> getLastName().find(target) != std::string::npos) {
			student -> printStudent();
		} // End if statement
	} // End for loop
} // End findStudents

void delStudents(std::vector<Student*>&students) {
	for (auto &student: students) {
		delete student;
	} // End for loop
	students.clear();
} // End delStudents

std::string menu() {
	std::string input;
	std::cout << "=====================================================" << std::endl;
	std::cout << "0) Quit" << std::endl << "1) Student info" << std::endl << "2) Show Students" << std::endl << "3) Find Student" << std::endl;
	std::cout << "Enter option (0-3): ";
	std::cin >> input;
	std::cout << "=====================================================" << std::endl;
	
	return input;
} // End menu
