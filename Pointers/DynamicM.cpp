#include <iostream>
using namespace std;

int sum(int *arr, int n) {
    int sum = 0;


    for(int i = 0; i < n; i++) {
        sum += arr[i];
    };

    return sum;
};

int main()
{
    char ch = 'a';
    char *ptr = &ch;
    
    cout << sizeof(ch) << endl;
    cout << sizeof(ptr) << endl; //because the size of a pointer is 8
    
    char *ch = new char; //its a heap memory
    
    cout << sizeof(ch) << endl;
    cout << sizeof(ptr) << endl; //because the size of a pointer is 8

    int n;
    cin >> n;
 
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };

    int ans = sum(arr, n);
    cout << "the sum of the array is: " << ans << endl;
}