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
	//if one of the players match the first row
 	if (square[1] == square[2] && square[2] == square[3])
		return 1;

	//if one of the players match the second row
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;

	//if one of the players match the third row
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;

	//if one of the players match the first column
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;

	//if one of the players match the second column
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;

	//if one of the players match the third column
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;

	//if one of the players match diagonally left to right
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;

	//if one of the players match diagonally right to left
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;

	//if the players CAT the game
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
		&& square[4] != '4' && square[5] != '5' && square[6] != '6'
		&& square[7] != '7' && square[8] != '8' && square[9] != '9')
		return -1;

	//if game is over
	else
		return 0;
}

int main()
{
	char mark;
	int player = 1,i,choice;

	while (checkWin() == 2)
	{
		//draws the borad and welcome message
		board();
		player = (player % 2) ? 1 : 2;

		cout << "Player " << player << ", enter a number: ";
		cin >> choice;

		mark = (player == 1) ? 'X' : 'O';

		if (choice == 1 && square[1] == '1')
			square[1] = mark;

		else if (choice == 2 && square[2] == '2')
			square[2] = mark;

		else if (choice == 3 && square[3] == '3')
			square[3] = mark;

		else if (choice == 4 && square[4] == '4')
			square[4] = mark;

		else if (choice == 5 && square[5] == '5')
			square[5] = mark;

		else if (choice == 6 && square[6] == '6')
			square[6] = mark;

		else if (choice == 7 && square[7] == '7')
			square[7] = mark;

		else if (choice == 8 && square[8] == '8')
			square[8] = mark;

		else if (choice == 9 && square[9] == '9')
			square[9] = mark;
		else
		{
			cout << "Invaild Move";
			player--;
			cin.ignore();
			cin.get();
		}

		i = checkWin();

		player++;

		if (i == 1)
			cout << "Player " << --player << " wins!";

	}
	


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
