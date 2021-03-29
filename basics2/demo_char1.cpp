/* **************************************************************************************
 * Filename: demo_char1.cpp
 * Author: Wikus Jansen van Rensburg
 * Last Modified: March 20, 2021
 * Series: demo_data_types 
 * Description: This program is the first in a line of demonstration of various datatypes
 *    		available for the programmer in C++. We start of by charaters. 
 * **************************************************************************************/

#include <iostream>

/* 
	Feel free to add 'using namespace std', I don't do it just
	out of personal taste. 
*/

// --------------------------------------------------------------------------------------
// CHARACTERS:
// --------------------------------------------------------------------------------------
// Note: * '1' is the numeric charater 1. The computer sees the value 49.
// 	 *  1 is the integer and has a value of 1.
/*
	When a computer programs runs a program on the hardware, the file contains a 
	sequence of 1's and 0's. What does the computer do with a charater for example 
	'a' so that this data can be processed by the hardware that only thinks in
	the binary number system. (only 1's and 0')
	
	The computer associates a charater with its ASCII value. When we have an integer
	value for our charater it can easily be converted between its decimal value and binary
	value.

	A char in C++ is a single alphabet, number, punctuation mark always written
	between two single quotes, ''. Examples of charaters are 'a', '4', ' ', '?' ....
	An charater is 1 byte in memory. The largest integer value that we can store
	with a byte is (2^8) - 1 = 255. The first 0 - 127 Ascii charaters are standard across
	different filesystems. The Ascii charaters from 128 - 255 will not always represent the 
	same characters, therefor we use 0 - 127.
		
	With the charater 'a' all that the computer sees is its ASCII value 97. 
	But functions like std::cout takes the type of the variable into consideration.
	When you print out the charater 'a', the compiler sees 97. But it also sees that
	this 97 is of type char. Therefore the function outputs the charater 'a' and
	not the integer 97. If the variable was of type int, it would have outputted 97.
*/
// --------------------------------------------------------------------------------------

// --------------------------------------------------------------------------------------
// Start of the program. Remember that after the pre-processor did
// 	its job, the program starts at the main function and runs
// 	sequentially through each line of code. (We have not added any
//	conditional jumps/ if-statements yet. )
// --------------------------------------------------------------------------------------
int main(){
	// Part 1: Initialization of an integer variable.
	char myChar = 'a';
	int  myInt = 97;
	
	/*
		The above statement tells C++ that we want to allocate
		memory for one charater, and place the ascii value of 'a'
		in the memory location.
	*/
	// Part 2: We print out the characters.
	// Task: Uncomment each line from A - D after trying to predict the output.

//A	std::cout << "myChar: "<< myChar << std::endl;
//B	std::cout << "myInt: "<< myInt << std::endl;
	/* We tell C++ that the variable is not an charater but an integer.
	   That is why the ascii value of the charater 'a' gets printed instead
	   of the charater itself.
	*/
//C	std::cout << "Casting myChar to an int: " << (int)myChar << std::endl; 

	// Part 3: What do you think will happen?
	char newChar = myChar - (97 - 65);
	
//D	std::cout << "After subtracting (97 - 65) from 'a': "<< newChar << std::endl;
	
	return 0;
}

