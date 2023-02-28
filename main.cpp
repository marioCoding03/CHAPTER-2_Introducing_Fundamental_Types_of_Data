//Beginning C++20 From Novice to Professional(Sixth Edition) EXERCISES
//CHAPTER 2 - Introducing Fundamental Types of Data

//--------------------------------------------------------------------------------------------------------------------------------------------


/*
//PROBLEM:
Exercise 2-1. Create a program that converts inches to feet and inches. In case you’re
unfamiliar with imperial units: 1 foot equals 12 inches. An input of 77 inches, for instance,
should thus produce an output of 6 feet and 5 inches. Prompt the user to enter an integer value
corresponding to the number of inches and then make the conversion and output the result.
*/

//SOLUTION:
#include <iostream>
#include <cmath>

int main() {
    double inches, result_inch, int_part, feet_round_value,result_feet, fractional_value;

    std::cout << "THIS PROGRAM CONVERTS INCHES, TO FEET & INCHES(E.X. 77 inches is equaled to 6 feet and 5 inches)" << std::endl;
    std::cout << "Enter a number in inches to convert it: ";
    std::cin >> inches;  //takes the user's input in inches
    std::cout << std::endl;  // new line to clear things
    result_feet = inches / 12;  // divides user input to see how many times feet goes to inches considering 12 inches is 1 foot
    fractional_value = std::modf(result_feet, &int_part);  //extracts the fractional value of the divided number
    result_inch = fractional_value * 12;  // Multiplies the fractional number by 12 to get the remaining inches
    feet_round_value = std::floor(result_feet);  //rounds down the user's input to get the foots
    std::cout << "Your "<< inches << " equals to: " << feet_round_value << " feet and " << result_inch << " inches"<< std::endl;

    return 0;
}
