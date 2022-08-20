/*
 Gabriel Sanson
 Lab 2
 Problem 2: English to Metric Conversion:
 
 Purpose: Allow user to convert English units to metric units.

 Input: Ask the user the type of conversion he/she wants to make. Ask the user the value to be converted.

 Output: The user conversion of her given English unit with the actual metric unit.

 Algorithm: Ask the user the what type of conversion he/she would like to make: inches to centimeters, quarts to liters, pounds to kilograms, miles to kilometers, or ounces to grams. Once he/she states the conversion ask the quantity to be converted. If the quantity is less than 0 make him re-enter a value, and a message telling him that negative numbers are invalid. If he chose inches to centimeters: multiply by 2.54. If he chose quarts to liters: multiply by 0.95. If he choses pounds
to kilograms: multiply by 0.45. If he choses miles to kilometers: multiply by 1.61. If he choses ounces to grams: multiply by 28.35. Then output the multiplication value.

 Test Data: ounces to grams, 8 ounces, 226.8 grams */


#include <iostream>
using namespace std;

int main() {
    
    char user_input;
    double english_unit;
    
    double centimeters;
    double liters;
    double kilograms;
    double kilometers;
    double grams;
    
    cout << "Please enter the conversion you are trying to make by typing the corresponding letter " << endl << "A for Inches to Centimeters " << endl << "B for Quarts to Liters" << endl << "C for Pounds to Kilograms" << endl << "D for Miles to Kilometers" << endl << "E for Ounces to Grams" << endl;
    
    cin >> user_input;
    
    
    cout << "Value to be converted: "; cin >> english_unit;
    
    if (english_unit < 0)
    {
        cout << "Invalid value. Please enter a positive value "; cin >> english_unit ;
    }
    
    centimeters = english_unit * 2.54;
    liters = english_unit * 0.95;
    kilograms = english_unit * 0.45;
    kilometers = english_unit * 1.61;
    grams = english_unit * 28.35;
    
    
    if (user_input == 'a' || user_input == 'A')
    {
        cout << english_unit << " inches is equal to " << centimeters << " centimeters";
    }
    if (user_input == 'b' || user_input == 'B')
    {
        cout << english_unit << " quarts is equal to " << liters << " liters";
    }
    if (user_input == 'c' || user_input == 'C')
    {
        cout << english_unit << " pounds is equal to " << kilograms << " kilograms";
    }
    if (user_input == 'd' || user_input == 'D')
    {
        cout << english_unit << " miles is equal to " << kilometers << " kilometers";
    }
    if (user_input == 'e' || user_input == 'E')
    {
        cout << english_unit << " ounces is equal to " << grams << " grams";
    }
    
    cout << endl;
    
    return 0;
}
