#pragma once
#include <iostream> 
#include <string>

class Pokemon
{
private:
	std::string name;
	std::string description;
	int pvs;

public:
	Pokemon();
	Pokemon(std::string name);
	Pokemon(std::string name, std::string description, int pvs);
	~Pokemon();
	std::string GetName();
	std::string GetDescription();
	int getPvs();
};

