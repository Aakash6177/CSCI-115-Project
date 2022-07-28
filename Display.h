#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Border designs from https://www.asciiart.eu/art-and-design/borders
// Welcome word art from https://onlineasciitools.com/convert-text-to-ascii-art

/*
* The display class handles each display screen and their corresponding data.
*/
class Display
{
public:

	/* A static method to create the Welcome Menu Display
	* 
	* @param int option			- The option to switch the display type
	* 
	* @returns void
	*/
	static void welcomeMenu(int option)
	{
		Clear();
		switch (option)
		{
			case 1:
				cout << R"(  /= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\)""\n"
						R"( /= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\)""\n"
						  "||                                                               ||\n"
						  "||               TERM PROJECT - SORTING ALGORITHMS               ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||               __      __   _                                  ||\n"
						R"(||               \ \    / /__| |__ ___ _ __  ___                 ||)""\n"
						R"(||                \ \/\/ / -_) / _/ _ \ '  \/ -_)                ||)""\n"
						R"(||                 \_/\_/\___|_\__\___/_|_|_\___|                ||)""\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                   PLEASE MAKE A SELECTION:                    ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                1) Select a Sorting Algorithm                  ||\n"
						  "||                2) Testing Data Options                        ||\n"
						  "||                3) Change Display                              ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                                                      Q = Quit ||\n"
						R"( \ = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = /)""\n"
						R"(  \ = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = /)""\n";
				break;
			case 2:
				cout << R"(-----------------------------------------------------------------)""\n"
						R"(: + - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - + :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: / :           TERM PROJECT - SORTING ALGORITHMS           : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                                                       : / :)""\n"
						R"(: | :           __      __   _                              : | :)""\n"
						R"(: / :           \ \    / /__| |__ ___ _ __  ___             : \ :)""\n"
						R"(: - :            \ \/\/ / -_) / _/ _ \ '  \/ -_)            : - :)""\n"
						R"(: \ :             \_/\_/\___|_\__\___/_|_|_\___|            : / :)""\n"
						R"(: | :                                                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :               PLEASE MAKE A SELECTION:                : / :)""\n"
						R"(: | :                                                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :           1) Select a Sorting Algorithm               : - :)""\n"
						R"(: \ :           2) Testing Data Options                     : / :)""\n"
						R"(: | :           3) Change Display                           : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                                              Q = Quit : / :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: + - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - + :)""\n"
						R"(-----------------------------------------------------------------)""\n";
				break;
			case 3:
				cout << ".-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.\n"
						"|                                                                       |\n"
						"|                   TERM PROJECT - SORTING ALGORITHMS                   |\n"
					  R"(|                                                                       |)""\n"
					  R"(|                                                                       |)""\n"
					  R"(|                   __      __   _                                      |)""\n"
					  R"(|                   \ \    / /__| |__ ___ _ __  ___                     |)""\n"
					  R"(!                    \ \/\/ / -_) / _/ _ \ '  \/ -_)                    !)""\n"
					  R"(:                     \_/\_/\___|_\__\___/_|_|_\___|                    :)""\n"
					  R"(:                                                                       :)""\n"
					  R"(.                                                                       .)""\n"
						".                                                                       .\n"
						":                        PLEASE MAKE A SELECTION:                       :\n"
						":                                                                       :\n"
						"!                                                                       !\n"
						"|                     1) Select a Sorting Algorithm                     |\n"
						"|                     2) Testing Data Options                           |\n"
						"|                     3) Change Display                                 |\n"
						"|                                                                       |\n"
						"|                                                                       |\n"
						"|                                                              Q = Quit |\n"
						".-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.\n";
				break;
			default:
				cout << R"(-----------------------------------------------------------------)""\n"
						R"(: + - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - + :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: / :           TERM PROJECT - SORTING ALGORITHMS           : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                                                       : / :)""\n"
						R"(: | :           __      __   _                              : | :)""\n"
						R"(: / :           \ \    / /__| |__ ___ _ __  ___             : \ :)""\n"
						R"(: - :            \ \/\/ / -_) / _/ _ \ '  \/ -_)            : - :)""\n"
						R"(: \ :             \_/\_/\___|_\__\___/_|_|_\___|            : / :)""\n"
						R"(: | :                                                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :               PLEASE MAKE A SELECTION:                : / :)""\n"
						R"(: | :                                                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :           1) Select a Sorting Algorithm               : - :)""\n"
						R"(: \ :           2) Testing Data Options                     : / :)""\n"
						R"(: | :           3) Change Display                           : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                                              Q = Quit : / :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: + - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - + :)""\n"
						R"(-----------------------------------------------------------------)""\n";
		}
	}

