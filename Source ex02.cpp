//
//Marnie Rimes
//HW06 ex02
//Liang 13.2: Count characters
//
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	string filename;
	int count = 0;
	//prompts user to enter a filename
	cout << "Enter a filename: ";
	cin >> filename;

	//opens file for input and output
	fstream iofile(filename.c_str());
	//Checks if file exists
	if (iofile.fail())
	{
		//lets user know it can't find the given file
		cout << "Can't find file: " << filename << endl;
	}
	else
	{
		char character;
		//loops until the last character in the file
		while (iofile >> character)
		{
			//increments the count of characters for each character
			count++;
		}
		iofile.clear(); //clears any flages
		iofile.seekp(0, ios::end); //moves file pointer to the end of the file
		iofile << "\nThis file has " << count << " characters.\n"; //outputs in file the number of characters
	}
	//closes file
	iofile.close();

	return 0;
}