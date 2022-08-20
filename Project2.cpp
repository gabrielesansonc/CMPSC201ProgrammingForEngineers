/*
 Gabriel Sanson
 Section 1
 
 Purpose:  Calculate the temperature of the interior cells of a 2d array by averaging the 4 neighboring (cells immediately above, below, left and right) cell temperatures.
 
 Input: Number of columns and rows. Top, bottom, left and right temperatures. The value of epsilon.
 
 Output: Output the user to enter the number of columns and rows. Output the user to enter the vslue of the top, bottom, left and right temperatures. Output the user to enter the value of epsilon. Output the updated array with the number of iterations.
 
 Algorithm: Ask user to input number of rows and columns. Use a while loop to make sure the columns are between 0 and 30 and the rows between 0 and 26, if not ask user to re-enter values. Ask user to input the top edge, bottom edge, right edge annd left edge temperatures. Use a while loop to make sure the temperatures are between 0 and 300, if not ask user to re-enter values. Ask user to enter the value of epsilon. Call the fill array function to fill the array. Call the temperature function to count the iterations and change the temperature of the inside cells in the plate. Call function to print array.
 
 
 Test:
 Enter the rows: 5
 Enter the columns: 7
 Enter the values of epsilon: 0.01
 Enter the temperature of the top edge: 100
 Enter the temperature of the bottom edge: 90
 Enter the temperature of the left edge: 75
 Enter the temperature of the right edge: 75

 
 The plate reached equilibrum after 20 iterations:

 87.5   100.0   100.0   100.0   100.0   100.0    82.5
 75.0    87.9    92.6    93.8    92.6    87.9    75.0
 75.0    83.9    88.6    90.0    88.6    83.9    75.0
 75.0    84.2    87.9    89.0    87.9    84.2    75.0
 82.5    90.0    90.0    90.0    90.0    90.0    82.5
 
 
 */

#include <iostream>
#include <iomanip>

using namespace std;


void fillarray (int , int , double array[][30], double , double , double , double );

void temperature (double array[][30], int , int , double , int& );

void printarray (int , int , double array[][30]);

int main() {
    
    int columns, rows, iterations;
    
    double epsilon, array[26][30], toptemp, bottomtemp, lefttemp, righttemp;
    
    int arraysize;
    
    
    cout << "Enter the rows: ";
    
    cin  >> rows;
    
    
    while (rows > 26  )
    {
        cout << "Invalid value. Please enter a number of rows less than 26: ";
        
        cin >> rows;
    }
    
    cout << "Enter the columns: ";
    
    cin  >> columns;
    
    while (columns > 30 )
    {
        cout << "Invalid value. Please enter a number of columns less than 30: ";
        
        cin >> columns;
    }
    
    arraysize = columns-2 * rows-2;
    
    cout << "Enter the values of epsilon: ";
    
    cin >> epsilon;
    
    cout << "Enter the temperature of the top edge: ";
    
    cin >> toptemp;
    
    while (toptemp < 0 || toptemp > 300)
    {
        cout << "Invalid value. Number must be less than 300 but greater than 0: ";
        
        cin >> toptemp;
    }
    
    cout << "Enter the temperature of the bottom edge: ";
    
    cin >> bottomtemp;
    
    while (bottomtemp < 0 || bottomtemp > 300)
    {
        cout << "Invalid value. Number must be less than 300 but greater than 0: ";
        
        cin >> bottomtemp;
    }
    
    cout << "Enter the temperature of the left edge: ";
    
    cin >> lefttemp;
    
    while (lefttemp < 0 || lefttemp > 300)
    {
        cout << "Invalid value. Number must be less than 300 but greater than 0: ";
        
        cin >> lefttemp;
    }

    cout << "Enter the temperature of the right edge: ";
    
    cin >> righttemp;
    
    while (righttemp < 0 || righttemp > 300)
    {
        cout << "Invalid value. Number must be less than 300 but greater than 0: ";
        
        cin >> righttemp;
    }
    
    
    fillarray (columns, rows, array, toptemp, bottomtemp, lefttemp, righttemp);
    
    temperature (array, columns, rows, epsilon, iterations);
    
    cout << "The plate reached equilibrum after " << iterations << " iterations: " << endl << endl;
    
    printarray (rows, columns, array);
    
    cout << endl;
    
    return 0;
}

