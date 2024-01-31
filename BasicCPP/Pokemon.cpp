#include "Pokemon.h"
#include <iostream>
#include <string>


Pokemon::Pokemon() {
	name = "Evy";
	description = "description";
	pvs = 10;
}
Pokemon::Pokemon(std::string pName) {
	name = pName;
	description = "description";
	pvs = 10;
}
Pokemon::Pokemon(std::string pName, std::string pDescription, int pPvs) {
	name = pName;
	description = pDescription;
	pvs = pPvs;
}

Pokemon::~Pokemon(){}

std::string Pokemon::GetName() { return name; }
std::string Pokemon::GetDescription() { return description; }
int Pokemon::getPvs() { return pvs; }
