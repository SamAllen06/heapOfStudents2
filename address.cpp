#include <iostream>
#include "address.h"

Address::Address(){
	Address::streetAddress = "";
	Address::city = "";
	Address::state = "";
	Address::zip = "";
} //end Address constructor definition

void Address::init(std::string streetAddress, std::string city, std::string state, std::string zip){
	Address::streetAddress = streetAddress;
	Address::city = city;
	Address::state = state;
	Address::zip = zip;
} //end init definition

void Address::printAddress(){
	std::cout << Address::streetAddress << std::endl << Address::city << " " << Address::state << ", " << Address::zip << std::endl;
} //end printAddress definition
