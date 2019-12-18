#pragma once
#include "Student.h"
#include <string>
#include <vector>



class StudentGroup
{
public:
	StudentGroup(const string& groupName, unsigned groupID) :
		groupName(groupName), groupID(groupID) {}

	Student* getStudent(const string& firstName, const string& secondName);

	const string& getGroupName();
	unsigned int getGroupID();
	size_t getStudentsCount();

	void Exam();
	void FinalExam();
	void addStudent(Student* student);
	void deleteStudent(Student* student);

	const vector<Student*>& getStudentsList();

	virtual ~StudentGroup();

private:
	string groupName;
	unsigned int groupID;

	
	

	vector <Student*> studentsList;
};

ostream& operator<< (ostream& out, StudentGroup& listOfGroup);