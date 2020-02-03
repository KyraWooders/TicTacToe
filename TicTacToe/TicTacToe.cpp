// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

//holds the game's grid space
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

//makes the game board and welcomes the players
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

//checks all the ways to win and draw the game
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

	//if the players draw the game
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
		  && square[4] != '4' && square[5] != '5' && square[6] != '6'
		  && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return -1;
	
	//if game is running
	else
	{
		return 0;
	}
}

//hlods the main game
int main()
{
	char mark;
	int player = 1,i,choice;

	//draws the borad and welcome message
	board();

	//while the game is running
	while (checkWin() == 0)
	{
		//only can switch from two players
		player = (player % 2) ? 1 : 2;

		//shows who's turn is it
		cout << "Player " << player << ", enter a number: ";
		cin >> choice;

		//switch from two players' markings
		mark = (player == 1) ? 'X' : 'O';

		//mark the player's choice of space
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

		//if the spot is taken by the other player
		else
		{
			cout << "Invaild Move";
			player--;
			cin.ignore();
			cin.get();
		}

		//check if any player won
		i = checkWin();

		//draws the borad again
		board();

		//if one of the players wins
		if (i == 1)
		{
			cout << "Player " << player << " wins!";
			cin.ignore();
			cin.get();
		}

		//if there are no other moves left
		else if (i == -1)
		{
			cout << "Draw";
			cin.ignore();
			cin.get();
		}
			
		//swich player
		player++;
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
