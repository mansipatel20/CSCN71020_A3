#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

//Connecting the test project to base project, i.e. main.c
extern "C" char* testResult(char*, char*);

namespace UnitTestAssignment3
{
	TEST_CLASS(UnitTestAssignment3)
	{
	public:
		//Testing the return of the function
		TEST_METHOD(ReturnStatement_Wrong)
		{
			//Declaring variables
			char userOne_input[50] = "Rock";
			char userTwo_input[50] = "BAC";
			char output_function[10] = {};

			Assert::AreEqual("Invalid", testResult(userOne_input, userTwo_input));
		}

		TEST_METHOD(Draw_Result_Test)
		{
			//Declaring variables
			char userOne_input[50] = "Scissors";
			char userTwo_input[50] = "Scissors";
			char output_function[10] = {};

			Assert::AreEqual("Draw", testResult(userOne_input, userTwo_input));
		}

		TEST_METHOD(Player1_Win_Result_Test)
		{
			//Declaring variables
			char userOne_input[50] = "Rock";
			char userTwo_input[50] = "Paper";
			char output_function[10] = {};

			Assert::AreEqual("Player2", testResult(userOne_input, userTwo_input));
		}

		TEST_METHOD(Player2_Win_Result_Test)
		{
			//Declaring variables
			char userOne_input[50] = "Scissors";
			char userTwo_input[50] = "Paper";
			char output_function[10] = {};

			Assert::AreEqual("Player1", testResult(userOne_input, userTwo_input));
		}


	};
}
