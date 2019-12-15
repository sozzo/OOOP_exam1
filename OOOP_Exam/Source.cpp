#include <iostream>
#include "Defect.h"
#include <random>
using namespace std;
int main() {
	//Я знаю, що код об'єктивно поганий - але я зараз не можу написати кращий. Хоча, впринципі - міг би. 
	//Реалізовано структуру(не дуже добре, але все ж) і, якщо я встигну, вказані у завданні алгоритми(які треба переробити)
	//знизу наведено код, який демонструє логіку роботи програми у її готовому вигляді(але з погано написаним кодом)
	Car a89;
	a89.model = "m6";
	a89.manufacturer = "BMW";
	a89.productionYear = 1998;
	int run = 10000;
	Complexity motorRepairComplexity;
	motorRepairComplexity.type = fixed;
	motorRepairComplexity.number = 3;
	Defect motorDefect;
	motorDefect.timeToFixModifier = 7;
	motorDefect.costToFixModifier = 1000;
	motorDefect.rewriteComplexity(motorRepairComplexity.type);
	motorDefect.obj = &a89;
}