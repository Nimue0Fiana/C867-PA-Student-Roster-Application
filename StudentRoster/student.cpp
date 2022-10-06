#include <iostream>
#include <string>
using namespace std;

#include "student.h"

//Constructors here...
Student::Student() {
	studentID = "";
	firstName = "";
	lastName = "";
	emailAddress = "";
	age = 0;
	daysToCompleteCourse[0] = 0; //is there a better way to assign these?
	daysToCompleteCourse[1] = 0;
	daysToCompleteCourse[2] = 0;
	degreeProgram = DegreeProgram::SECURITY;
}
Student::Student(string newStudentID, string newFirstName, string newLastName, string newEmail, int newAge, int numOfDays[], DegreeProgram newDegreeProgram) {
	studentID = newStudentID;
	firstName = newFirstName;
	lastName = newLastName;
	emailAddress = newEmail;
	for (unsigned int i = 0; i < 3; i++) {
		daysToCompleteCourse[i] = numOfDays[i];
	}
	degreeProgram = newDegreeProgram;
}

//Accessors here...
string Student::GetStudentID(){
	return studentID;
}
string Student::GetFirstName(){
	return firstName;
}
string Student::GetLastName(){
	return lastName;
}
string Student::GetEmailAddress(){
	return emailAddress;
}
int Student::GetAge(){
	return age;
}
int* Student::GetDaysToCompleteCourse(){
	return daysToCompleteCoursePtr; //TODO set daysToCompleteCoursePtr = &daysToCompleteCourse; do this in StudentConstructor? nullptr for default?
}
DegreeProgram Student::GetDegreeProgram(){
	return degreeProgram;
}

//Mutators here...
void Student::SetStudentID(string newStudentID) {
	studentID = newStudentID;
}
void Student::SetFirstName(string newFirstName) {
	firstName = newFirstName;
}
void Student::SetLastName(string newLastName) {
	lastName = newLastName;
}
void Student::SetEmailAddress(string newEmail) {
	emailAddress = newEmail;
}
void Student::SetAge(int newAge) {
	age = newAge;
}
void Student::SetDaysToCompleteCourse(int days1, int days2, int days3) { //may need a pointer instead of int inputs
	daysToCompleteCourse[0] = days1;
	daysToCompleteCourse[1] = days2;
	daysToCompleteCourse[2] = days3;
}
void Student::SetDegreeProgram(DegreeProgram newDegreeProgram) {
	degreeProgram = newDegreeProgram;
}

//Print info here...
void Student::PrintStudentInfo() const {
	cout << studentID << endl;
	cout << firstName << " " << lastName << endl;
	cout << emailAddress << endl;
	cout << age << endl;
	for (unsigned int i = 0; i < 3; i++) {
		cout << daysToCompleteCourse[i] << " ";
	}
	cout << endl;
	cout << (int)degreeProgram << ' ' << degreeProgramStrings[(int)degreeProgram] << endl;
}