#ifndef ADDRESS_IS_DEFINED
#define ADDRESS_IS_DEFINED

#include <iostream>

class Address{
	protected:
		std::string streetAddress;
		std::string city;
		std::string state;
		std::string zip;

	public:
		Address();
		void init(std::string streetAddress, std::string city, std::string state, std::string zip);
		void printAddress();
}; //end class definition

#endif
