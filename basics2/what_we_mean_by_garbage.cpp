/* **************************************************************************************
 * Author: Wikus Jansen van Rensburg
 * Last Modified: March 20, 2021
 * Description: This program is used to show new programmers what happens
 *		when we don't assign any value to variable and try and use the 
 *		content previously stroed at the memory location.
 *
 * ************************************************************************************* */ 

#include <iostream>

int main(){

	// DEMONSTRATION: We show why you cannot use uninitialized variables.

	// We instantiate a variable without assigning value to it.
	// Here we tell the compiler to allocate enough space in memory
	// but we do no replace the contents at the location with a new value.
	// That is they have some value that was left at that location by 
	// a previous program.

	int val1, val2, val3;  			      // A
//	int val1 = 1, val2 = 1, val3 =1;              // B

	// We try and print it to the console and see what happens.
	std::cout << "Value of: "<< std::endl;	
	std::cout << "a. val1: " << val1 << ", val2: " << ", val3: " 
		  << val3 << std::endl;
	// On my machine it printed out the value zero. This is to be expected.

	// Note that this is no the case when the next line of code is printed.
	std::cout << "What is the sum at the of the garbage values: " 
	<< val1 + val2 + val3 << std::endl;

	// A key thing to know is that when a program terminates, the memory used
	// by the program get 'freed' and not 'cleaned'. That is the operating system
	// know that the program does not use the memory anymore and that it is available
	// for other uses, but is unecessary to go and change all the values at the recently
	// freed up memory locations.
	

	// Also run the program with a debugger and notice all the errors you see.
	// The comment aout line A, and uncomment line B and rerun the program with valgrind.
	return 0;
}
