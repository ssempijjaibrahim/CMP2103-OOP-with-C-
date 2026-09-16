#include <iostream>
using namespace std;

// Function prototypes
bool isValid(long long number);
int sumOfDoubleEvenPlace(long long number);
int getDigit(int number);
int sumOfOddPlace(long long number);
bool prefixMatched(long long number, int d);
int getSize(long long d);
long long getPrefix(long long number, int k);


int main()
{
    long long cardNumber;
cout << "Enter a credit card number: ";
    cin >> cardNumber;
    if (isValid(cardNumber))
    {
        cout << "The credit card number is valid." << endl;
    }
    else
    {
        cout << "The credit card number is invalid." << endl;
    }
    return 0;
}


// Return true if the card number is valid
bool isValid(long long number)
{
    // Check length
    if (getSize(number) < 13 || getSize(number) > 16)
    {
        return false;
    }

   // Check prefix
    if (!prefixMatched(number, 4) &&
        !prefixMatched(number, 5) &&
        !prefixMatched(number, 6))
    {
        return false;
    }

  // Luhn check
    int total = sumOfDoubleEvenPlace(number)
              + sumOfOddPlace(number);

  return (total % 10 == 0);
}


// Get the result from Step 2
int sumOfDoubleEvenPlace(long long number)
{
    int sum = 0;

 // Remove the last digit
    number = number / 10;

  while (number > 0)
    {
        // Get the digit
        int digit = number % 10;
    // Double the digit
        digit = digit * 2;

  // Add its digits together if necessary
        sum = sum + getDigit(digit);

 // Move two positions to the left
        number = number / 100;
    }

   return sum;
}


// Return this number if it is a single digit,
// otherwise return the sum of the two digits
int getDigit(int number)
{
    if (number < 10)
    {
        return number;
    }
    else
    {
        return (number / 10) + (number % 10);
    }
}


// Return sum of odd-place digits in number
int sumOfOddPlace(long long number)
{
    int sum = 0;
    while (number > 0)
    {
        // Get the last digit
        int digit = number % 10;
        sum = sum + digit;

  // Move two positions to the left
        number = number / 100;
    }

 return sum;
}


// Return true if the digit d is a prefix for number
bool prefixMatched(long long number, int d)
{
    long long prefix = getPrefix(number, 1);

 return prefix == d;
}


// Return the number of digits in d
int getSize(long long d)
{
    int count = 0;

 while (d > 0)
    {
        count++;
        d = d / 10;
    }

 return count;
}


// Return the first k number of digits from number
// If the number of digits in number is less than k,
// return number
long long getPrefix(long long number, int k)
{
    int size = getSize(number);

 if (size < k)
    {
        return number;
    }

 for (int i = 0; i < size - k; i++)
    {
        number = number / 10;
    }

 return number;
}
