#pragma once
#include "Defect.h";
#include <vector>
class Car
{
public:
	string model;
	string manufacturer;
	vector<PreviousDefect> PreviousDefects;
	int productionYear;
	int run;
};
struct PreviousDefect {
	Defect fault;
	int occured;
	int fixed;
};
