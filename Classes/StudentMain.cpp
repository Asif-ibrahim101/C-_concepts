#include <iostream>
#include "StudentClass.cpp";
using namespace std;

int main() {
    Student *stu = new Student; //Memory in heap

    string Name = "Asif";
    int Roll = 12124;
    char section = 'A';
    int studentId = 2104678;

    // Accessing the memory using pointers
    // setting the values using pointers
    stu->SetName(Name);
    stu->SetRoll(Roll);
    stu->SetSection(section);
    stu->SetStudentID(studentId);

    cout << "Student Details:" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Student ID: " << stu->GetStudentID() << endl;
    cout << "Name: " << stu->GetName() << endl;
    cout << "Roll: " << stu->GetRollNumber() << endl;
    cout << "Section: " << stu->GetSection() << endl;

    delete stu; // Don't forget to free the allocated memory

}