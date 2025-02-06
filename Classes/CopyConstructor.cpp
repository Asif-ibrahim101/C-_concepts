#include <iostream>
using namespace std;

// Create a demo class
class A {
public:
    int x;
    static int InterTime;

    // creating a constructor
    A() {};

    // creating a copy constructor
    A(const A& copyCons) {
        x = copyCons.x;
        cout << "Calling the copy constructor" << endl;
    };

    // Calling an distrutor
    ~A() {
        cout << "this is an distructor" << endl;
    }
};

int A::InterTime = 5;

int main() {
  
      // Creating an a1 object
    A *a1 = new A;
    a1->x = 10;
    cout << "a1's x = " << a1->x << endl;
    cout << A::InterTime << endl; //recomended
    cout << a1->InterTime; //not recomended

    return 0;
}