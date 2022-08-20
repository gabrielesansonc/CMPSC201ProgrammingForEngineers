/*
 Purpose: Develop a program to help analyze the data for a concrete company formulas of concrete. The program will gather 5 different formulas for each of the 7 diferent plants. The program will find the minimum and maximum values of each concrete formula, comfirm that the entered values are between 15Mpa and 75Mpa, and calculate the average of each formulation.
 
 Input: The formulations values for each plant. 7 values for formula one, 7 values for formula two, 7 values for formula three, 7 values for formula four and 7 values for formula five.
 
 Output: Output user to enter each compressive strength in MPa, if values are less than 15 or greater than 75, ask him re enter a valid value. Also output the average for each formulation with the formulation and plant number.
 
 Algorithm:
 -Ask user to enter the compressive strenght (in MPa) of the first formulation in for the first plant
 -check if the inputed strenght is valid by calling the checkvalue function.
 -repeat this until you have asked anc checked the input of all formulations 1.
 -When all values are entered for the compresive strenght of formulation one call function aver. to calculate the average without the minimum and maximun values and then output it.
 -Repeat this same steps for the rest of the strengthening formulas.
 
 tes: Enter information for formulation 1:
 Enter the compressive strength for formulation 1 in MPa for plant 1: 34
 Enter the compressive strength for formulation 1 in MPa for plant 2: 45
 Enter the compressive strength for formulation 1 in MPa for plant 3: 45
 Enter the compressive strength for formulation 1 in MPa for plant 4: 45
 Enter the compressive strength for formulation 1 in MPa for plant 5: 45
 Enter the compressive strength for formulation 1 in MPa for plant 6: 45
 Enter the compressive strength for formulation 1 in MPa for plant 7: 48

 The average strength for formulation 1 was: 45
 
 */

#include <iostream>

using namespace std;

void checkvalue (double& form, int formulation_num, int plant_num);
void minmax (double formP1, double formP2, double formP3, double formP4, double formP5, double formP6, double formP7, double& mini, double& maxi);
double aver (double formP1, double formP2, double formP3, double formP4, double formP5, double formP6, double formP7, double& average);

int main()

