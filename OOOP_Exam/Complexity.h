#pragma once
class Complexity
{
public:
	int number;
	definedBy type;
	double get(int num) {
		switch (type) {
		case previous:
			return number * num;
			break;
		case time:
			return number * num;
			break;
		case run:
			return number * num;
			break;
		default:
			return num;
		}
	}

};
	enum definedBy {fixed, time, run, previous};