	/* A static method to create the Sort Menu Display
	* where the user picks the sort algorithm
	*
	* @param int option			- The option to switch the display type
	* @param bool viewData		- A true/false option to see the arrays before and after sorting
	*
	* @returns void
	*/
	static void algorithmMenu(int option, bool viewData)
	{
		Clear();
		switch (option)
		{
			case 1:
				cout <<   R"(  /= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\)""\n"
						  R"( /= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\)""\n"
						    "||                                                               ||\n"
						    "||               TERM PROJECT - SORTING ALGORITHMS               ||\n"
						    "||                                                               ||\n"
						    "||                                                               ||\n"
						    "||                       ___          _                          ||\n"
					      R"(||                      / __| ___ _ _| |_                        ||)""\n"
					      R"(||                      \__ \/ _ \ '_|  _|                       ||)""\n"
					      R"(||                      |___/\___/_|  \__|                       ||)""\n"
						    "||                                                               ||\n"
						    "||                                                               ||\n"
						    "||                                                               ||\n"
						    "||                   PLEASE MAKE A SELECTION:                    ||\n"
						    "||                                                               ||\n"
						    "||                                                               ||\n"
						    "||        1) Insertion      4) Merge         7) Quick            ||\n"
						    "||        2) Selection      5) Heap Min      8) Counting         ||\n"
						    "||        3) Bubble         6) Heap Max      9) Radix            ||\n"
						    "||                                                               ||\n"
						    "||                                                               ||\n";
				if (viewData)
					cout << "|| B = Back                D = Hide Data                Q = Quit ||\n";
				else
					cout << "|| B = Back                D = View Data                Q = Quit ||\n";
				cout <<	  R"( \ = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = /)""\n"
						  R"(  \ = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = /)""\n";
				break;
			case 2:
				cout <<     R"(-----------------------------------------------------------------)""\n"
						    R"(: + - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - + :)""\n"
						    R"(: | <-------------------------------------------------------> | :)""\n"
						    R"(: / :           TERM PROJECT - SORTING ALGORITHMS           : \ :)""\n"
						    R"(: - :                                                       : - :)""\n"
						    R"(: \ :                                                       : / :)""\n"
						    R"(: | :                   ___          _                      : | :)""\n"
						    R"(: / :                  / __| ___ _ _| |_                    : \ :)""\n"
						    R"(: - :                  \__ \/ _ \ '_|  _|                   : - :)""\n"
						    R"(: \ :                  |___/\___/_|  \__|                   : / :)""\n"
						    R"(: | :                                                       : | :)""\n"
						    R"(: / :                                                       : \ :)""\n"
						    R"(: - :                                                       : - :)""\n"
						    R"(: \ :               PLEASE MAKE A SELECTION:                : / :)""\n"
						    R"(: | :                                                       : | :)""\n"
						    R"(: / :                                                       : \ :)""\n"
						    R"(: - :     1) Insertion      4) Merge         7) Quick       : - :)""\n"
						    R"(: \ :     2) Selection      5) Heap Min      8) Counting    : / :)""\n"
						    R"(: | :     3) Bubble         6) Heap Max      9) Radix       : | :)""\n"
						    R"(: / :                                                       : \ :)""\n"
						    R"(: - :                                                       : - :)""\n";
				if (viewData)
					cout << R"(: \ : B = Back             D = Hide Data           Q = Quit : / :)""\n";
				else
					cout << R"(: \ : B = Back             D = View Data           Q = Quit : / :)""\n";
				cout <<     R"(: | <-------------------------------------------------------> | :)""\n"
						    R"(: + - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - + :)""\n"
						    R"(-----------------------------------------------------------------)""\n";
				break;
			case 3:
				cout <<     ".-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.\n"
						    "|                                                                       |\n"
						    "|                   TERM PROJECT - SORTING ALGORITHMS                   |\n"
					      R"(|                                                                       |)""\n"
					      R"(|                                                                       |)""\n"
					      R"(|                           ___          _                              |)""\n"
					      R"(|                          / __| ___ _ _| |_                            |)""\n"
					      R"(!                          \__ \/ _ \ '_|  _|                           !)""\n"
					      R"(:                          |___/\___/_|  \__|                           :)""\n"
					      R"(:                                                                       :)""\n"
					      R"(.                                                                       .)""\n"
						    ".                                                                       .\n"
						    ":                       PLEASE MAKE A SELECTION:                        :\n"
						    ":                                                                       :\n"
						    "!                                                                       !\n"
						    "|           1) Insertion      4) Merge         7) Quick                 |\n"
						    "|           2) Selection      5) Heap Min      8) Counting              |\n"
						    "|           3) Bubble         6) Heap Max      9) Radix                 |\n"
						    "|                                                                       |\n"
						    "|                                                                       |\n";
				if (viewData)
					cout << "| B = Back                   D = Hide Data                     Q = Quit |\n";
				else
					cout << "| B = Back                   D = View Data                     Q = Quit |\n";
				cout <<     ".-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.\n";
				break;
			default:
				cout <<     R"(-----------------------------------------------------------------)""\n"
						    R"(: + - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - + :)""\n"
						    R"(: | <-------------------------------------------------------> | :)""\n"
						    R"(: / :           TERM PROJECT - SORTING ALGORITHMS           : \ :)""\n"
						    R"(: - :                                                       : - :)""\n"
						    R"(: \ :                                                       : / :)""\n"
						    R"(: | :                   ___          _                      : | :)""\n"
						    R"(: / :                  / __| ___ _ _| |_                    : \ :)""\n"
						    R"(: - :                  \__ \/ _ \ '_|  _|                   : - :)""\n"
						    R"(: \ :                  |___/\___/_|  \__|                   : / :)""\n"
						    R"(: | :                                                       : | :)""\n"
						    R"(: / :                                                       : \ :)""\n"
						    R"(: - :                                                       : - :)""\n"
						    R"(: \ :               PLEASE MAKE A SELECTION:                : / :)""\n"
						    R"(: | :                                                       : | :)""\n"
						    R"(: / :                                                       : \ :)""\n"
						    R"(: - :     1) Insertion      4) Merge         7) Quick       : - :)""\n"
						    R"(: \ :     2) Selection      5) Heap Min      8) Counting    : / :)""\n"
						    R"(: | :     3) Bubble         6) Heap Max      9) Radix       : | :)""\n"
						    R"(: / :                                                       : \ :)""\n"
						    R"(: - :                                                       : - :)""\n";
				if (viewData)
					cout << R"(: \ : B = Back             D = Hide Data           Q = Quit : / :)""\n";
				else
					cout << R"(: \ : B = Back             D = View Data           Q = Quit : / :)""\n";
				cout <<     R"(: | <-------------------------------------------------------> | :)""\n"
						    R"(: + - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - + :)""\n"
						    R"(-----------------------------------------------------------------)""\n";
		}
	}

