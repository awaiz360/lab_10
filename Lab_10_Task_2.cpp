#include <iostream>
#include<fstream>
#include <string>

using namespace std;

int main()
{
	string line, name;
	int age;

	ofstream outFile("Task_2.txt");
	ifstream inFile("Task_2.txt");

	if (outFile.is_open())
	{
		cout << "Writing to File:-" << endl;
		cout << "Enter your name: ";
		getline(cin, name);
		cout << "Enter your age: ";
		cin >> age;

		outFile << "Name: " << name << endl;
		outFile << "Age: " << age << endl;

		outFile.close();
	}
	else
	{
		cout << "\nFiling Error" << endl;
	}

	cout << "\nReading From File:-" << endl;

	while (inFile.is_open() && !inFile.eof())
	{
		getline(inFile, line);
		cout << line << endl;
	}

	inFile.close();

    return 0;
}