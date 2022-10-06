#include <iostream>
#include <string>
using namespace std;

#include "roster.h"

void Roster::add(string newStudentID, string newFirstName, string newLastName, string newEmail, int newAge, int days1, int days2, int days3, DegreeProgram newDegreeProgram) {
	Student* newStudent = new Student(newStudentID, newFirstName, newLastName, newEmail, newAge, days1, days2, days3, newDegreeProgram); //new requires deleting
	//this->classRosterArray[0] = newStudent;
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i] == nullptr) {
			classRosterArray[i] = newStudent;
			break;
		}
	}
}

//check each new studentID for the ID being removed. If it isn't found print an error
//void Roster::remove(string departingStudentID) {
	//for (int i = 0; i < 5; i++) {
		//if (classRosterArray[i].GetStudentID(departingStudentID) ) {
			//delete this->classRosterArray[i]; //release permission
			//this->classRosterArray[i] = nullptr; //remove pointer we no longer have permission to
			//break;
		//}
	//}
//}

void Roster::parse(string row) {
	//reads in string newStudentID, string newFirstName, string newLastName,
	//string newEmail, int newAge, int days1, int days2, int days3, DegreeProgram newDegreeProgram
	size_t rightIndex = row.find(",");
	string newStudentID = row.substr(0, rightIndex);

	size_t leftIndex = rightIndex + 1;
	rightIndex = row.find(",", leftIndex);
	string newFirstName = row.substr(leftIndex, rightIndex - leftIndex);

	leftIndex = rightIndex + 1;
	rightIndex = row.find(",", leftIndex);
	string newLastName = row.substr(leftIndex, rightIndex - leftIndex);

	leftIndex = rightIndex + 1;
	rightIndex = row.find(",", leftIndex);
	string newEmail = row.substr(leftIndex, rightIndex - leftIndex);

	leftIndex = rightIndex + 1;
	rightIndex = row.find(",", leftIndex);
	int newAge = stoi(row.substr(leftIndex, rightIndex - leftIndex));

	leftIndex = rightIndex + 1;
	rightIndex = row.find(",", leftIndex);
	int days1 = stoi(row.substr(leftIndex, rightIndex - leftIndex));

	leftIndex = rightIndex + 1;
	rightIndex = row.find(",", leftIndex);
	int days2 = stoi(row.substr(leftIndex, rightIndex - leftIndex));

	leftIndex = rightIndex + 1;
	rightIndex = row.find(",", leftIndex);
	int days3 = stoi(row.substr(leftIndex, rightIndex - leftIndex));

	leftIndex = rightIndex + 1;
	rightIndex = row.find(",", leftIndex);
	string strDegree = row.substr(leftIndex, rightIndex - leftIndex);

	DegreeProgram newDegreeProgram = DegreeProgram::SECURITY;
	if (strDegree == "NETWORK") {
		newDegreeProgram = DegreeProgram::NETWORK;
	}
	else if (strDegree == "SOFTWARE") {
		newDegreeProgram = DegreeProgram::SOFTWARE;
	}
	this->add(newStudentID, newFirstName, newLastName, newEmail, newAge, days1, days2, days3, newDegreeProgram);
}