{
    double form1Plant1, form2Plant1, form3Plant1, form4Plant1, form5Plant1;
    double form1Plant2, form2Plant2, form3Plant2, form4Plant2, form5Plant2;
    double form1Plant3, form2Plant3, form3Plant3, form4Plant3, form5Plant3;
    double form1Plant4, form2Plant4, form3Plant4, form4Plant4, form5Plant4;
    double form1Plant5, form2Plant5, form3Plant5, form4Plant5, form5Plant5;
    double form1Plant6, form2Plant6, form3Plant6, form4Plant6, form5Plant6;
    double form1Plant7, form2Plant7, form3Plant7, form4Plant7, form5Plant7;
    
    double average;
    
    
    cout << "Enter information for formulation 1: " << endl;
    
    
    cout << "Enter the compressive strength for formulation 1 in MPa for plant 1: " ;
    cin >> form1Plant1;
    checkvalue(form1Plant1, 1, 1);
    
    cout << "Enter the compressive strength for formulation 1 in MPa for plant 2: " ;
    cin >> form1Plant2;
    checkvalue(form1Plant2, 1, 2);
    
    cout << "Enter the compressive strength for formulation 1 in MPa for plant 3: " ;
    cin >> form1Plant3;
    checkvalue(form1Plant3, 1, 3);
    
    cout << "Enter the compressive strength for formulation 1 in MPa for plant 4: " ;
    cin >> form1Plant4;
    checkvalue(form1Plant4, 1, 4);
    
    cout << "Enter the compressive strength for formulation 1 in MPa for plant 5: " ;
    cin >> form1Plant5;
    checkvalue(form1Plant5, 1, 5);
    
    cout << "Enter the compressive strength for formulation 1 in MPa for plant 6: " ;
    cin >> form1Plant6;
    checkvalue(form1Plant6, 1, 6);
    
    cout << "Enter the compressive strength for formulation 1 in MPa for plant 7: " ;
    cin >> form1Plant7;
    checkvalue(form1Plant7, 1, 7);
    
    cout << endl;
    cout << "The average strength for formulation 1 was: " << aver (form1Plant1, form1Plant2, form1Plant3, form1Plant4, form1Plant5, form1Plant6, form1Plant7, average);
    
    cout << endl;
    cout << endl;
    cout << "Enter information for formulation 2: " << endl;
    
    
    cout << "Enter the compressive strength for formulation 2 in MPa for plant 1: " ;
    cin >> form2Plant1;
    checkvalue(form2Plant1, 2, 1);
    
    cout << "Enter the compressive strength for formulation 2 in MPa for plant 2: " ;
    cin >> form2Plant2;
    checkvalue(form2Plant2, 2, 2);
    
    cout << "Enter the compressive strength for formulation 2 in MPa for plant 3: " ;
    cin >> form2Plant3;
    checkvalue(form2Plant3, 2, 3);
    
    cout << "Enter the compressive strength for formulation 2 in MPa for plant 4: " ;
    cin >> form2Plant4;
    checkvalue(form2Plant4, 2, 4);
    
    cout << "Enter the compressive strength for formulation 2 in MPa for plant 5: " ;
    cin >> form2Plant5;
    checkvalue(form2Plant5, 2, 5);
    
    cout << "Enter the compressive strength for formulation 2 in MPa for plant 6: " ;
    cin >> form2Plant6;
    checkvalue(form2Plant6, 2, 6);
    
    cout << "Enter the compressive strength for formulation 2 in MPa for plant 7: " ;
    cin >> form2Plant7;
    checkvalue(form2Plant7, 2, 7);
    
    
    cout << endl;
    cout << "The average strength for formulation 2 was: " << aver (form2Plant1, form2Plant2, form2Plant3, form2Plant4, form2Plant5, form2Plant6, form2Plant7, average);
    
    cout << endl;
    cout << endl;
    cout << "Enter information for formulation 3: " << endl;
    
    
    cout << "Enter the compressive strength for formulation 3 in MPa for plant 1: " ;
    cin >> form3Plant1;
    checkvalue(form3Plant1, 3, 1);
    
    cout << "Enter the compressive strength for formulation 3 in MPa for plant 2: " ;
    cin >> form3Plant2;
    checkvalue(form3Plant2, 3, 2);
    
    cout << "Enter the compressive strength for formulation 3 in MPa for plant 3: " ;
    cin >> form3Plant3;
    checkvalue(form3Plant3, 3, 3);
    
    cout << "Enter the compressive strength for formulation 3 in MPa for plant 4: " ;
    cin >> form3Plant4;
    checkvalue(form3Plant4, 3, 4);
    
    cout << "Enter the compressive strength for formulation 3 in MPa for plant 5: " ;
    cin >> form3Plant5;
    checkvalue(form3Plant5, 3, 5);
    
    cout << "Enter the compressive strength for formulation 3 in MPa for plant 6: " ;
    cin >> form3Plant6;
    checkvalue(form3Plant6, 3, 6);
    
    cout << "Enter the compressive strength for formulation 3 in MPa for plant 7: " ;
    cin >> form3Plant7;
    checkvalue(form3Plant7, 3, 7);
    
    
    cout << endl;
    cout << "The average strength for formulation 3 was: " << aver (form3Plant1, form3Plant2, form3Plant3, form3Plant4, form3Plant5, form3Plant6, form3Plant7, average);
    
    cout << endl;
    cout << endl;
    cout << "Enter information for formulation 4: " << endl;
    
    
    cout << "Enter the compressive strength for formulation 4 in MPa for plant 1: " ;
    cin >> form4Plant1;
    checkvalue(form4Plant1, 4, 1);
    
    cout << "Enter the compressive strength for formulation 4 in MPa for plant 2: " ;
    cin >> form4Plant2;
    checkvalue(form4Plant2, 4, 2);
    
    cout << "Enter the compressive strength for formulation 4 in MPa for plant 3: " ;
    cin >> form4Plant3;
    checkvalue(form4Plant3, 4, 3);
    
    cout << "Enter the compressive strength for formulation 4 in MPa for plant 4: " ;
    cin >> form4Plant4;
    checkvalue(form4Plant4, 4, 4);
    
    cout << "Enter the compressive strength for formulation 4 in MPa for plant 5: " ;
    cin >> form4Plant5;
    checkvalue(form4Plant5, 4, 5);
    
    cout << "Enter the compressive strength for formulation 4 in MPa for plant 6: " ;
    cin >> form4Plant6;
    checkvalue(form4Plant6, 4, 6);
    
    cout << "Enter the compressive strength for formulation 4 in MPa for plant 7: " ;
    cin >> form4Plant7;
    checkvalue(form4Plant7, 4, 7);
    
    
   cout << endl;
   cout << "The average strength for formulation 4 was: " << aver (form4Plant1, form4Plant2, form4Plant3, form4Plant4, form4Plant5, form4Plant6, form4Plant7, average);
    
    cout << endl;
    cout << endl;
    cout << "Enter information for formulation 5: " << endl;
    
    
    cout << "Enter the compressive strength for formulation 5 in MPa for plant 1: " ;
    cin >> form5Plant1;
    checkvalue(form5Plant1, 5, 1);
    
    cout << "Enter the compressive strength for formulation 5 in MPa for plant 2: " ;
    cin >> form5Plant2;
    checkvalue(form5Plant2, 5, 2);
    
    cout << "Enter the compressive strength for formulation 5 in MPa for plant 3: " ;
    cin >> form5Plant3;
    checkvalue(form5Plant3, 5, 3);
    
    cout << "Enter the compressive strength for formulation 5 in MPa for plant 4: " ;
    cin >> form5Plant4;
    checkvalue(form5Plant4, 5, 4);
    
    cout << "Enter the compressive strength for formulation 5 in MPa for plant 5: " ;
    cin >> form5Plant5;
    checkvalue(form5Plant5, 5, 5);
    
    cout << "Enter the compressive strength for formulation 5 in MPa for plant 6: " ;
    cin >> form5Plant6;
    checkvalue(form5Plant6, 5, 6);
    
    cout << "Enter the compressive strength for formulation 5 in MPa for plant 7: " ;
    cin >> form5Plant7;
    checkvalue(form5Plant7, 5, 7);
    
    
   cout << endl;
   cout << "The average strength for formulation 5 was: " << aver (form5Plant1, form5Plant2, form5Plant3, form5Plant4, form5Plant5, form5Plant6, form5Plant7, average);
    
    return 0;
}

