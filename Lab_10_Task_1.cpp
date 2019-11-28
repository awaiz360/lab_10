#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string line;
    int sum = 0;

	ofstream outFile("Task_1.txt");

	int arr[5] = { 2, 4, 8, 7, 1 };

	if (outFile.is_open())
	{
		for (int i = 0; i < 5; i++)
		{
			outFile << arr[i] << " ";

			sum += arr[i];
		}

		cout << "Writing to File" << endl;

		outFile.close();
	}
	else
	{
		cout << "\nFiling Error" << endl;
	}

	ifstream inFile("Task_1.txt");

	cout << "The retrieved data is:- " << endl;

	while (inFile.is_open() && !inFile.eof())
	{
		getline(inFile, line);
		cout << line << endl;
	}

	inFile.close();

	outFile.open("Task_1.txt", ios::app);

	if (outFile.is_open())
	{
		outFile << " Sum = " << sum << endl;

		outFile.close();
	}

    return 0;
}