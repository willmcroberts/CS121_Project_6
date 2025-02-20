// date.cpp

#include <iostream>
#include <sstream>
#include "date.h"

Date::Date() {
	Date::day = 0;
	Date::month = 0;
	Date::year = 0;
	Date::dateString = "0/0/0000";
} // End consturctor

void Date::init(std::string dateString) {
	Date::dateString = dateString;
	std::stringstream ss;
	std::string sDay;
	std::string sMonth;
	std::string sYear;
	int nMonth;

	ss.clear();
	ss.str(dateString);

	getline(ss, sMonth, '/');
	getline(ss, sDay, '/');
	getline(ss, sYear);

	std::string months[13] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	nMonth = std::stoi(sMonth);
        sMonth = months[nMonth];

	std::stringstream formDate;
	formDate << sDay << " " << sMonth << ", " << sYear;

	Date::dateString = formDate.str();
} // end init

void Date::printDate() {
	std::cout << "Date: " <<  Date::dateString << std::endl;
} // end printDate