	/* A static method to create the Data Menu Display
	* where the user can generate a new dataset and view the current one
	*
	* @param int option			- The option to switch the display type
	* @param bool viewData		- A true/false option to see the current data array
	*
	* @returns void
	*/
	static void dataMenu(int option, bool viewData)
	{
		Clear();
		switch (option)
		{
			case 1:
				cout <<   R"(  /= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\)""\n"
						  R"( /= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\)""\n"
						    "||                                                               ||\n"
						    "||               TERM PROJECT - SORTING ALGORITHMS               ||\n"
						    "||                                                               ||\n"
						    "||                                                               ||\n"
						    "||                      ___       _                              ||\n"
					      R"(||                     |   \ __ _| |_ __ _                       ||)""\n"
						  R"(||                     | |) / _` |  _/ _` |                      ||)""\n"
						  R"(||                     |___/\__,_|\__\__,_|                      ||)""\n"
						    "||                                                               ||\n"
						    "||                                                               ||\n"
						    "||                                                               ||\n"
						    "||                   PLEASE MAKE A SELECTION:                    ||\n"
						    "||                                                               ||\n"
						    "||                                                               ||\n"
						    "||                1) Generate New Testing Data                   ||\n";
				if (viewData)
					cout << "||                2) Hide Testing Data                           ||\n";
				else
					cout << "||                2) View Testing Data                           ||\n";
				cout <<     "||                                                               ||\n"
						    "||                                                               ||\n"
						    "||                                                               ||\n"
						    "|| B = Back                                             Q = Quit ||\n"
						  R"( \ = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = /)""\n"
						  R"(  \ = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = /)""\n";
				break;
			case 2:
				cout <<     R"(-----------------------------------------------------------------)""\n"
						    R"(: + - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - + :)""\n"
						    R"(: | <-------------------------------------------------------> | :)""\n"
						    R"(: / :           TERM PROJECT - SORTING ALGORITHMS           : \ :)""\n"
						    R"(: - :                                                       : - :)""\n"
						    R"(: \ :                                                       : / :)""\n"
						    R"(: | :                  ___       _                          : | :)""\n"
						    R"(: / :                 |   \ __ _| |_ __ _                   : \ :)""\n"
						    R"(: - :                 | |) / _` |  _/ _` |                  : - :)""\n"
						    R"(: \ :                 |___/\__,_|\__\__,_|                  : / :)""\n"
						    R"(: | :                                                       : | :)""\n"
						    R"(: / :                                                       : \ :)""\n"
						    R"(: - :                                                       : - :)""\n"
						    R"(: \ :               PLEASE MAKE A SELECTION:                : / :)""\n"
						    R"(: | :                                                       : | :)""\n"
						    R"(: / :                                                       : \ :)""\n"
						    R"(: - :            1) Generate New Testing Data               : - :)""\n";
				if (viewData)
					cout << R"(: \ :            2) Hide Testing Data                       : / :)""\n";
				else
					cout << R"(: \ :            2) View Testing Data                       : / :)""\n";
				cout <<     R"(: | :                                                       : | :)""\n"
						    R"(: / :                                                       : \ :)""\n"
						    R"(: - :                                                       : - :)""\n"
						    R"(: \ : B = Back                                     Q = Quit : / :)""\n"
						    R"(: | <-------------------------------------------------------> | :)""\n"
						    R"(: + - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - + :)""\n"
						    R"(-----------------------------------------------------------------)""\n";
				break;
			case 3:
				cout <<     ".-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.\n"
						    "|                                                                       |\n"
						    "|                   TERM PROJECT - SORTING ALGORITHMS                   |\n"
					      R"(|                                                                       |)""\n"
					      R"(|                                                                       |)""\n"
					      R"(|                          ___       _                                  |)""\n"
					      R"(|                         |   \ __ _| |_ __ _                           |)""\n"
					      R"(!                         | |) / _` |  _/ _` |                          !)""\n"
					      R"(:                         |___/\__,_|\__\__,_|                          :)""\n"
					      R"(:                                                                       :)""\n"
					      R"(.                                                                       .)""\n"
						    ".                                                                       .\n"
						    ":                       PLEASE MAKE A SELECTION:                        :\n"
						    ":                                                                       :\n"
						    "!                                                                       !\n"
						    "|                    1) Generate New Testing Data                       |\n";
				if (viewData)
					cout << "|                    2) Hide Testing Data                               |\n";
				else
					cout << "|                    2) View Testing Data                               |\n";
				cout <<     "|                                                                       |\n"
						    "|                                                                       |\n"
						    "|                                                                       |\n"
						    "| B = Back                                                     Q = Quit |\n"
						    ".-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.\n";
				break;
			default:
				cout <<     R"(-----------------------------------------------------------------)""\n"
						    R"(: + - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - + :)""\n"
						    R"(: | <-------------------------------------------------------> | :)""\n"
						    R"(: / :           TERM PROJECT - SORTING ALGORITHMS           : \ :)""\n"
						    R"(: - :                                                       : - :)""\n"
						    R"(: \ :                                                       : / :)""\n"
						    R"(: | :                  ___       _                          : | :)""\n"
						    R"(: / :                 |   \ __ _| |_ __ _                   : \ :)""\n"
						    R"(: - :                 | |) / _` |  _/ _` |                  : - :)""\n"
						    R"(: \ :                 |___/\__,_|\__\__,_|                  : / :)""\n"
						    R"(: | :                                                       : | :)""\n"
						    R"(: / :                                                       : \ :)""\n"
						    R"(: - :                                                       : - :)""\n"
						    R"(: \ :               PLEASE MAKE A SELECTION:                : / :)""\n"
						    R"(: | :                                                       : | :)""\n"
						    R"(: / :                                                       : \ :)""\n"
						    R"(: - :            1) Generate New Testing Data               : - :)""\n";
				if (viewData)
					cout << R"(: \ :            2) Hide Testing Data                       : / :)""\n";
				else
					cout << R"(: \ :            2) View Testing Data                       : / :)""\n";
				cout <<     R"(: | :                                                       : | :)""\n"
						    R"(: / :                                                       : \ :)""\n"
						    R"(: - :                                                       : - :)""\n"
						    R"(: \ : B = Back                                     Q = Quit : / :)""\n"
						    R"(: | <-------------------------------------------------------> | :)""\n"
						    R"(: + - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - + :)""\n"
						    R"(-----------------------------------------------------------------)""\n";
		}
	}

