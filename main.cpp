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

	StudentActivist* anOrd_ = anOrd->makeActivist();
	StudentOrdinary* alAct_ = alAct->makeOrdinary();
	StudentBotanist* arOrd_ = arOrd->makeBotanist();

	groupA.addStudent(anOrd_);
	groupA.addStudent(arOrd_);
	groupA.addStudent(alAct_);

	std::cout << groupA;

	groupA.Exam();
	groupA.FinalExam();

	std::cout << groupA;

	delete anOrd, arOrd, naOrd, leBot, kaBot, efBot, seAct, alAct, elAct, anOrd_, alAct_, arOrd_;
	

	cin.get();
}