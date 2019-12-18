#include "Ordinary.h"
#include "Student.h"
#include <ctime>
#include <cstdlib>

StudentOrdinary::StudentOrdinary(const string& firstName, const string& secondName, unsigned const age)
{
	this->firstName = firstName;
	this->secondName = secondName;
	this->age = age;
	this->personalRating = 0;
	this->debtor = false;
}

int StudentOrdinary::getGrades()
{
	srand(time(NULL));
	return 1 + rand() % (5 - 1);
}