/*
 Purpose: check if the inputed data is between 15 and 75 Mpa inclusive.
 
 Input: Input by value the plant and formulation number, and by reference the strenghtening formulation value, in MPa. If the values entered is incorrect the function will request the user to enter an acceptable value.
 
 Output: A message telling the user when his inputed value is leass than 15 MPa or more than 75 MPa, with the plant and formulation number included.
 
 Algorithm:
 -Input by value the plant and formulation number, and by reference the strenghtening formulation value, in MPa.
 -use a while loop to run when the value is greater than 75 or smalles then 15.
 -the statement of the loop output the message to re enter tha value of the "x" formulation and "x" plant, and let the user re-enter the value.
 
 */
void checkvalue (double& form, int formulation_num, int plant_num)
{
        while (form > 75 || form < 15)
        {
            cout << "Value must be between 15 and 75 MPa. Enter value for formulation " << formulation_num << ", plant " << plant_num << ": ";
            cin >> form;
        }
   
}
 /*
  Purpose: Find the highest and lowest formulations.
  
  Input: pass by value to the function the 7 compressive strengths. Pass by reference the minimum and maximum values.

  Output: the function will send back the minimum and maximum values.

  Algorithm:
  To find the minimum:
  Assign the first value to be the minimum. Run an if statements that assign the minimum to the second value if the minimum is greater than the second value. Run another if statement that assign the minimum values to the third value if the minimum is greater than the third value. Repeat doing if statements until all values have being used.

  To find the maximum:
  Assign the first value to be the maximum. Run an if statements that assign the maximum to the second value if the maximum is less than the second value. Run another if statement that assign the maximum values to the third value if the maximum is less than the third value. Repeat doing if statements until all values have being used.
  */

void minmax (double formP1, double formP2, double formP3, double formP4, double formP5, double formP6, double formP7, double& mini, double& maxi)
 {
     
     mini = formP1;
     
    if (mini > formP2)
    {
        mini = formP2;
    }
    if (mini > formP3)
    {
        mini = formP3;
    }
    if (mini > formP4)
    {
        mini = formP4;
    }
    if (mini > formP5)
    {
        mini = formP5;
    }
    if (mini > formP6)
    {
        mini = formP6;
    }
    if (mini > formP7)
    {
        mini = formP7;
    }
     
     maxi = formP1;
      
     if (maxi < formP2)
     {
         maxi = formP2;
     }
     if (maxi < formP3)
     {
         maxi = formP3;
     }
     if (maxi < formP4)
     {
         maxi = formP4;
     }
     if (maxi < formP5)
     {
         maxi = formP5;
     }
     if (maxi < formP6)
     {
         maxi = formP6;
     }
     if (maxi < formP7)
     {
         maxi = formP7;
     }
 }
/*
 purpose: Find the average of the 7 formulation numbers entered without the minimum and maximum.
 
 Input: Pass by value the seven values of the formulation strenghts in MPa, pass by reference the average.
 
 Output: The function return to the function call the average.
 
 Algorithm: Call the function minmax to determine the minimum and maximum. Add the values of all the 7 formulation strenghts and substract the minimum and maximum. Then devide the resulting value by 5. Return to the function call the average value.
 */
double aver (double formP1, double formP2, double formP3, double formP4, double formP5, double formP6, double formP7, double& average)
{
    double mini, maxi;
    
    minmax (formP1, formP2, formP3, formP4, formP5, formP6, formP7, mini, maxi);
    
    average = (formP1 + formP2 + formP3 + formP4 + formP5 + formP6 + formP7 - mini - maxi) / 5;
    
    return average;
}
