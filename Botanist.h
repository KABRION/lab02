#pragma once
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

class StudentBotanist :public Student
{
public:
	StudentBotanist(const string& firstName, const string& secondName, unsigned const age);

	int getGrades() override;

	virtual ~StudentBotanist();
};