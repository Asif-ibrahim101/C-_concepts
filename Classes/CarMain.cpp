#include <iostream>
#include "Car.cpp"

using namespace std;

int main() {
   // static allocation in stack
   Vehical Car;

   // Dynamic allocation in heap;
   Vehical *C = new Vehical;

   // using setters
   C->SetCarName("BMW");
   Car.SetModel('Y');
   Car.SetNumberPlate(200);
   Car.SetOwner("Asif");

   int NumberPlate = Car.GetPlate();
   string Owner = Car.GetOwner();
   string CarName = C->Name;
   char CarModel = Car.Model;

   cout << "Car Name: " << CarName << endl;
   cout << "Car Model: " << CarModel << endl;
   cout << "Number Plate: " << NumberPlate << endl;
   cout << "Owner: " << Owner << endl;

}