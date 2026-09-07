// Write a program that prompts the user to enter a weight in pounds and height in inches and
// then displays the BMI. Note that one pound is 0.45359237 kilograms and one inch is
// 0.0254 meters. Listing 4.6 gives the program.

// Conditions
// Below 18.5 Underweight
// 18.5–24.9 Normal
// 25.0–29.9 Overweight
// Above 30.0 Obese

// Enter weight in pounds:
// Enter Weight in pounds: 146
// Enter height in inches: 70
// BMI is 20.95
// Normal
#include <iostream>
#include <iomanip>//header file to round to required precision
using namespace std;

int main() {
    //stating my constants to use
    const double KG_PER_POUND = 0.45359237;
    const double METER_PER_INCH = 0.0254;

    double weightPounds, heightInches;//creating my variables for sensible enough

    cout << "Enter weight in pounds: ";//prompt for user to input weight value
    cin >> weightPounds;

    cout << "Enter height in inches: ";//prompt for user to enter height value
    cin >> heightInches;

    double weightKg = weightPounds * KG_PER_POUND;//weight conversion to Kg from pounds
    double heightMeters = heightInches * METER_PER_INCH;//as well height int meters from inches

    double bmi = weightKg / (heightMeters * heightMeters);//evaluation stage for BMI
     cout << fixed << setprecision(2);//rounding to 2dps for my output as by requirement
    cout << "BMI is " << bmi << endl;//output to view what BMI is evaluated to
     //conditioning comment mapped to user evaluated BMI value
    if (bmi < 18.5)
        cout << "Underweight" << endl;
    else if (bmi < 25.0)
        cout << "Normal" << endl;
    else if (bmi < 30.0)
        cout << "Overweight" << endl;
    else
        cout << "Obese" << endl;

    return 0;
}
