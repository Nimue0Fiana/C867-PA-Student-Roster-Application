#include <iostream>
#include <string>
#include "roster.h"
#include "student.h"
using namespace std;


int main()
{
    const string studentData[] =

    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Audrey,Waller,abens15@wgu.edu,32,30,14,21,SOFTWARE"
    };

    cout << "Course Title: C867:Scripting & Programming - Applications" << endl;
    cout << "Language: C++" << endl;
    cout << "Student ID: 000657307" << endl;
    cout << "Audrey Waller" << endl;

    Roster classRoster;
//    classRoster.parse(studentData[0]);
//    classRoster.parse(studentData[1]);
//    classRoster.parse(studentData[2]);
//    classRoster.parse(studentData[3]);
//    classRoster.parse(studentData[4]);
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