	/* A static method to create the Display Menu Display where
	* a user can change the display of the program
	*
	* @param int option			- The option to switch the display type
	*
	* @returns void
	*/
	static void displayMenu(int option)
	{
		Clear();
		switch (option)
		{
			case 1:
				cout << R"(  /= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\)""\n"
						R"( /= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\)""\n"
						  "||                                                               ||\n"
						  "||               TERM PROJECT - SORTING ALGORITHMS               ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                  ___  _         _                             ||\n"
						R"(||                 |   \(_)____ __| |__ _ _  _                   ||)""\n"
						R"(||                 | |) | (_-< '_ \ / _` | || |                  ||)""\n"
						R"(||                 |___/|_/__/ .__/_\__,_|\_, |                  ||)""\n"
						  "||                           |_|          |__/                   ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                   PLEASE MAKE A SELECTION:                    ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                         1) Option 1                           ||\n"
						  "||                         2) Option 2                           ||\n"
						  "||                         3) Option 3                           ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "|| B = Back                                             Q = Quit ||\n"
						R"( \ = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = /)""\n"
						R"(  \ = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = /)""\n";
				break;
			case 2:
				cout << R"(-----------------------------------------------------------------)""\n"
						R"(: + - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - + :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: / :           TERM PROJECT - SORTING ALGORITHMS           : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                                                       : / :)""\n"
						R"(: | :              ___  _         _                         : | :)""\n"
						R"(: / :             |   \(_)____ __| |__ _ _  _               : \ :)""\n"
						R"(: - :             | |) | (_-< '_ \ / _` | || |              : - :)""\n"
						R"(: \ :             |___/|_/__/ .__/_\__,_|\_, |              : / :)""\n"
						R"(: | :                       |_|          |__/               : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :               PLEASE MAKE A SELECTION:                : / :)""\n"
						R"(: | :                                                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                     1) Option 1                       : - :)""\n"
						R"(: \ :                     2) Option 2                       : / :)""\n"
						R"(: | :                     3) Option 3                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ : B = Back                                     Q = Quit : / :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: + - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - + :)""\n"
						R"(-----------------------------------------------------------------)""\n";
				break;
			case 3:
				cout << ".-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.\n"
						"|                                                                       |\n"
						"|                   TERM PROJECT - SORTING ALGORITHMS                   |\n"
					  R"(|                                                                       |)""\n"
					  R"(|                                                                       |)""\n"
					  R"(|                      ___  _         _                                 |)""\n"
					  R"(|                     |   \(_)____ __| |__ _ _  _                       |)""\n"
					  R"(!                     | |) | (_-< '_ \ / _` | || |                      !)""\n"
					  R"(:                     |___/|_/__/ .__/_\__,_|\_, |                      :)""\n"
					  R"(:                               |_|          |__/                       :)""\n"
					  R"(.                                                                       .)""\n"
						".                                                                       .\n"
						":                       PLEASE MAKE A SELECTION:                        :\n"
						":                                                                       :\n"
						"!                                                                       !\n"
						"|                             1) Option 1                               |\n"
						"|                             2) Option 2                               |\n"
						"|                             3) Option 3                               |\n"
						"|                                                                       |\n"
						"|                                                                       |\n"
						"| B = Back                                                     Q = Quit |\n"
						".-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.\n";
				break;
			default:
				cout << R"(-----------------------------------------------------------------)""\n"
						R"(: + - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - + :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: / :           TERM PROJECT - SORTING ALGORITHMS           : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                                                       : / :)""\n"
						R"(: | :              ___  _         _                         : | :)""\n"
						R"(: / :             |   \(_)____ __| |__ _ _  _               : \ :)""\n"
						R"(: - :             | |) | (_-< '_ \ / _` | || |              : - :)""\n"
						R"(: \ :             |___/|_/__/ .__/_\__,_|\_, |              : / :)""\n"
						R"(: | :                       |_|          |__/               : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :               PLEASE MAKE A SELECTION:                : / :)""\n"
						R"(: | :                                                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                     1) Option 1                       : - :)""\n"
						R"(: \ :                     2) Option 2                       : / :)""\n"
						R"(: | :                     3) Option 3                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ : B = Back                                     Q = Quit : / :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: + - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - + :)""\n"
						R"(-----------------------------------------------------------------)""\n";
		}
	}

