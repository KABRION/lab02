#include <iostream>
#include "Student.h"
#include "Activist.h"
#include "Botanist.h"
#include "Ordinary.h"
#include "StudentGroup.h"

using namespace std;

int main()
{
	StudentGroup groupA = { "Network", 1 };

	StudentOrdinary* anOrd = new StudentOrdinary("Andrey", "Miklashevsky", 22);
	StudentOrdinary* arOrd = new StudentOrdinary("Artem", "Korotkov", 24);
	StudentOrdinary* naOrd = new StudentOrdinary("Nastya", "Alekseeva", 25);

	StudentBotanist* leBot = new StudentBotanist("Lex", "Sofronov", 20);
	StudentBotanist* kaBot = new StudentBotanist("Katya", "Ivanova", 18);
	StudentBotanist* efBot = new StudentBotanist("Efrem", "Bezrukov", 18);

	StudentActivist* seAct = new StudentActivist("Sergey", "Vinogradov", 23);
	StudentActivist* alAct = new StudentActivist("Alex", "Sidorov", 24);
	StudentActivist* elAct = new StudentActivist("Elisei", "Parfenov", 24);

	groupA.addStudent(anOrd);
	groupA.addStudent(arOrd);	
	groupA.addStudent(naOrd);

	groupA.addStudent(leBot);
	groupA.addStudent(kaBot);
	groupA.addStudent(efBot);	

	groupA.addStudent(seAct);
	groupA.addStudent(alAct);
	groupA.addStudent(elAct);

	std::cout << groupA;

	StudentActivist* anAct_ = anOrd->makeActivist();
	StudentOrdinary* alOrd_ = alAct->makeOrdinary();
	StudentBotanist* arBot_ = arOrd->makeBotanist();

	groupA.addStudent(anAct_);
	groupA.addStudent(arBot_);
	groupA.addStudent(alOrd_);

	std::cout << groupA;

	groupA.Exam();
	groupA.FinalExam();

	std::cout << groupA;

	delete anOrd, arOrd, naOrd, leBot, kaBot, efBot, seAct, alAct, elAct, anAct_, alOrd_, arBot_;
	

	cin.get();
}