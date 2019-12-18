#pragma once
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

class StudentOrdinary : public Student
{
public:
	StudentOrdinary() {}

	StudentOrdinary(const string& firstName, const string& secondName, unsigned const age);

	int getGrades() override;

	virtual ~StudentOrdinary() {}
};