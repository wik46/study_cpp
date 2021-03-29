/* **************************************************************************************
 * Filename: demo_char1.cpp
 * Author: Wikus Jansen van Rensburg
 * Last Modified: March 28, 2021
 * Series: demo_data_types 
 * Description: This demo shows how to use the integer data types in cpp and some
 * 		, and things to look out for with integer arithmetic. 
 * **************************************************************************************/

#include <iostream>


// --------------------------------------------------------------------------------------
// Integers:
// --------------------------------------------------------------------------------------
// Note: * An integer is any whole number that can fit int the memory loaction created
//		for the integer value.
/*
	Sizes of integers in Cpp:
	  - For signed integers:
		* short/ short int - 2 bytes: -32 768 to 32767		
		* int 		   - 4 bytes: 2 147 483 649 to -2 147 483 647
		* long int 	   - 8 bytes.
	  - For unsigned integers:
		* short/ short int - 2 bytes: 0 to 65 635 		
		* int 		   - 4 bytes: 0 to 4 294 967 295
		* long int 	   - 8 bytes.
		
*/
// --------------------------------------------------------------------------------------

// --------------------------------------------------------------------------------------

int main(){
	// Examples of different signed and sized integers.
	
	// 2 bytes
	short int_ex1 = 34;
	signed short int_ex2 = -44;
	// 4 bytes
	unsigned int int_ex3 = 89;
	// 8 bytes
	unsigned long int int_ex4 = 23;
	unsigned long int_ex5 = 39;
	
	// Displaying all the integer values at the current moment.
	std::cout << "int_ex1: " << int_ex1 << std::endl;
	std::cout << "int_ex2: " << int_ex2 << std::endl;
	std::cout << "int_ex3: " << int_ex3 << std::endl;
	std::cout << "int_ex4: " << int_ex4 << std::endl;
	std::cout << "int_ex5: " << int_ex5 << std::endl;

	// only to improve display of commandline output.
	std::cout << "\n----------------------\n"<< std::endl;

	// Some tips for integer arithmatic:
	
	/* for any int dividend x and divisor y with quotient q and remainder r*/
	
	/* 1. Modulus: x % y = r */
	int_ex3 = int_ex1 % int_ex2;
	std::cout << "int_ex3 after modulus: "<< int_ex3 << std::endl;
	/* 2. Division: x / y = q */	
	int_ex3 = int_ex1 / int_ex2;
	std::cout << "int_ex3 after division: "<< int_ex3 << std::endl;
	
	

	return 0;
}
