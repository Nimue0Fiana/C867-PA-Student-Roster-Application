#ifndef ROSTERH
#define ROSTERH

#include "student.h"

class Roster {
public:
	void parse(string row);
	void add(string newStudentID, string newFirstName, string newLastName, string newEmail, int newAge, int days1, int days2, int days3, DegreeProgram newDegreeProgram);
	//void remove(string departingStudentID);

private:
	Student* classRosterArray[5] = {nullptr, nullptr, nullptr, nullptr, nullptr};
};

#endif