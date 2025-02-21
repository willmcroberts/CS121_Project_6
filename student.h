// student.h
#ifndef STUDNET_H_EXISITS
#define STUDENT_H_EXISITS
#include <string>
#include "date.h"
#include "address.h"

class Student {
	protected:
		std::string studentString;
		std::string fName;
		std::string lName;
		Date* dob;
		Date* expectedGrad;
		Address* address;
		int creditHours;
	public:
		Student();
		~Student();
		void init(std::string studentString);
		void printStudent();
		std::string getLastFirst();
		std::string getFirstName();
		std::string getLastName();
		int getCreditHours();
}; // End class def

#endif
