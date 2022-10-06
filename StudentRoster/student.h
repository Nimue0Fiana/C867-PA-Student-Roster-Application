#ifndef STUDENTH
#define STUDENTH

#include "degree.h"

class Student {
public:
    //Constructors here...
    Student();
    Student(string newStudentID, string newFirstName, string newLastName, string newEmail, int newAge, int numOfDays[], DegreeProgram newDegreeProgram);

    //Accessors here...
    string GetStudentID();
    string GetFirstName();
    string GetLastName();
    string GetEmailAddress();
    int GetAge();
    int* GetDaysToCompleteCourse();
    DegreeProgram GetDegreeProgram();
    
    //Mutators here...
    void SetStudentID(string newStudentID);
    void SetFirstName(string newFirstName);
    void SetLastName(string newLastName);
    void SetEmailAddress(string newEmail);
    void SetAge(int newAge);
    void SetDaysToCompleteCourse(int numOfDays[]); //may need a pointer instead of int inputs
    void SetDegreeProgram(DegreeProgram newDegreeProgram);

    //print info here...
    void PrintStudentInfo() const;

private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToCompleteCourse[3];
    int* daysToCompleteCoursePtr;
    DegreeProgram degreeProgram;
};

#endif