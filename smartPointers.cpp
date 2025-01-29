#include <iostream>
#include <memory>
using namespace std;

int Sum(unique_ptr<int[]> number, int n) {
   int sum = 0;

   for(int i = 0; i < n; i++) {
    sum += number[i];
   }

   return sum;
}

int main()
{
   unique_ptr<int[]> ptr = make_unique<int[]>(5);
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

     cout << Sum(move(ptr), 5) << endl;

    return 0;

}