/*
 Purpose: Fill the top, bottom, left and right edges of the array with the temperatures given by the user. Fill the corner cells with the average of the two adjacent cells.
 
 Input: The array as pass by reference. The top, bottom, left and right temperatures as pass by value. The number of columns and rows as pass by value.
 
 Output: Return the array with the edges rows and columns filled.
 
 Algorithm: Use a for loop to run through every row. Inside that loop add another for loop to run through every column. Inside that for loop chech if the cell is a left cell, right cell, top cell or bottom cell with if else statements and assign to the cell the apropriate temperature. Use other if statement to see if the cell is a corner cell, and if it is assign the average of the two adjacent cell to the corner cell. If the cell is not a corner or edge cell assign it the value of 0.
 
 */

void fillarray (int columns, int rows, double array[][30], double topt, double bottomt, double leftt, double rightt)

{
    
    for (int count = 0; rows > count; count++)
    {
        for (int count2 = 0; columns > count2; count2++)
        {
            if (count == 0)
            {
                array [count][count2] = topt;
            }
            else if (count == rows - 1)
            {
                array [count][count2] = bottomt;
            }
            else if (count2 == 0)
            {
                array [count][count2] = leftt;
            }
            else if (count2 == columns - 1)
            {
                array [count][count2] = rightt;
            }
            
            else array [count][count2] = 0;
            
            if (count == 0 && count2 == 0)
            {
                array [count][count2] = (leftt + topt)/2;
            }
            else if (count == rows - 1 && count2 == 0)
            {
                array [count][count2] = (leftt + bottomt)/2;
            }
            else if (count == rows - 1 && count2 == columns - 1)
            {
                array [count][count2] = (rightt + bottomt)/2;
            }
            else if (count == 0 && count2 == columns - 1)
            {
                array [count][count2] = (rightt + bottomt)/2;
            }
            
           
        }
        
    }
    
}

/*
 Purpose: Change the temperatures in the 2d array by averaging the value of the adjacent cells, until the change in every cell is greater than a value epsilon
 
 Input: The array and iteration as pass by reference. Number of rows and columns, and epsilon as pass by value.
 
 Output: send back the changed array and the iteration it took.
 
 Algorithm: Open a for loop that runs only when the number of cells where the change was less than epsilon doesnt equals the total number of inside cells.
 Use another for loop to run through all the inside rows.
 Use another loop to run through all the inside columns.
 store the original the value of each of the inside cell in a variable.
 Change the value of the inside cell by adding the values of all the neighbor cells and dividing by 4.
 store the values of the changed inside cells in another variable.
 Substract the difference of the original value and the new changed value.
 check if this difference is less than epsilon, if it is add one to the value keeping track of how many cells have changed for a value less than epsilon, when the number of cell that have chnaged by a value less than epsilon the for loop wil not run anymore.
 close all loops.
 
 
 */

void temperature (double array[][30], int columns, int rows, double epsilon, int& iteration)
{
    
    double change , newarray , oldarray;
    int track = 0;
    
        
    for (iteration = 0; track != (columns-2) * (rows-2) ; iteration++)
    {
        track = 0;
    
    
    for (int count = 1; rows - 1 > count; count++)
       {
           for (int count2 = 1; columns - 1 > count2; count2++)
           {
               oldarray = array[count][count2];
               
               array[count][count2] = (array[count-1][count2] + array[count+1][count2] + array[count][count2-1] + array[count][count2+1])/4;
               
               newarray = array[count][count2];
               
               change = newarray - oldarray;
               
               if (change < epsilon)
               {
                   track++;
               }
               
           }
       }
        
        
    }
    

}
/*
 Purpose: Output a 2d array.
 
 Input: the 2d array by reference. The number of rows and columns by value.
 
 Output: Output what it is stored in the array.
 
 Algorithm:
  run a for loop until you have gone through all the rows. Inside that loop put another one that goes through all the columns.
  Output the value stored the array.
  close the loops.

 */
void printarray (int rows, int columns, double array[][30])
{
    for (int count = 0; rows > count; count++)
    {
        for (int count2 = 0; columns > count2; count2++)
        {
            cout << setw (8) << showpoint << fixed << setprecision (1) << array [count][count2] ;
        }
        
        cout << endl;
    }

}
