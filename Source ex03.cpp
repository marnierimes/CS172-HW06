//
//Marnie Rimes
//HW06 ex03
//Liang 13.5: Baby names
//
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	string year;
	string a = "Babynameranking";
	string b = ".txt";
	//prompts user to enter year
	cout << "Enter the year: ";
	cin >> year;
	//uses the year to find the right file
	string filename = a + year + b;

	//opens file based on year
	ifstream input(filename.c_str());
	char gender;
	string name;
	
	//prompts user to enter gender
	cout << "Enter the gender: ";
	cin >> gender;
	//prompts user to enter gender
	cout << "Enter the name: ";
	cin >> name;
	string rank, mname, mpop, fname, fpop;
	string namerank;
	//else if statements depending on if the user entered 'M' or 'F'
	if (gender == 'M')
	{
		while (!input.fail())
		{
			input >> rank >> mname >> mpop >> fname >> fpop;
			//checks if the male name in the line is the same as the given name
			if (mname == name)
			{
				//save the ranking of that line
				namerank = rank;
			}
		}
	}
	else if (gender == 'F')
	{
		while (!input.fail())
		{
			//checks if the female name in the line is the same as the given name
			input >> rank >> mname >> mpop >> fname >> fpop;
			if (fname == name)
			{
				//save the ranking of that line
				namerank = rank;
			}
		}
	}
	else
		//outputs this if 'F' or 'M' not entered
		cout << "Not a valid gender \n";
	
	//outputs the ranking of the given name in the given year
	cout << name << " is ranked #" << namerank << " in the year " << year << endl;
	//closes file
	input.close();

	return 0;
}