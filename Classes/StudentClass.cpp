#include <iostream>
using namespace std;


class Student {

    private:
        int StudentID;
    

    public:
        string Name;
        int RollNumber;
        char Section;
        
        // Getter for Name
        string GetName() {
            return Name;
        };

        // Getter for RollNumber
        int GetRollNumber() {
            return RollNumber;
        };

        // Getter for Section
        char GetSection() {
            return Section;
        };

        // Getter
        int GetStudentID() {
            return StudentID;
        };

        // Setter
        string SetName(string name) {
            return Name = name;
        };

        int SetRoll(int Roll) {
            return RollNumber = Roll;
        };

        char SetSection(char Sec) {
            return Section = Sec;
        };

        int SetStudentID (int id) {
            return StudentID = id;
        }
    
};