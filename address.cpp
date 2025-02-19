// address.cpp

#include <iostream>
#include "address.h"

Address::Address() {
	Address::city = "";
	Address::state = "";
	Address::zip = "";
	Address::street = "";
} // End constructor

void Address::init(std::string street, std::string city, std::string state, std::string zip) {
	Address::street = street;
	Address::city = city;
	Address::state = state;
	Address::zip = zip;
} // End init

void Address::printAddress() {
	std::cout << "Address: " << street << ", " << city << ", " << state << ", " << zip << std::endl;
} // End printAddress
