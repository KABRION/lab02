#include "StudentGroup.h"

StudentGroup::~StudentGroup()
{
}

void StudentGroup::FinalExam()
{
	for (auto it = studentsList.begin(); it != studentsList.end(); ++it)
	{
		if ((*it)->isDebtor())
		{
			int score = (*it)->getGrades();
			(*it)->removeDebtor();

			if (score <= 2)
				deleteStudent(*it);
		}
	}

	
}

void StudentGroup::Exam
()
{
	for (auto it = studentsList.begin(); it != studentsList.end(); ++it)
	{
		int score = (*it)->getGrades();
		if (score <= 2)
		{
			(*it)->makeDebtor();
			
		}
	}
		

}

Student* StudentGroup::getStudent(const std::string& firstName, const std::string& secondName)
{
	for (auto& i : studentsList)
		if ((i->getFirstName() == firstName) && (i->getSecondName() == secondName))
			return i;

	return nullptr;
}

const std::string& StudentGroup::getGroupName()
{
	return groupName;
}

unsigned int StudentGroup::getGroupID()
{
	return groupID;
}

size_t StudentGroup::getStudentsCount()
{
	return studentsList.size();
}

void StudentGroup::addStudent(Student* student)
{
	if (studentsList.size() >= 20)
		return;

	studentsList.push_back(student);
}

void StudentGroup::deleteStudent(Student* student)
{
	for (auto it = studentsList.begin(); it != studentsList.end(); ++it)
	{
		if (*it == student)
		{
			studentsList.erase(it);
			return;
		}
	}
}

const std::vector<Student*>& StudentGroup::getStudentsList()
{
	return studentsList;
}

std::ostream& operator<<(std::ostream& out, StudentGroup& listOfGroup)
{
	std::vector<Student*> students = listOfGroup.getStudentsList();
	out << "\n  ======= Group: " << listOfGroup.getGroupName() << " [" <<  listOfGroup.getGroupID() << "]"  << " =======" << std::endl;;

	int i = 0;
	for (auto it = students.begin(); it != students.end(); it++)
	{
		i++;
		out  << "   [" << i << "]" << setw(15) << (*it)->getSecondName() << " " << (*it)->getFirstName() <<  std::endl;;
	}
	return out;
	

}