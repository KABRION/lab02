#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class StudentBotanist;
class StudentOrdinary;
class StudentActivist;

class Student
{
public:
	Student() {}

	Student(const string& firstName, const string& secondName, unsigned const age) 
		: firstName(firstName), secondName(secondName), age(age)
	{
		this->debtor = false;
		this->personalRating = 0;
	}


	StudentOrdinary* makeOrdinary();
	StudentActivist* makeActivist();
	StudentBotanist* makeBotanist();

	const string& getFirstName();
	const string& getSecondName();	
	unsigned getAge();

	void setFirstName(const string& firstName);
	void setSecondName(const string& secondName);
	void setAge(unsigned const age);

	void makeDebtor();
	void removeDebtor();
	bool isDebtor();	

	virtual int getGrades() = 0;

	virtual ~Student() {}

protected:
	string firstName;
	string secondName;
	int personalRating;
	unsigned age;
	bool debtor;
};