	/* A static method to create the Loading... Display
	*
	* @param int option			- The option to switch the display type
	*
	* @returns void
	*/
	static void loadingMenu(int option)
	{
		Clear();
		switch (option)
		{
			case 1:
				cout << R"(  /= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\)""\n"
						R"( /= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\)""\n"
						  "||                                                               ||\n"
						  "||               TERM PROJECT - SORTING ALGORITHMS               ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                       ___          _                          ||\n"
						R"(||                      / __| ___ _ _| |_                        ||)""\n"
						R"(||                      \__ \/ _ \ '_|  _|                       ||)""\n"
						R"(||                      |___/\___/_|  \__|                       ||)""\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                      Loading Results...                       ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						R"( \ = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = /)""\n"
						R"(  \ = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = /)""\n";
				break;
			case 2:
				cout << R"(-----------------------------------------------------------------)""\n"
						R"(: + - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - + :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: / :           TERM PROJECT - SORTING ALGORITHMS           : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                                                       : / :)""\n"
						R"(: | :                   ___          _                      : | :)""\n"
						R"(: / :                  / __| ___ _ _| |_                    : \ :)""\n"
						R"(: - :                  \__ \/ _ \ '_|  _|                   : - :)""\n"
						R"(: \ :                  |___/\___/_|  \__|                   : / :)""\n"
						R"(: | :                                                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                  Loading Results...                   : / :)""\n"
						R"(: | :                                                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                                                       : / :)""\n"
						R"(: | :                                                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                                                       : / :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: + - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - + :)""\n"
						R"(-----------------------------------------------------------------)""\n";
				break;
			case 3:
				cout << ".-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.\n"
						"|                                                                       |\n"
						"|                   TERM PROJECT - SORTING ALGORITHMS                   |\n"
					  R"(|                                                                       |)""\n"
					  R"(|                                                                       |)""\n"
					  R"(|                           ___          _                              |)""\n"
					  R"(|                          / __| ___ _ _| |_                            |)""\n"
					  R"(!                          \__ \/ _ \ '_|  _|                           !)""\n"
					  R"(:                          |___/\___/_|  \__|                           :)""\n"
					  R"(:                                                                       :)""\n"
					  R"(.                                                                       .)""\n"
						".                                                                       .\n"
						":                          Loading Results...                           :\n"
						":                                                                       :\n"
						"!                                                                       !\n"
						"|                                                                       |\n"
						"|                                                                       |\n"
						"|                                                                       |\n"
						"|                                                                       |\n"
						"|                                                                       |\n"
						"|                                                                       |\n"
						".-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.\n";
				break;
			default:
				cout << R"(-----------------------------------------------------------------)""\n"
						R"(: + - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - + :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: / :           TERM PROJECT - SORTING ALGORITHMS           : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                                                       : / :)""\n"
						R"(: | :                   ___          _                      : | :)""\n"
						R"(: / :                  / __| ___ _ _| |_                    : \ :)""\n"
						R"(: - :                  \__ \/ _ \ '_|  _|                   : - :)""\n"
						R"(: \ :                  |___/\___/_|  \__|                   : / :)""\n"
						R"(: | :                                                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                  Loading Results...                   : / :)""\n"
						R"(: | :                                                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                                                       : / :)""\n"
						R"(: | :                                                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                                                       : / :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: + - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - + :)""\n"
						R"(-----------------------------------------------------------------)""\n";
		}
	}

