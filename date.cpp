// date.cpp

#include <iostream>
#include "date.h"

Date::Date {
	Date::day = 0;
	Date::month = 0;
	Date::year = 0;
	Date::std::sting dateString = "";
} // End consturctor

void Date::init(std::string dateString) {
	Date::std::string dateString = dateString
} // end init

void Date::printDate() {
	std::string months[13] = {"", "January", "February", "March", "Apirl", "May", "June", "July", "August", "September", "October", "November", "December"};
	std::string day = std::to_string(Date::day);
	std::string year = std::to_string(Date::year);

	// make int day turn into a month from array
} // end printDate
