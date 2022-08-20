/*
 
 Purpose: Create a program that will prompt to enter a positive whole number - N. The program will output the series of one over the number plus two over the number minus 1 and so on until the denominator is 0.
 
 Input: The user needs to input the value for N.
 
 Output: The program will output the series of one over the number plus two over the number minus 1 and so on until the denominator is 0.
 
Algorithm: Ask the user to input the value of N. If the number is less than zero, tell user to input again. Repeat until user has inputed an valid value. If the inputed value is greater than zero divide one by the value, then add one to the numerator and subtract one to the denominator. Repeat until the denominator value is less than or equal to zero. The sum all the numbers of the series and output them as a sum. Output also the original value inputed.
 
 Test Data: SeriesNumber = 4, Sum = 6.41667.

Created by Gabriel Sanson on 9/29/19.
*/

#include <iostream>
using namespace std;

int main (){
    int seriesNumber;
    int original;
    double numerator = 1;
    double sum = 0;
    
    cout << "Enter a positive whole number: ";
    cin >> seriesNumber;
    
    while (seriesNumber <= 0) {
        cout << "Invalid value. Please enter a number greater than 0: ";
        cin >> seriesNumber;
    }
    
    original = seriesNumber;
    
    while (seriesNumber > 0){
        sum = sum + (numerator / seriesNumber);
        seriesNumber--;
        numerator++;
    }
    cout << "The sum of the series is: " << sum << " for the inputed value of: " << original << endl;
    
    return 0;
    
    }
    
    
    