	/* A static method to create the Sorted Results Display
	* where the user can views the results of the selected algorithm
	* and rerun the sort again
	*
	* @param int option			- The option to switch the display type
	* @param int size			- The amount of elements being sorted
	* @param int method			- The sorting method selected by the user
	* @param int data			- The arrangment of the data selected by the user
	* @param int low			- The low number of the range of numbers in the data array
	* @param int high			- The high number of the range of numbers in the data array
	* @param float time			- The amount of time taken for the array to sort
	* @param bool viewData		- A true/false option to see the current data array
	* @param bool testRun		- A true/false option to allow the user to rerun the test
	*
	* @returns void
	*/
	static void resultsMenu(int option, int size, int method, int data, int low, int high, float time, bool viewData, bool testRerun)
	{
		Clear();
		string records = formatNumber(size);
		string sort_method = getMethod(method);
		string data_type = getDataType(data);
		string range = getRange(size, data, low, high);
		string time_output = getTime(time);
		switch (option)
		{
			case 1:
				cout << R"(  /= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\)""\n"
						R"( /= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\)""\n"
						  "||                                                               ||\n"
						  "||               TERM PROJECT - SORTING ALGORITHMS               ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                       ___          _                          ||\n"
						R"(||                      / __| ___ _ _| |_                        ||)""\n"
						R"(||                      \__ \/ _ \ '_|  _|                       ||)""\n"
						R"(||                      |___/\___/_|  \__|                       ||)""\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                                                               ||\n"
						  "||                           RESULTS:                            ||\n"
						  "||                                                               ||\n";
				cout << left << setw(17) << "||";
				cout << right << setw(8) << "Records:";
				cout << left << setw(25) << " " + records;
				cout << right << setw(17) << "||" << endl;
				cout << left << setw(17) << "||";
				cout << right << setw(8) << "Method:";
				cout << left << setw(25) << " " + sort_method;
				cout << right << setw(17) << "||" << endl;
				cout << left << setw(17) << "||";
				cout << right << setw(8) << "Data:";
				cout << left << setw(25) << " " + data_type;
				cout << right << setw(17) << "||" << endl;
				cout << left << setw(17) << "||";
				cout << right << setw(8) << "Range:";
				cout << left << setw(25) << " " + range;
				cout << right << setw(17) << "||" << endl;
				cout << left << setw(17) << "||";
				cout << right << setw(8) << "Time:";
				cout << left << setw(25) << " " + time_output;
				cout << right << setw(17) << "||" << endl;
				cout <<   "||                                                               ||\n"
						  "|| B = Back                  R = Rerun                  Q = Quit ||\n"
						R"( \ = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = /)""\n"
						R"(  \ = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = /)""\n";
				break;
			case 2:
				cout << R"(-----------------------------------------------------------------)""\n"
						R"(: + - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - + :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: / :           TERM PROJECT - SORTING ALGORITHMS           : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                                                       : / :)""\n"
						R"(: | :                   ___          _                      : | :)""\n"
						R"(: / :                  / __| ___ _ _| |_                    : \ :)""\n"
						R"(: - :                  \__ \/ _ \ '_|  _|                   : - :)""\n"
						R"(: \ :                  |___/\___/_|  \__|                   : / :)""\n"
						R"(: | :                                                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                       RESULTS:                        : / :)""\n"
						R"(: | :                                                       : | :)""\n";
				cout << left << setw(16) << ": / :";
				cout << right << setw(8) << "Records:";
				cout << left << setw(25) << " " + records;
				cout << right << setw(16) << R"(: \ :)" << endl;
				cout << left << setw(16) << ": - :";
				cout << right << setw(8) << "Method:";
				cout << left << setw(25) << " " + sort_method;
				cout << right << setw(16) << ": - :" << endl;
				cout << left << setw(16) << R"(: \ :)";
				cout << right << setw(8) << "Data:";
				cout << left << setw(25) << " " + data_type;
				cout << right << setw(16) << ": / :" << endl;
				cout << left << setw(16) << ": | :";
				cout << right << setw(8) << "Range:";
				cout << left << setw(25) << " " + range;
				cout << right << setw(16) << ": | :" << endl;
				cout << left << setw(16) << ": / :";
				cout << right << setw(8) << "Time:";
				cout << left << setw(25) << " " + time_output;
				cout << right << setw(16) << R"(: \ :)" << endl;
				cout << R"(: - :                                                       : - :)""\n"
						R"(: \ : B = Back              R = Rerun              Q = Quit : / :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: + - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - + :)""\n"
						R"(-----------------------------------------------------------------)""\n";
				break;
			case 3:
				cout << ".-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.\n"
						"|                                                                       |\n"
						"|                   TERM PROJECT - SORTING ALGORITHMS                   |\n"
					  R"(|                                                                       |)""\n"
					  R"(|                                                                       |)""\n"
					  R"(|                           ___          _                              |)""\n"
					  R"(|                          / __| ___ _ _| |_                            |)""\n"
					  R"(!                          \__ \/ _ \ '_|  _|                           !)""\n"
					  R"(:                          |___/\___/_|  \__|                           :)""\n"
					  R"(:                                                                       :)""\n"
					  R"(.                                                                       .)""\n"
						".                                                                       .\n"
						":                               RESULTS:                                :\n"
						":                                                                       :\n";
				cout << left << setw(20) << "!";
				cout << right << setw(8) << "Records:";
				cout << left << setw(25) << " " + records;
				cout << right << setw(20) << "!" << endl;
				cout << left << setw(20) << "|";
				cout << right << setw(8) << "Method:";
				cout << left << setw(25) << " " + sort_method;
				cout << right << setw(20) << "|" << endl;
				cout << left << setw(20) << "|";
				cout << right << setw(8) << "Data:";
				cout << left << setw(25) << " " + data_type;
				cout << right << setw(20) << "|" << endl;
				cout << left << setw(20) << "|";
				cout << right << setw(8) << "Range:";
				cout << left << setw(25) << " " + range;
				cout << right << setw(20) << "|" << endl;
				cout << left << setw(20) << "|";
				cout << right << setw(8) << "Time:";
				cout << left << setw(25) << " " + time_output;
				cout << right << setw(20) << "|" << endl;
				cout << "|                                                                       |\n"
						"| B = Back                      R = Rerun                      Q = Quit |\n"
						".-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.\n";
				break;
			default:
				cout << R"(-----------------------------------------------------------------)""\n"
						R"(: + - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - \ | / - + :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: / :           TERM PROJECT - SORTING ALGORITHMS           : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                                                       : / :)""\n"
						R"(: | :                   ___          _                      : | :)""\n"
						R"(: / :                  / __| ___ _ _| |_                    : \ :)""\n"
						R"(: - :                  \__ \/ _ \ '_|  _|                   : - :)""\n"
						R"(: \ :                  |___/\___/_|  \__|                   : / :)""\n"
						R"(: | :                                                       : | :)""\n"
						R"(: / :                                                       : \ :)""\n"
						R"(: - :                                                       : - :)""\n"
						R"(: \ :                       RESULTS:                        : / :)""\n"
						R"(: | :                                                       : | :)""\n";
				cout << left << setw(16) << ": / :";
				cout << right << setw(8) << "Records:";
				cout << left << setw(25) << " " + records;
				cout << right << setw(16) << R"(: \ :)" << endl;
				cout << left << setw(16) << ": - :";
				cout << right << setw(8) << "Method:";
				cout << left << setw(25) << " " + sort_method;
				cout << right << setw(16) << ": - :" << endl;
				cout << left << setw(16) << R"(: \ :)";
				cout << right << setw(8) << "Data:";
				cout << left << setw(25) << " " + data_type;
				cout << right << setw(16) << ": / :" << endl;
				cout << left << setw(16) << ": | :";
				cout << right << setw(8) << "Range:";
				cout << left << setw(25) << " " + range;
				cout << right << setw(16) << ": | :" << endl;
				cout << left << setw(16) << ": / :";
				cout << right << setw(8) << "Time:";
				cout << left << setw(25) << " " + time_output;
				cout << right << setw(16) << R"(: \ :)" << endl;
				cout << R"(: - :                                                       : - :)""\n"
						R"(: \ : B = Back              R = Rerun              Q = Quit : / :)""\n"
						R"(: | <-------------------------------------------------------> | :)""\n"
						R"(: + - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - / | \ - + :)""\n"
						R"(-----------------------------------------------------------------)""\n";
		}
	}

