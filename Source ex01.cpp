//
//Marnie Rimes
//HW06 ex01
//Liang 13.1: Create a text file
//
#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	fstream fout;
	//opens file
	fout.open("Exercise13_1.txt");
	
	//checks if file exists
	if (fout.fail())
	{
		//tells user if it couldn't open or find the file
		cout << "File does not exist yet, creating new file" << endl;
		fout.open("Exercise13_1.txt");
		//creates random integers
		srand(time(0));
		//outputs random integers into the file
		for (int i = 0; i < 100; i++)
		{
			int x = rand() % 100;
			fout << x << " ";
		}
		//closes file
		fout.close();
	}
	//closes file
	fout.close();
	//opens file to append data
	fout.open("Exercise13_1.txt", ios::out | ios::app);
	//creates random integer
	srand(time(0));
		for (int i = 0; i < 100; i++)
		{
			//outputs integers into the file
			int x = rand() % 100;
			fout << x << " ";
		}
		fout << endl;
		//closes file
		fout.close();
	
}