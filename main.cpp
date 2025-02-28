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
void menu();

int main(){
  std::cout << "Hello!" << std::endl;
  testAddress();
  testDate();
  testStudent();
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


void findStudents(std::vector<Student*>&students) {
	std::string target;
	bool notFounf = true;
	std::cout << "List of students: ";
	getline(std::cin, target);
	for (Students* s: student) {
		std::string lName = s->getLastName();
		if (lName.find(target) //here
	} // End for loop
} // End finStudents
