// student.cpp
#include <iostream>
#include "student.h"
#include "date.h"
#include "address.h"

Student::Student() {
	studentString = "";
	fName = "";
	lName = "";
	dob = new Date();
	expectedGrad = new Date();
	address = new Address();
	creditHours = 0;
} // End constructor

Student::Student(std::string studentString) {
	Student::init(studentString);
}

Student::~Student() {
	delete dob;
	delete expectedGrad;
	delete address;
} // End deconstructor

void Student::init(std::string studentString) {
	Student::studentString = studentString;

} // End init

void Student::printStudent() {
	std::cout << "Student: " << fName << " " << lName << std::endl;
	address -> printAddress();

	std::cout << "DOB: ";
	dob -> printDate();
	std::cout << "Grad: ";
	expectedGrad -> printDate();

	std::cout << "Credits: " << creditHours << std::endl;
	std::cout << "_____________________________________________" << std::endl;

} // End printStudent

std::string Student::getLastFirst() {
	std::stringstream ss;
	ss.clear();
	ss << lName << ", " << fName;
	return ss.str();
} // End getLastFirst

std::string Student::getFirstName() {
	return fName;
} // End getFirstName

std::string Student::getLastName() {
	return lName;
} // End getLastName

int Student::getCreditHours() {
	return creditHours;
} // End getCreditHours
