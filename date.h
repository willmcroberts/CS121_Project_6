// date.h
#ifndef DATE_H_EXISITS
#define DATE_H_EXISTS
#include <string>

class Date {
	protected:
		int day;
		int month;
		int year;
		std::string dateString;

	public:
		Date();
		void init(std::string dateString);
		void printDate();
}; // end class def

#endif
