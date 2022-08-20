/*
 Gabriel Sanson
 
 Lab 6:
 
Purpose: Count how many, numbers, even numbers and odd nubmers where inputed.
 
Input: When the function is called it will ask the user a number and if he wants to input another.
 
Output: The function will return the numer of odd and even numers, and also how many numers where imputed.
 
Algorith: We will call a funtion that does that.
 
TestL: 1,2,3,4,5. 3 odds, 2 even, 5 numbers.
*/



#include <iostream>
using namespace std;

void countnumbers ();

int main() {
   
    countnumbers();
    
    return 0;
}

/*
 Purpose: Count how many: numbers, even numbers and odd nubmers are inputed.
 
 Input: The function will need a pass by value parameter for the amount of numbers that will be imputed. Also, when running the function will ask the user to input their numbers one y one.
 
 Output: The function will return the numer of odd and even numers, and also how many numers where imputed.
 
 Algorith: Create a function call with no parameters.
 Make a for loop run whenever the user inputes that he wants to continue, and when he hasnt imputed more than 50 values.
 Each time the user imputs a number ask him if he wants to input another.
 Assign the value of his imputed number to an double variable.
 If half the intiger number is the same as half the double number then the number is even, else it is odd.
 Repeat until user doesnt want to input anything or he has imputed 50 values.
 output the count of numbers, even numbers and odd numbers.
 test: input: 2, y, 3, y, 4, y, 5, n   even: 2  odd: 2  numbers: 4
 */

void countnumbers ()
{
    double numberIdentifier;
    int evens = 0, odds = 0, count, numbers;
    char input;
    
    input = 'y';
    
    for (count = 0; 50 >= count && input == 'y' ; count++)
    {
        cout << "Enter a whole number: ";
        cin >> numbers;
        cout << "Do you have another numer to input? (y/n) ";
        cin >> input;
        
        
        numberIdentifier = numbers;
        
        if (input != 'n' && input != 'y')
        {
            cout << "Invalid input, please enter y or n: ";
            cin >> input;
        }
        
        if (numbers/2 == numberIdentifier/2)
        {
            evens++;
        }
        else
        {
            odds++;
        }
    }
    
    cout << endl << endl;
    
    cout << count << " numbers where inputed." << endl;
    cout << evens << " numbers where even." << endl;
    cout << odds << " numbers where odd." << endl;
    
}
