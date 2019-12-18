#include "Activist.h"
#include <ctime>
#include <cstdlib>

StudentActivist::StudentActivist(const string& firstName, const string& secondName, unsigned const age)
{
	this->firstName = firstName;
	this->secondName = secondName;
	this->age = age;
	this->personalRating = 0;
	this->debtor = false;
}

int StudentActivist::getGrades()
{
	srand(time(NULL));
	if (isDebtor())
	{
		return 3 + rand() % (6 - 2);
	}
	else
	{
		return 1 + rand() % (6 - 3);
	}
}



StudentActivist::~StudentActivist()
{
}