	/* A static method to clear the display
	*
	* @returns void
	*/
	static void Clear()
	{
		cout.flush();
		#if defined _WIN32
				system("cls");
				//clrscr(); // including header file : conio.h
		#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
				system("clear");
				//std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences 
		#elif defined (__APPLE__)
				system("clear");
		#endif
	}

	/* A static method to format a number with commas as thousands break
	*
	* @param int n			- The number to be formatted
	*
	* @returns string		- The formatted number with commas
	*/
	static string formatNumber(int n)
	{
		string result = "";
		string s = to_string(n);
		int count = 0;

		// Traverse the string in reverse
		for (int i = s.size() - 1; i >= 0; i--) {
			count++;
			result.push_back(s[i]);

			if (count == 3) {
				result.push_back(',');
				count = 0;
			}
		}

		// Reverse the string to get the desired output
		//reverse(result.begin(), result.end());
		reverseString(result);

		// If the string is less than 1000 remove the leading ,
		if (result.size() % 4 == 0) {
			result.erase(result.begin());
		}

		return result;
	}

	/* A static method to get the name of sort used by its numerical representation
	*
	* @param int method			- The menu number corresponding to the sort that was selected
	*
	* @returns string			- The name of the sorting method
	*/
	static string getMethod(int method)
	{
		switch (method)
		{
			case 1:
				return "Insertion Sort";
			case 2:
				return "Selection Sort";
			case 3:
				return "Bubble Sort";
			case 4:
				return "Merge Sort";
			case 5:
				return "Heap Sort - Min";
			case 6:
				return "Heap Sort - Max";
			case 7:
				return "Quick Sort";
			case 8:
				return "Counting Sort";
			case 9:
				return "Radix Sort";
			default:
				return "Insertion Sort";
		}
	}
	
