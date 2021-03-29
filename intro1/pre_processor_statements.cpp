/* ***************************************************************************************
 * Author: Wikus Jansen van Rensburg
 * Last Modified: March 21, 2021 
 * CPP Demos.
 * Decription: This is a simple program to show what the pre-processor does
 * 		during the compilation process and this will give a better
 * 		understanding on how headerfiles (like iostream) work when they
 * 		they are included.
 * Dependencies: right_brace.h
 * **************************************************************************************/

// Pre-processor:
// ==============
/*
	Any statement that start with a '#' is a pre-processor statemnt.
	Famous ones are #include, #define, #if, #ifndef, #endif ... There are many more
	and feel free to google a list of pre-processor statements.

	What happens with pre-processor statements?
		* When we compile our .cpp file (source file/ source/ source code)
		  the first thing the compiler does is sequentially evaluate all the 
		  pre-processor statements. This happens before the main function is
		  entered.
*/

// Most Used Pre-processor Statements:
// ===================================
/*
	a. #include: This copies the contents of the filename specified.
	b. #define: This is used to define a macro. (constant value)
	c. #if: If true run lines of code, else skip code untill #endif.
	d. #ifndef: If not defined run lines of code, else skip code untill #endif.
	e. #endif: Marks the stopping location for #if and #endif.
*/


#include <iostream>                   // This copies and paiste the iostream headerfile.
			              // <filename.h> vs "filename.h"
				      /* Angular brackets: Use when including standard library headerfiles.*/
				      /* Quotation Marks: Use when including your own headerfiles.*/
				      // But don't worry too much about headerfiles at this moment.

// Example of defining a macro called eulers_constant with the value 2.7182818284
#define eulers_constant 2.7182818284

int main(){

	// Part 1:
	// ================
	// Demonstration to show that the pre-processor executes before the main function gets called.
	// - Because we specified a 0 after #if, the condition evaluates to false. Any other value
	// 	will evaluate to true. 
	
	// 1. Run the code as it is and see that nothing prints. 
	// 2. Now change the 0 to 1, compile the program again and run it to see what happens.
	// 3. Now replace 1 with the charater 'a', re-compile, and run it to see what happens.
	#if 0 			
		std::cout << "This will not print when we have 0." << std::endl;			
		std::cout << "In C++ any value other than 0 will evaluate to true." std::endl;
	#endif

	std::cout << "\n ** End of Part 1 ** \n"<< std::endl;

	// Part 2: 	
	// =================
	/*
		This is just a basic example of how to output the macro we defined above.
	*/
	std::cout << "An approximation of Euler's constant is: " << eulers_constant<< std::endl;	

	return 0;

	// Part 3:
	// ===============
	/*
		Goal: We demonstrate what the #include pre-processor directive/statement does.
			
	*/
	#include "right_brace.h" 	/* You see that all #include does is it paistes the contents
					   of the right_brace.h file into this source file such
					   that the source file compiles successfully.*/			
