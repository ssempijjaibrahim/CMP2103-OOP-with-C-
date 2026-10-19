
#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal
{
    protected:
        string name;

        public:
            Animal(string n) {
 name = n;
  }
// Virtual function
virtual void makeSound()
{
cout << name << " makes a sound." << endl;
  }  };
// Dog inherits from Animal
class Dog : public Animal  {    public:
 Dog(string n) : Animal(n)
 {
  }

 void makeSound() 
      {
cout << name << " says: Woof! Woof!" << endl;
  }
  };

 // Cat inherits from Animal
class Cat : public Animal
{
public:
 Cat(string n) : Animal(n)
 {   }

  void makeSound() 
     {
 cout << name << " says: Meow!" << endl;
   }
    };

     // Bird inherits from Animal
    class Bird : public Animal
    {
        public:
Bird(string n) : Animal(n)
{ }
void makeSound() 
 {
   cout << name << " says: Tweet! Tweet!" << endl;
 }
};
int main()
{                                                                                // Create objects
Dog dog1("Buddy");
Cat cat1("Mimi");
Bird bird1("Sky");                                                                             // Base-class pointers
Animal* animal;

animal = &dog1;
animal->makeSound();

animal = &cat1;
animal->makeSound();

animal = &bird1;
animal->makeSound();

return 0;}