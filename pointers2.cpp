#include <iostream>
using namespace std;

void Print(int *ptr) {
    
    cout << "inside print" << *ptr << endl;
};


void Update(int *ptr) {
    *ptr = *ptr + 1;
    cout << "inside update " << *ptr << endl;
};

int sum(int *arr, int n){

    cout << endl << "size: " << sizeof(arr) << endl;

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    };

    return sum;
};

int main() {

    int arr[6] = {1,2,3,4,5,8};

    cout << sum(arr+3, 3) << endl;

    // functions
    int num = 5;
    int *ptr = &num;

    Print(ptr);

    Update(ptr);

    Print(ptr);


    int arr[10] = {23, 122, 41, 67};

    cout << arr[0] << endl;
    cout << &arr[0] << endl; //address of  first element of the array

    cout << "2nd " << *arr << endl; //indicating the first element in the array
    cout << "3rd " << *arr + 1 << endl; //incrementing the value of the first element
    cout << "4th " << *(arr + 1) << endl; //when we are usig the brackets its incrementing the position
    cout << "5th " << *(arr + 1) + 1 << endl;
 
    cout << "6th " << *(arr + 2) << endl;
    cout << "6th " << *(arr + 2) + 1 << endl;
  
    int i =  3;
    cout << i[arr] << endl;
    return 0;

    // Pointers with arrays
    int temp[10] = {1, 2};
    cout << "without pointers 1st " <<  sizeof(*temp) << endl;
    cout << "without pointers 2nd " <<  sizeof(&temp) << endl;

    int *pt = &temp[0];
    cout << "with pointer pt " << sizeof(pt) << endl; //here pt means address
    cout << "with pointer &pt " << sizeof(pt) << endl; //here pt means address
    cout << "with pointer p* " << sizeof(*pt) << endl; //*pt means value present at that address

    int a[20] = {1,2,3,5};

    cout << &a[0] << endl;
    cout << a << endl;
    cout << &a << endl;

    cout << "-----------------------------------------" << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    int arr[10] = {0, 2};

    int *ptr = &arr[0];
    cout << ptr << endl;

    cout << "-----------------------------------------" << endl;

    ptr = ptr + 1;
    cout << ptr << endl;

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde"; 

    char *c = &ch[0];
    cout << *c << endl;
    cout << c << endl;

};