	/* A static method to get the type of data arrangement of the array
	*
	* @param int type			- The option corresponding to the type of arrangment
	*
	* @returns string			- The name of the arrangment method of the data
	*/
	static string getDataType(int type)
	{
		switch (type)
		{
			case 1:
				return "Ascending";
			case 2:
				return "Random";
			case 3:
				return "Descending";
			case 4:
				return "Half-Sorted";
			default:
				return "Random";
		}
	}

	/* A static method to get the range of data from the array
	*
	* @param int size			- The size of the data array
	* @param int type			- The arrangment type of the data array
	* @param int low			- The low number of the range of numbers in the data array
	* @param int high			- The high number of the range of numbers in the data array
	*
	* @returns string			- The formatted string of the data range
	*/
	static string getRange(int size, int type, int low, int high)
	{

		switch (type)
		{
			case 1:
				return "1 - " + formatNumber(size);
			case 2:
				return formatNumber(low) + " - " + formatNumber(high);
			case 3:
				return formatNumber(size) + " - 1";
			default:
				return "1 - " + formatNumber(size);
		}
	}

	/* A static method to get the formatted time from a raw number
	*
	* @param float time			- The timestamp as a float number
	*
	* @returns string			- The formatted time display in either seconds or milliseconds
	*/
	static string getTime(float time)
	{
		if (time > 1000) {
			string rounded = to_string(time / 1000);
			return rounded.substr(0, rounded.find(".") + 3) + " Seconds";
		}
		else
			return to_string(int(time)) + " Millseconds";
			
	}

	static void reverseString(string &message)
	{
		int len = message.length();
		int n = len - 1;
		for (int i = 0; i < (len / 2); i++) {
			//Using the swap method to switch values at each index
			swap(message[i], message[n]);
			n = n - 1;

		}
	}
};

/*
* Welcome text width 32 char
 __      __   _
 \ \    / /__| |__ ___ _ __  ___
  \ \/\/ / -_) / _/ _ \ '  \/ -_)
   \_/\_/\___|_\__\___/_|_|_\___|
*/

/*
* Display text width 28 char
  ___  _         _
 |   \(_)____ __| |__ _ _  _
 | |) | (_-< '_ \ / _` | || |
 |___/|_/__/ .__/_\__,_|\_, |
		   |_|          |__/
*/

/*
* Sort text width 18 char
  ___          _
 / __| ___ _ _| |_
 \__ \/ _ \ '_|  _|
 |___/\___/_|  \__|
*/

/*
* Data text width 20 char
  ___       _
 |   \ __ _| |_ __ _
 | |) / _` |  _/ _` |
 |___/\__,_|\__\__,_|

*/