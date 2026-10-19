
#include <iostream>
#include <string>
using namespace std;
// Base class
class Vehicle
{
protected:
string brand;
public:
Vehicle(string b)
{
brand = b;
}
void displayBrand()
{
cout << "Brand: " << brand << endl;
}
};
// Car inherits from Vehicle
class Car : public Vehicle
{
protected:
string model;

public:
Car(string b, string m) : Vehicle(b)
{
model = m;
}
    void displayModel()      {
     cout << "Model: " << model << endl;
 }
     };
// SportsCar inherits from Car
class SportsCar : public Car
{
private:
double topSpeed;          public:
SportsCar(string b, string m, double s)
: Car(b, m)
{
topSpeed = s;
}
void displaySpeed() {
  cout << "Top speed: " << topSpeed
<< " km/h" << endl;
}
 };

 int main()
{ SportsCar myCar("Toyota", "Supra", 300);
 cout << "SPORTS CAR DETAILS" << endl;
 myCar.displayBrand();
 myCar.displayModel();
       myCar.displaySpeed();
return 0;
}