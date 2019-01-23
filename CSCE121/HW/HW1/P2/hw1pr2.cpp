//Issa Puppi Chmaitelli
//CSCE 121-509
//Due: September 15th, 2015
//hw1pr1.cpp

#include "std_lib_facilities_4.h"

int main()
{
	//Formula Source: Calculus Dervivation Over Summer Semester
	//Declare variable for the length and begin the program.
	double pi = 3.1415926;
	double length_of_chord = 0;
	cout << "The diameter of the Pizza is 14''.\n";
	cout << "Enter the cord length in Inches: ";

	while (cin >> length_of_chord)
	{
		//Pythagorean Theorem, a^2 + b^2 = c^2, where c is is out radius of the Pizza.
		double a = length_of_chord;
		double b = sqrt(pow(7, 2) - pow(a / 2, 2));
		//Area of a Triangle with it's corners on the circumference of the Pizza and at the center.
		double area_of_triangle = (a * b) / 2;

		//The Following is the conversion from Radians, to Degrees to the Area of the Segment cut off.
		double theta_to_rad = 2 * asin((a / 2) / 7);
		double theta_to_deg = (theta_to_rad) * (180 / pi);
		double area_of_segment = (theta_to_deg / 360) * (pi) * (pow(7, 2));

		//The Following are the calculations for the Area of the slice of Pizza and Whole Pizza.
		double area_of_slice = area_of_segment - area_of_triangle;
		double area_of_whole = (pi)* (pow(7, 2));

		//The calculation and display of the Percent of the Pizza cut off by the chord.
		double percent = ((area_of_slice) / (area_of_whole)) * (100);
		cout << "That cuts off " << percent << "% of the Pizza.\n\n";

		//Repeat the loop
		cout << "Enter the cord length in Inches: ";
	}
	return 0;
}