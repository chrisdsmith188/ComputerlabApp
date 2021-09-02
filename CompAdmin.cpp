// CompAdmin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include  <string>


using namespace std;


void printLab(string* Labs[]) {

	cout << "Lab1:\n";

	for (int i = 0; i < 10; i++)
	{
		cout << "PC" << i + 1 << ":" << Labs[0][i] << endl;
	}
	cout << endl;

	cout << "Lab2:\n";

	for (int i = 0; i < 6; i++)
	{
		cout << "PC " << i + 1 << ":" << Labs[1][i] << endl;
	}
	cout << endl;

	cout << "Lab3:\n";

	for (int i = 0; i < 3; i++)
	{
		cout << "PC" << i + 1 << ":" << Labs[2][i] << endl;
	}
	cout << endl;

	cout << "Lab4:\n";

	for (int i = 0; i < 12; i++)
	{
		cout << "PC" << i + 1 << ":" << Labs[3][i] << endl;
	}
	cout << endl;



}

void LogIn(string* Labs[])

{
	string StudentName;
	int labNum;
	int compNum;


	string User_input;
	cout << "Which Lab and Computer" << endl;
	cin >> labNum;
	cout << "Enter the computer number" << endl;
	cin >> compNum;
	cout << " Enter your name" << endl;
	cin >> StudentName;

	if (Labs[labNum - 1][compNum - 1] != "Free")
	{

		cout << "Computer is taken";

	}

	else
	{
		Labs[labNum - 1][compNum - 1] = StudentName;
	}





}


void LogOut(string* Labs[])

{
	string StudentName;
	int labNum;
	int compNum;


	string User_input;
	cout << "Which Lab " << endl;
	cin >> labNum;
	cout << "Enter the computer number" << endl;
	cin >> compNum;
	cout << " Enter your name" << endl;
	cin >> StudentName;

	if (Labs[labNum - 1][compNum - 1] != StudentName)
	{

		cout << " Computer is free";

	}

	else
	{
		Labs[labNum - 1][compNum - 1] = "Free";

	}


}










int main()
{
	char choice;
	string empty_computer = "Free";

	string* Labs[4];

	Labs[0] = new string[10];
	Labs[1] = new string[6];
	Labs[2] = new string[3];
	Labs[3] = new string[12];

	for (int i = 0; i < 10; i++)
	{
		Labs[0][i] = empty_computer;
	}

	for (int i = 0; i < 6; i++)
	{
		Labs[1][i] = empty_computer;
	}

	for (int i = 0; i < 3; i++)
	{
		Labs[2][i] = empty_computer;
	}

	for (int i = 0; i < 12; i++)
	{
		Labs[3][i] = empty_computer;
	}

	if (Labs[0][2] == Labs[3][1])
	{
		cout << "\n\n Allocated properly\n\n\n";
	}

	do {



		cout << " \n Menu:\n"
			<< " 1) Chose option 1 to print conditions of labs\n"
			<< " 2) Sign in\n"
			<< " 3) Sign out\n"
			<< " 4) Quit\n"
			<< endl;
		cin >> choice;


		switch (choice) {
		case '1':
			"1. To see condition of labs";
			printLab(Labs);


			break;
		case '2':
			"2. User Login ";
			LogIn(Labs);

			break;

		case '3':

			"3. USer Log out ";
			LogOut(Labs);

			break;
		case '4':
			" 4. Quit Program ";

			break;
		case '5':

			break;
		default:
			cout << "Invalid " << endl;
		}

	} while (choice != 5);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
