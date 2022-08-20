/*
 Purpose: output the sum of the series X to the pow of 0 plus X to the pow of 1 plus X to the pow of 2 all the way to X to the pow of N. Both N and X being user inputs.
 
 input: N, and X.
 
 output: output the sum of the series X to the pow of 0 plus X to the pow of 1 plus X to the pow of 2 all the way to X to the pow of N.
 
 Algorithm: Create a user made function in order to calculate the sum of the series. Ask the user to input the X and the N for the sum series. Make sure the value of N is not less than 1. Call the series and use the user input in it. Output the function return.
 
  Lab 5

  Created by Gabriel Sanson on 10/17/19.
  Copyright © 2019 Gabriel Sanson. All rights reserved.

 */

#include <iostream>
using namespace std;

double powadding ( double number, int power);
 

int main() {
    
    
    double x;
    int n;
    
    
    cout << "Please enter the value of x:" << endl;
    
    cin >> x;
    
    cout << "Please enter the value of n:" << endl;
       
    cin >> n;
    
    while (n < 1)
       {
           cout << " Value of n should be at least 1 \nPlease re-enter the value of n:";
           cin >> n;
       }
    
    cout << powadding(x, n);
    

    return 0;
}


/*
 Function Purpose: output the sum of the series X to the pow of 0 plus X to the pow of 1 plus X to the pow of 2 all the way to X to the pow of N. Both N and X being user inputs.
 
 Function input: The user will input a double a and an intiger b.
 
 Funtion output: output the sum of the series X to the pow of 0 plus X to the pow of 1 plus X to the pow of 2 all the way to X to the pow of N.
 
 Function Algorithm: Create a loop and set count equal to 1, run whenever count is less than the input b, and add oune to count each time. In the loop equal double sum to sum plus term. and term equal term times a. Return the sum.
 
 test data: X = 3,  N = 3 sum = 40
 
 */



double powadding ( double a, int b)
{
    double sum = 0;
    double term = 1;
    int count;
    
   
    
for ( count = 1; count < b; count++ )
{
    
    
    sum = sum + term;
    term = term * a;
   
    
}

return sum;
    
}
