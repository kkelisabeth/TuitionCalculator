/*
* Creator:     Kozlova Elizabeth Paula
*
* Title:	   Tuition Calculator
*
* Description:
*			   This program is used to calculate the yearly tuition for x years and the total cost for x years
*/

#include <iostream>
using namespace std;

//function prototypes 

void TuitionCalculator(int& choice, int& years, int& totalTuition, int& yearlyTuition);
int YearlyTuition(int& years);
int TotalTuition(int& years);
void YearlyAndTotalTuition(int& years);

//main function 

int main()
{
	int choice = 0, years = 0;
	int totalTuition = 0, yearlyTuition = 0;
	TuitionCalculator(choice, years, totalTuition, yearlyTuition);
}

//function that performs the main task of the program 

void TuitionCalculator(int& choice, int& years, int& totalTuition, int& yearlyTuition)
{
	//displaying the menu 

	cout << "Welcome to the tuition calculator!" << endl;
	cout << "\n1 Compute the yearly tuition in x years from today" << endl;
	cout << "2 Compute the total tuition cost for y years from today" << endl;
	cout << "3 Compute yearly tuition and total tuition cost at the end of each year, for x years " << endl;
	cout << "0 Quit ptogram" << endl;

	//accepting the choice from the user 

	cout << "\nEnter choice: ";
	cin >> choice;

	//while-loop which will terminate the program when the choice is zero 

	while (choice != 0)
	{
		//switch statement used for different choices of the user 

		switch (choice)
		{

			//case 1: displaying the yearly tuition 

		case 1:

			//accepting the number of years from the user

			cout << "You want to know the yearly tuition in how many years from today? ";
			cin >> years;

			//calling the function that calculates the yearly tuition 

			yearlyTuition = YearlyTuition(years);

			//displaying the answer 

			cout << "The yearly tuition after " << years << " years from today will be " << yearlyTuition << endl;
			break;

			//case 2: displaying the total cost 

		case 2:

			//accepting the number of years from the user

			cout << "You want to know the total tuition in how many years from today? ";
			cin >> years;

			//calling the function that calculates the total cost 

			totalTuition = TotalTuition(years);

			//displaying the answer 

			cout << "The total tuition cost after " << years << " years from today will be " << totalTuition << endl;
			break;

			//case 3: displaying the yearly tuition and total cost 

		case 3:

			//accepting the number of years from the user

			cout << "How many years you want to consider starting from today? ";
			cin >> years;

			//calling the function that calculates both yearly tuition and total cost 

			YearlyAndTotalTuition(years);
			break;

		default:
			cout << "Invalid choice." << endl;
		}

		//accepting from the user next choice 

		cout << "\nEnter choice: ";
		cin >> choice;
	}

	//program termination 

	cout << "Goodbye!" << endl;
}

//function that calculates the yearly tuition 

int YearlyTuition(int& years)
{
	//initializing variables 

	int i = 1;
	int cost1 = 10000;
	int yearlyTuition = 0;

	//calculating the yearly tuition 

	while (i <= years)
	{
		yearlyTuition = cost1 * 0.05 + cost1;
		cost1 = yearlyTuition;
		i++;
	}

	return yearlyTuition;
}

//function that calculates the total cost 

int TotalTuition(int& years)
{
	//initializing variables 

	int i = 2;
	int cost1 = 10000;
	int totalTuition = 10000;
	int yearlyTuition = 10000;

	//calculating the total cost 

	while (i <= years)
	{
		yearlyTuition = cost1 * 0.05 + cost1;
		totalTuition = totalTuition + yearlyTuition;
		cost1 = yearlyTuition;
		i++;
	}

	return totalTuition;
}

//function that calculates both yearly tuition and total cost 

void YearlyAndTotalTuition(int& years)
{
	//initializing variables 

	int i = 2, j = 1;
	int cost1 = 10000;
	int yearlyTuition = 10000, totalTuition = 10000;

	//displaying the yearly tuition and total cost of the first year 

	cout << "Year		Tuition		Total Tuition Cost at the End of Year" << endl;
	cout << j << "		" << yearlyTuition << "		" << totalTuition << endl;

	//calculating the yearly tuition and total cost of the next years 

	while (i <= years)
	{
		yearlyTuition = cost1 * 0.05 + cost1;
		totalTuition = totalTuition + yearlyTuition;
		cost1 = yearlyTuition;

		//displaying the answer 

		cout << i << "		" << yearlyTuition << "		" << totalTuition << endl;
		i++;
	}
}