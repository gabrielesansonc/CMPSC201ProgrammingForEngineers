
/* main.cpp
 
Lab 2 - Calculating Change
 
Created by Gabriel Sanson on 9/12/19.
 
 Purpose: Calculate the number of dollars in change that someone has in pocket when given the number of pennies, nickels, dimes, and quarters he/she has.
 
 Input: The number of pennies, number of nickels, number of dimes and number of quarters is required from the user.
 
 Output: Total amount of dollars the user has in change.
 
 Algorithm: Ask user for the number of pennies, number of nickels, number of dimes, and number of quarters. Multiply the number of pennies by 0.01, the number of nickels by 0.05, the number of dimes by 0.1 and the numbers of quarters by 0.25. Then add the result of the 4 values you got, and that will be the amount of dollars in change.

 */


#include <iostream>
using namespace std;

int main() {
    
    double quarter = 0.25;
    double dime = 0.1;
    double nickel = 0.05;
    double pennie = 0.01;
    
    int number_of_quarters;
    int number_of_dimes;
    int number_of_nickels;
    int number_of_pennies;
    
    
    cout << "Enter the number of quarters:  ";
    cin >> number_of_quarters;
    cout << "Enter the number of dimes:  ";
    cin >> number_of_dimes;
    cout << "Enter the number of nickels:  ";
    cin >> number_of_nickels;
    cout << "Enter the number of pennies:  ";
    cin >> number_of_pennies;
    
    double dollar = quarter * number_of_quarters + dime * number_of_dimes + nickel * number_of_nickels + pennie * number_of_pennies;
    
    cout << "The sum of ";
    cout << number_of_quarters << " quarters, ";
    cout << number_of_dimes << " dimes, ";
    cout << number_of_nickels << " nickels and ";
    cout <<  number_of_pennies << " pennies is " << dollar << " Dollars";
    
    cout << endl;
    return 0;
}

