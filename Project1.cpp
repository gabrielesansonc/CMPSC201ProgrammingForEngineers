/*
 Purpose: Create a program to help in the analysis of data obtained from an x-ray powder diffractometer used to characterize materials. Create a program that will read the 2-theta values and the intensities from a file and create a table that will contain the 2-theta values, the intensities, the d values and Q values.
 
 Input: Data file for the input data, and name of the output file to be generated
 
 Output: The output will be a file that contains the name of the sample, the wavelength and a table containing the 2-theta and intensity values from the file plus the calculated d and Q values.

 Algorithm: Allow user to input a file name and open this file.
 Then allow user to name a new file to be created and create the new file.
 Then use the information on the file opened to calculate Q and d. Record both values calculated, the anode, the file name, the 2-theta values and the intensities in a new file.
 Run a loop to make sure you get all the information in the file and stop the loop when there is no more information and also output the number of oeaks in the new file.
 Ask user if he wants to opne another file
 If he answer yes, rerun everything, if not end the program.
 
Created by Gabriel Sanson on 10/15/19.
*/


#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>

using namespace std;

int main() {
    
    ifstream input_file;
    ofstream output_file;
    
    string filename;
    string outfilename;
    
    string samplename;
    string anode;
    double wavelenght, theta, distance, Qvalue;
    int intensity, peaks;
    
    char newfile;
    
    
    
   do
       {
       
       newfile = 'n';
       
       cout << "Enter the name of the file you would like to open: ";
       cin >> filename;
       
    input_file.open (filename);
       
       cout << "Enter the name of the file you would like to create: ";
       cin >> outfilename;
       
    output_file.open (outfilename);
    
    
           if ( !input_file.fail () )
           {
       
        getline (input_file, samplename);
        
        input_file >> anode;

       
               if (anode == "Cu") wavelenght = 1.54059;
               if (anode == "Cr") wavelenght = 2.28973 ;
               if (anode == "Fe") wavelenght = 1.93604;
               if (anode == "Co") wavelenght = 1.78900;
               if (anode == "Mo") wavelenght = 0.70932;

          output_file << "For " << samplename << " with anode of " << anode << " and a wavelength of " << setprecision (6) << wavelenght << " the values are: " << endl;
        
          output_file << "2-theta" << setw(20) << "intensity" << setw(20) << "d values" << setw(20) << "Q values" << endl;
           
       
               for (peaks = 1; !input_file.eof(); peaks++)
               
                {
            
                input_file >> theta >> intensity;
            
                distance = wavelenght / ( 2 * sin ( ( (theta/2) * ( 3.14159 / 180 ) ) ) );
            
                Qvalue = 1 / ( pow ( sin ((theta / 2) * ( 3.14159 / 180 ) ), 2) );
            
                  output_file << setprecision (5) << showpoint << theta;
                  output_file << setw(20) << intensity;
                  output_file << setw(20) << setprecision (5) << distance;
                  output_file << setw(20) << setprecision (7) << Qvalue <<  endl;
            
              
                }
        
        output_file << "There where a total of " << peaks << " peaks" << endl;
            

           }
       
           else
           {
           cout << "Error opening file." << endl;
           }
            
        cout << "Would you like to analyze data from another file (y/n)? ";
       
        cin >> newfile;
       
      
       while (newfile != 'y' && newfile != 'n')
       {
              cout << "Your input was invalid. Please select again. (y/n)" << endl;
              cin >> newfile;
        }
       
       output_file.close();
       input_file.close();

       
       }
       
   while (newfile == 'y');
    
   
    
    
   
    
    
    return 0;
}
