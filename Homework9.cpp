/*CMPSC 201

   Purpose: Print original set of three arrays. Then print the set of arrays in ascending order in the x column. Then print the set of arrays in ascending order in the z column. Then print the set of arrays in descending order in the y column. Then print the set of arrays in descending order in the z column.
 
   input:  Three 1-dimensional arrays x, y, z are predefined
 
   output:  arrays before sorting, arrays after sorting ascending by x, arrays after sorting descending
            by y, arrays after sorting ascending by y, arrays after sorting ascending by z.
 
   processing: Call function to print arrays. Call function to sort ascending (high to low) using z as the key, call the function to print the arrays, call the function to sort ascending (high to low) using z as the key, and call the function again to print the arrays.  Call this function to sort descending (high to low) using y as the key, call the function to print the arrays, call the function to sort descending using z as the key, and call the function again to print the arrays.
 

*/

#include <iostream>
#include <iomanip>
using namespace std;

void printArrays(const double [], const double [], const double [], int size);
void sortAscend(double [], double [], double [], int );
void sortDescend(double [], double [], double [], int );

int main()
{
    double x[10] = {4.5, 9.8, 1.2, 10.9, 5.5, 6.2, 3.2, 10.5, 2.9, 5.4};
    double y[10] = {11.6, 3.2, 5.9, 8.8, 1.3, 7.2, 4.3, 2.2, 15.3, 7.8};
    double z[10] = {1.2, 6.7, 2.3, 14.8, 5.3, 9.2, 11.5, 4.6, 8.9, 6.1};



    cout<<"Original array\n   x         y         z" <<endl; //output of title line

    //call function to output arrays
    printArrays(x,y,z,10);


    //call function to sort ascending by x
    sortAscend(x, y, z, 10);

    cout<<"\n\nArray sorted ascending by x\n   x         y         z"<<endl; //output of title line
    //call function to output arrays
    printArrays(x,y,z,10);

    //call function to sort ascending by z (note z is passed as key)
    sortAscend(z, y, x, 10);

    cout<<"\n\nArray sorted ascending by z\n   x         y         z"<<endl; //output of title line
    //call function to output arrays
    printArrays(x,y,z,10);

    cout<<"\n\nArray sorted descending by y\n   x         y         z"<<endl;
    sortDescend(y, x, z, 10);
    printArrays(x, y, z, 10);

    cout<<"\n\nArray sorted descending by z\n   x         y         z"<<endl;
    sortDescend(z, x, y, 10);
    printArrays(x, y, z, 10);
    
    
    return 0;
}

/* Function to output three 1-dimensional double arrays
   input:  three 1- dimensional double arrays and size of the arrays
   output:  The values in the arrays
   processing:  loop that runs from 0 to size of arrays - 1
*/
void printArrays(const double a[], const double b[], const double c[], int size)
{
    //loop to output elements of the arrays
    for(int i = 0; i < size; i++)
    {
        cout<<setprecision(1)<<fixed<<setw(5)<<a[i]<<setw(10)<<b[i]<<setw(10)<<c[i]<<endl;
    }
}


/* Function to sort three 1-dimensional double arrays in an ascending manner using bubble sort algorithm.
   Function will sort according to the first array listed in the call
   input:  3 double arrays and the size of the arrays, the key array is the array used to know when to swap values
   output: the arrays will be sorted ascending according to the array designated as key.
   processing:  The bubble sort algorithm will be used to decide what values need to be exchanged and will
                perform the same exchange for each array.
*/
void sortAscend(double key[], double e[], double f[], int sz)
{
    int last = sz-2;
    bool sorted = false;
    double temp;

    while(!sorted)  //outer loop that runs until can go through entire array without needing to swap values
    {
        sorted = true;
        for(int j = 0; j <= last; j++) //loop to compare adjacent values
        {
            if (key[j] > key[j+1])  //test to see if out of order
            {

                sorted = false;
                // swap key values (could be done by another function)
                temp = key[j];
                key[j] = key[j+1];
                key[j+1] = temp;


                //perform same swap on second array
                temp = e[j];
                e[j] = e[j+1];
                e[j+1] = temp;

                //perform same swap on third array
                temp = f[j];
                f[j] = f[j+1];
                f[j+1] = temp;

            }//end if
        }//end inner loop
        last = last-1;
    }//end outer loop

}//close function


/*
 Input: 3 double arrays and the size of the arrays, the key is the one that will be sorted. Also the size of the array as pass by value.
 Output: the arrays will be sorted descending order according to the array designated as key.
 processing:  The selection sort algorithm will be used. The biggest element of the array is determined and swapped with the first element of the array. Then the next smallest element is found and swapped with the second element of the array. Process continues until the end of the array reached. The outer loop controls the position of the sorted array and the inner loop determines the smallest element. The numbers in the other two arrays are changed respectively.
 */

void sortDescend(double key[], double e[], double f[], int sz)
{
    
    double temporary, temporary2, temporary3;
    int maxIndex, placecount, count;
    
    for (count = 0; count < sz-1; count++)
    {
        maxIndex = count;
        
        for (placecount = count + 1; placecount < sz; placecount++)
        {
            if (key[placecount] > key[maxIndex])
            {
                maxIndex = placecount;
            }
        
        
            temporary = key[maxIndex];
            key[maxIndex] = key[placecount];
            key[placecount] = temporary;
        
            temporary2 = e[maxIndex];
            e[maxIndex] = e[placecount];
            e[placecount] = temporary2;
            
            temporary3 = f[maxIndex];
            f[maxIndex] = f[placecount];
            f[placecount] = temporary3;
        

      }
   }
        
}
