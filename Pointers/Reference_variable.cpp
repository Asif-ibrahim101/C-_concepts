#include <iostream>
using namespace std;

int incrementRef(int &num) {
   return num = num + 1;
}

int increment(int num) {
   cout << "Inside increment function, before increment: " << num << endl;
   return num = num + 1;
}

int main() {
    int number = 10;

    cout << "Before the function calls:" << endl;
    cout << "number: " << number << endl;

    cout << "Calling increment (pass by value):" << endl;
    cout << "Returned value: " << increment(number) << endl;
    cout << "number after increment (pass by value): " << number << endl;

    cout << "Calling incrementRef (pass by reference):" << endl;
    cout << "Returned value: " << incrementRef(number) << endl;
    cout << "number after incrementRef (pass by reference): " << number << endl;

    return 0;
}