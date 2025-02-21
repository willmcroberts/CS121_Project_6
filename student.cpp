// student.cpp
#include <iostream>
#include <sstream>
#include "student.h"
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

Student::~Student() {
	delete dob;
	delete expectedGrad;
	delete address;
} // End deconstructor

void Student::init(std::string studentString) {
	Student::studentString = studentString;

	std::stringstream ss;
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	std::string dobString;
	std::string expectedGradString;
	std::string creditHoursString;

	ss.clear();
	ss.str(studentString);

	getline(ss, fName, ',');
	getline(ss, lName, ',');
	getline(ss, street, ',');
	getline(ss, city, ',');
	getline(ss, state, ',');
	getline(ss, zip, ',');
	getline(ss, dobString, ',');
	getline(ss, expectedGradString, ',');
	getline(ss, creditHoursString, ',');

	ss.clear();
	ss.str("");

	address->init(street, city, state, zip);
	dob->init(dobString);
	expectedGrad->init(expectedGradString);

	Student::creditHours = stoi(creditHoursString);

} // End init

void Student::printStudent() {
	std::cout << fName << " " << lName << std::endl;
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
