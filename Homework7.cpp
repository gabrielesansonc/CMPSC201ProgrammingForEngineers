/*
 Purpose: Find how many numbers are in the file and also how many numbers of the one in the file are divisible by the inputed number.
 
 Input: The user needs to input the number (between 2 and 20) the program will check how many of the values in the array are divisible by. Also the program will use the Makeup/Labs4-7MU.txt file to get the numbers for.
 
 Output: The program will output how many numbers are in the file, how many numbers of the one in the file are divisible by the inputed number, and also the inputed number.
 
 Algorithm:

 -Open the file containing the numbers (need to be less than 300).
 -if file opens tell user to input a number between 2-20 that he wants to know if the array is divisible by.
 -In the same if statement run a for loop until all the number in the file are used, counting the amount of numbers.
 -inside this for loop, make an if statement that runs when the value of the array divided by the number is a whole number, and add one to the numbers divisible (to check this; assign the int array to a double array. If the number in the double divided by the input is equal to the number in the intiger divided by the input, then the value is divisible).
 -Close the last if statement and the for loop.
 -Output the number inputed by the user, the number that where divisible by the inputed number and the total numbers in the file.
 -Close the first the if statement.
 -If the first if statement is not met, put an else and tell user that there was a problem opening file.
 -Close file.
 
 Test: input: 2,  138 numbers where divisible by 2 of the total 271 numbers.
 */

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    ifstream fileName;
    int fileNumbers [300];
    double testDivisibility [300];
    int divisibleNumber;
    int amountDivisible = 0;
    int totalnumbers = 0;
    
    fileName.open ("Labs4-7MU.dat");
    
    if (!fileName.fail() )
    {
    
    
    cout << "Enter a number between 2-20 that you want to know if the array is divisible by: ";
    cin >> divisibleNumber;
    
    
    for (int count = 1; !fileName.eof(); count++)
    {
      fileName >> fileNumbers [count-1];
      testDivisibility[count-1] = fileNumbers [count-1];

      if ((testDivisibility[count-1])/divisibleNumber == (fileNumbers [count-1])/divisibleNumber)
      {
          amountDivisible++;
      }
        totalnumbers = count;
    }
    
    cout << amountDivisible << " numbers where divisible by " << divisibleNumber << " of the total " << totalnumbers << " numbers." << endl;
        
    }
    
    else cout << "There is an error opening the file" << endl;
    
    fileName.close();
    
    return 0;
}
