// address.h
#ifndef ADDRESS_H_EXISITS
#define ADDRESS_H_EXISITS
#include <string>

class Address {
	protected:
		std::string city;
		std::string state;
		std::string zip;
		std::string street;

	public:
		Address();
		void init(std::string street, std::string city, std::string state, std::string zip);
		void printAddress();

}; // end class definition

#endif
