#include <stdio.h>
#include <string.h>
#include <ctype.h> //This header file to convert string to lower case
#include "Header.h"

char* testResult(char *Player1, char *Player2)
{
	//Conditional variables
	int p1_input = 1, p2_input = 1;

	//Input validation from user
	if (_strcmpi(Player1, "rock") == 0 || _strcmpi(Player1, "paper") == 0 || _strcmpi(Player1, "scissors")==0)
	{ p1_input = 0; }
	else
	{ return "Invalid 1"; }

	if (_strcmpi(Player2, "rock") == 0 || _strcmpi(Player2, "paper") == 0 || _strcmpi(Player2, "scissors") == 0)
	{	p2_input = 0; }
	else
	{	return "Invalid"; }

	//Condition: When both player has same entries
	if (_strcmpi(Player1, Player2) == 0)
	{ //If the input from both users are same, it would return draw
		return "Draw";
	}

	//Condition for: rock and paper
	if (_strcmpi(Player1, "rock") == 0 && _strcmpi(Player2, "paper")==0)
	{
		return "Player2";
	}
	else if (_strcmpi(Player1, "paper") == 0 && _strcmpi(Player2, "rock")==0)
	{
		return "Player2";
	}

	//Condition for: rock and scissors
	if (_strcmpi(Player1, "rock") == 0 && _strcmpi(Player2, "scissors")==0)
	{
		return "Player1";
	}
	else if (_strcmpi(Player1, "scissors") == 0 && _strcmpi(Player2, "rock")==0)
	{
		return "Player2";
	}
	
	//Condition for: paper and scissors
	if (_strcmpi(Player1, "paper") == 0 && _strcmpi(Player2, "scissors")==0)
	{
		return "Player2";
	}
	else if (_strcmpi(Player1, "scissors") == 0 && _strcmpi(Player2, "paper") == 0)
	{
		return "Player1";
	}
}

int main()
{
	//char user_1[10], user_2[10];

	/*
	printf("User 1- Enter your choice:");
	fscanf_s("%c", &user_1);

	printf("User 2- Enter your choice:");
	fscanf_s("%c", &user_2);*/

	printf("%s\n", testResult("paper", "scissors"));
}