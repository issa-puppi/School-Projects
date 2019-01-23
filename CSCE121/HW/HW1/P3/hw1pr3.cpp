//Issa Puppi Chmaitelli
//CSCE 121-509
//Due: September 15th, 2015
//hw1pr3.cpp

#include "std_lib_facilities_4.h"

int main()
{
	//Initialization of vectors and variables for the program.
	int grains = 0;
	vector<int> value_of_grains;
	int initial = 1;

	//While loop to count squares untill requirement of 1,000 grains is met.
	while (grains < 1000)
	{
		//Grain calculation and storage of grain count/ square.
		grains = pow(2, initial - 1);
		value_of_grains.push_back(grains);
		initial++;
	}

	//Prints the size of the vector required to exceed 1,000 grains
	cout << "It takes " << value_of_grains.size() << " squares to exceed 1,000 grains.\n";

	//Second while loop to count squares untill the requirement of 1,000,000 grains is met.
	while (grains < 1000000)
	{
		grains = pow(2, initial - 1);
		value_of_grains.push_back(grains);
		initial++;
	}

	//Prints the size of the vector required to exceed 1,000 grains
	cout << "It takes " << value_of_grains.size() << " squares to exceed 1,000,000 grains.\n";

	//Third while loop to count squares how many squares untill the requirement of 1,000,000,000 grains is met.
	while (grains < 1000000000)
	{
		grains = pow(2, initial - 1);
		value_of_grains.push_back(grains);
		initial++;
	}

	//Prints the size of the vector required to exceed 1,000 grains
	cout << "It takes " << value_of_grains.size() << " squares to exceed 1,000,000,000 grains.\n";

	//Keep the window open and end the program
	keep_window_open();
	return 0;
}