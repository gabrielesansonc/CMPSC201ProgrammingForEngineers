/* Created by Gabriel Sanson on 10/10/19.
 
Input: Number of rows in the pyramid.
Output: A pyramid of numbers starting with 1 in the top row, three 2s in the second row and so on and ending with the number imputed.
Algorithm:
•    Create an integer variable for rows, count, space, A, B.
•    Tell user to input number of rows.
•    Create a for loop that sets “count” equal to 1 and run whenever “count” is less than or equal to “rows”, and finally add one to variable “count”.
•    Create another for loop that sets variable “space” equal to “rows” minus “count”, run whenever “space” is greater than 0, and subtract one to “space each time”
•    In the body of this for loop you will output 1 space.
•    Close this loop.
•    Create another loop inside the first one that sets variable “A” equal to one and run whenever “A” is less than or equal to variable “B” then add 1 to variable “A”.
•    Inside the statement of the loop output the values of “Count”.
•    Close this loop.
•    Output an enter.
•    Set “B” equal to “B” plus one.
•    Close the first loop you created.
Test: Rows=4
output=
    1
   222
  33333
 4444444

*/

#include <iostream>
using namespace std;

int main() {
    int rows, count, space;
    int A = 1;
    int B = 1;
    
    cout << "How many rows?";
    cin >> rows;
    cout << endl;
    
    for (count = 1; rows >= count; count++ ){
        for (space = rows - count ; space > 0; space--){
            cout << " ";
        }
        for (A=1; B >= A; A++){
                
            cout << count;
            }
        
        B = B + 2;
        cout << endl;
    }
     

    cout << endl;
    return 0;
}
