#pragma once
#include <string.h>
#include <iostream>
#include "complexity.h"
#include "car.h"
using namespace std;
class Defect
{
public:
	Car* obj;
	string defectName;
	Complexity type;
	double timeToFix;
	double timeToFixModifier;
	int costToFix;
	int costToFixModifier;

	void rewriteComplexity(int a) {
		timeToFix = this->type.get(a)*timeToFixModifier;
		costToFix = this->type.get(a)*costToFixModifier;
	}

};

