#include <iostream>
using namespace std;

int main() {
    int num = 5;
    cout << num << endl;

    // address of the operator
    cout << "address of the num is " << &num << endl;


    int *ptr = &num;

    cout << "Address of the variable is " << ptr << endl;
    cout << "Value of the variable is " << *ptr << endl;

    cout << "--------------------------------------------" << endl;

    // looking for a different type of variable
    double number = 4.3;
    cout << number << endl;

    // address of the operator
    cout << "address of the num is " << &number << endl;


    double *ptr1 = &number;
    cout << "size of double is " << sizeof(*ptr1) << endl;

    cout << "Address of the variable is " << ptr1 << endl;
    cout << "Value of the variable is " << *ptr1 << endl;


    cout << "--------------------------------------------" << endl;
    cout << "Printing a garbage address" << endl;

    int *p = 0;
    cout << *p << endl;

    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;


    int j  = 10;
    int *p = 0;
    p = &j;

    cout << p << endl;
    cout << *p << endl;

    int num = 5;
    int a = num;
    cout << "a before " << num << endl;
    a++;
    cout << "a after " << num << endl;


    int *p = &num;
    cout << "before " << num << endl;
    (*p)++;
    cout << "after " << num << endl;

    cout << "--------------------------------------------" << endl;

    // Coping a pointer
    int *q = p;
    cout << p << " -  " << q <<  endl;
    cout << *p << " -  " << *q <<  endl;


    // Important Concept
    int i  = 3;
    int *p = &i;
    *p = *p + 1;
    cout << *p << endl;

    cout << " before p" << (p) << endl;
    
    p = p + 1;
    cout << " after p" << (p) << endl;

    // return 0;
}