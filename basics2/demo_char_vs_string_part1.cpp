/* **************************************************************************************
 * Filename: demo_char_vs_string_part1.cpp
 * Author: Wikus Jansen van Rensburg
 * Last Modified: March 23, 2021
 * Series: demo_data_types 
 * Description: This program is the part of in a series on various datatypes
 *    		available for the programmer in C++. 
 * **************************************************************************************/

#include <iostream>
#include <string>

// -------------------------------------------
// C-style String vs std::string class: Part 1
// -------------------------------------------
/*
	We all know the C-programming language came before C++ programming language.
	
*/

int main(){
	

	// How Things was done before C++.=, using C.
	// 1. A string is an array of ascii-characters.
	// - There is 2 ways that we can create a string.
	// - We can tell c++ to create a block of memory of a fixed size and insert
	//   a string into it. 
	// - Or we can let C++ create the fixed block and ask it for a pointer to the
	// 	start of the memory block.

	
	// * " abc... " : If you create a string like this, C++ adds a null terminating
	// 		  charater for us.

	//a. Creating an array of charaters.
	// I: ---------------------------------------------------------------------
	const int size = 6; /* Size must be at least one greater than numer of chars*/
	
	// Example 1: ***********************************************************
	char c_string1[size]  = "Ducks"; /* An implicit null terminated char gets added*/	
	c_string1[2] = 'C'; 	/* We can change single elements*/
	

	/* The commented string initialization will not work because we get an implicit
	   null terminated character. Then 6 bytes is not even space in memory
           to store the 7 bytes of data we want.
	*/
//	char too_small[size] = "123456";

	// Example 2: ***********************************************************
	char c_string2[size] = {'B','e','a','v','e','r'}; 
	/* The problem with the two strings/ array of charaters above is that we needed
		to know the number of charaters in our string. But this we will not
		always have that luxury. For example a user is asked to write a short
		paragraph to provide feedback of a product, how long will it be?
		Some people will write 1 sentence, others will write half a page worth of
		comments. We need to find a way to save all this text data, but not
		use all the memory of the program. 
	*/

	/* Remember that the name of the array is just a pointer to the first element
		in the array.
	*/
	
	// ---------------------------------------------------------------------
	// One solution is the following:
	// b. Now we create a constant block of memory.
	// - With the const key word we tell cpp that we won't 
	//   the value that our variable contains.
	
	// Example 3: ***********************************************************
	const char* const_str = "I am a immutable.";	
	// But we can't do much afterwards, next two examples are'nt allowed.
//	const_str[1] = 'r';
//	const_str = "This wont work";
	

	// One other way.
	// This will give a warning because we created a non-const variable that points
	// to a constant block of data.	 
	
	// Example 4: ***********************************************************
	char* non_const_str = "I am still an array of charaters";
	// But now we create an entirely new block of data to store our new string
	// and then point out non-const pointer to it.
	non_const_str = "New string";




	// Lets see our results:
	std::cout << "Example 1: " << c_string1 << std::endl;
	std::cout << "Example 3: " << const_str << std::endl;
	std::cout << "Example 4: " << non_const_str << std::endl;
	std::cout << std::endl; 	// Making format nicer.

	// Notice that we did not print out c_string2, why?
	/*
		Firstly think about how you would print an array of integers in 
		sequence.
	*/
	const int ar_size = 10;
	int integer_ar[ar_size] = {99,88,77,66,55,44,33,22,11,0};

	// Method 1: You need to know the size.
	for(int i = 0; i < ar_size - 1; i++){	// Zero is only used as a stopper.
		std::cout << integer_ar[i];
	}
	std::cout << std::endl;
	// Method 2: But what if you knew that the last element in the array 
	//   		is always unique, example 0 when working with positive numbers?
	/* Notice that we don't need the size of the array.*/
	for(int i = 0; integer_ar[i] != 0; i++){
		std::cout << integer_ar[i];
	}
	std::cout << std::endl << std::endl;

	// Method 2 is what std::cout does with strings, it prints them out untill the
	// 		null-terminating charater is reached which is the ascii value 0.	

	int j = 0; 
	while(c_string2[j] != 0){
		j++;	
	}
	std::cout << "Characters before null: " << j << std::endl;

	std::cout << c_string2 << std::endl;
	//
	// Part 2: What is the std::string class.	


	return 0;
}
