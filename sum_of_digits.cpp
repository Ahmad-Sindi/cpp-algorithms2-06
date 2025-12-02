/* Algorithm Challenge & Problem Solving
 * 6 - Program to Calculate the Sum of Digits of a Number
 *
 * This program reads a positive integer from the user and computes the total
 * sum of all its digits. It extracts each digit using modulo (%) and integer
 * division, accumulating the result step by step until no digits remain.
 *
 * This algorithm strengthens understanding of digit extraction, loops,
 * arithmetic operations, and clean functional programming in C++.
 */

#include <iostream>
using namespace std;

/*
 * Function: ReadPositiveNumber
 * Purpose: Reads a positive integer from the user with validation.
 * Ensures the user cannot enter zero or negative values.
 */
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

/*
 * Function: SumOfDigits
 * Purpose: Computes and returns the sum of all digits in a given number.
 * Uses modulo (%) and integer division to extract digits one by one.
 */
int SumOfDigits(int Number)
{
    int Sum = 0, Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Sum = Sum + Remainder;
    }

    return Sum;
}

/*
 * Main Program: Reads a positive number, calculates the sum of its digits,
 * and prints the result to the user.
 */
int main()
{
    int Number = ReadPositiveNumber("Enter a positive number to compute the sum of its digits:");
    cout << "Sum of digits: " << SumOfDigits(Number) << endl;

    return 0;
}
