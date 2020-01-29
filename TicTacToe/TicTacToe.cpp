// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

void board()
{
	//clears the sceen first
	system("cls");

	//Greet the players
	cout << "Welcome to Tic Tac Toe" << endl;
	cout << "Player 1 will be X" << endl;
	cout << "Player 2 will be O" << endl;
	cout << endl;
	
	//make the grid
	cout << "[" << square[1] << "]" << "[" << square[2] << "]" << "[" << square[3] << "]" << endl;
	cout << "[" << square[4] << "]" << "[" << square[5] << "]" << "[" << square[6] << "]" << endl;
	cout << "[" << square[7] << "]" << "[" << square[8] << "]" << "[" << square[9] << "]" << endl;
	cout << endl;
}

int checkWin()
{
	return 1;
}

int main()
{
	board();

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
