#pragma once
#include "Ordinary.h"

class StudentActivist : public StudentOrdinary
{
public:

	StudentActivist(const string& firstName, const string& secondName, unsigned const age);

	int getGrades() override;

	virtual ~StudentActivist();
};
