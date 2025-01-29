#include <iostream>
using namespace std;

class Vehical {

    private:
        int NumberPlate;
        string OwnerName;

    public:
        string Name;
        char Model;
    

    // using Getters
    int GetPlate() {
        return NumberPlate;
    }

    string GetOwner() {
        return OwnerName;
    }

    // using setter
    char SetModel(char name) {
       return Model = name;
    };

    string SetCarName(string name) {
       return Name = name;
    };

    int SetNumberPlate(int num) {
        return NumberPlate = num;
    };

    string SetOwner(string owner) {
        return OwnerName = owner;
    }

};