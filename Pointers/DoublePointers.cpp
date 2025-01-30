#include <iostream>
#include <memory>
using namespace std;

void Update(int **p2)
{
    **p2 = **p2 + 1;
};
int main()
{
    int i = 5;
    int *p1 = &i;
    int **p2 = &p1;

    cout << "before update" << endl;

    cout << "Value of i: " << i << endl;
    cout << "Value pointed to by p1: " << *p1 << endl;
    cout << "Value pointed to by p2: " << **p2 << endl;

    cout << "----------" << endl;

    cout << "Value of i: " << i << endl;
    cout << "Value pointed to by p1: " << p1 << endl;
    cout << "Value pointed to by p2: " << *p2 << endl;

    cout << "----------" << endl;

    Update(p2);

    cout << "After Update function call:" << endl;
    cout << "Value of i: " << i << endl;
    cout << "Value pointed to by p1: " << *p1 << endl;
    cout << "Value pointed to by p2: " << **p2 << endl;

    cout << "----------" << endl;

    cout << "Value of i: " << i << endl;
    cout << "Value pointed to by p1: " << p1 << endl;
    cout << "Value pointed to by p2: " << *p2 << endl;

    return 0;
}