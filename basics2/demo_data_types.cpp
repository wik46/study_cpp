/* **************************************************************************************
 * Filename: demo_data_types.cpp
 * Author: Wikus Jansen van Rensburg
 * Last Modified: March 20, 2021
 * Description: This program is the start of a series of programs for explaining and 
 * 		using data types in cpp. Cpp has various data types and we will demo
 * 		the most used data types in this sequence.
 * **************************************************************************************/

// INTRO TO DATATYPES:
/*
	Everything in a computer program is data. Datatypes differ slightly between
	programming languages but after learning to think about the different
	data types, it is easy to transfer the skill if you need to learn another
	language.
	
	Computers solve problems by taking in data (read data), manipulate the data
	according to the program specification defined by the programmer, and
	return ouput the new data. 
	
	Example: Problem: What is the area of a rectangle with length = 2, height = 5.
		 Data: Height and width of the rectangle.
		 Program: We will write a program that multiplies the length 
			  and height of the rectangle to solve the problem.
		 Result: We obtain more information about the rectangle, its area.

	It is easy to solve this problem by hand, but the power of computers is that
	it can calculate the area of 1000 different rectangles in seconds.

	Now, we need to tell cpp more about the charateristice of the data.
	This prevents cpp from, for example, 5 - 'a'. (although later on in the course
	you will see that this is possible.)

	Think of a variable as an object where we can store 'something'. We need to 
	tell cpp what this 'something' is. When we create the variable object, we tell
	cpp the category that the data will fall into. For example if we want to
	store integers, we create in object called 'int my_int'. We called our variable
	'my_int' and we informed cpp that we are going to store the value of integers
	in it. Cpp now treats my_int as a integer. You cannot change the type of data
	that is stored in a variable after decleration. Also you can only store
	integers in this variable.

*/


// * We can classify datatypes in C++ into 2 categories:
// 1. Primitive data types.
// -  Sometimes refered to as: Basic datatypes, pre-defined,
/*
	a. int: We store integer values inside this object. 
	b. char: We store a single character.
	c. boolean: Only true or false.
	d. float: Real numbers.
	e. void: Valueless.


*/


// 2. Programmer-defined/ custom data types.

/*
	a. struct.
	b. class. (std::string is a class)
	c. enumaration.
	d. typedef defined datatype.

*/

// List of demo's after this one:
/*
	demo_char1.cpp
	demo_string2.cpp
	demo_int3.cpp
	demo_float4.cpp
	demo_bool5.cpp
*/

// Remember that all this does is copy and paiste the code from the iostream library.
// During the linking stage, the linker will search for the function 
//  we use from iostream library.

#include <iostream>  				


int main(){

	// We will only demo primitive/ basic data types.
	
	// Different ways to create variables:
	// ====================================
	
	// Instantiation: We tell the compiler to allocate space in our main memory
	// 		  but the value at the memory address/ location is garbage. 
	int varInt_a;

	// Assignement: Now we change the value of the memory location from garbage to 
	// 		the value 5.
	varInt_a = 5;     // The '=' sign is called the assignment operator.

	// Initialization: The process of assigning value to a variable at creation.
	//	           That is we allocated space in memory for the variable and
	//		   we assigned the value 10.
	int varInt_b = 10;


	// Step 1: We instantiate the variables we want to use later in our program.
	char myChar1  = 'm';

	const char* myCstring = "Don't worry about me for now.";	

	int myInt4  = 56;

	float myFloat4  = 3.14;

	bool myBool1 = true;

	// Step 2: We output the value of the variables to the screen.
	
	std::cout << "1. Charater: " << myChar1 << std::endl;
	std::cout << "2. C-style string: " << myCstring << std::endl;
	std::cout << "3. Integer: " << myInt4 << std::endl;
	std::cout << "4. Floating point number: " << myFloat4 << std::endl;
	std::cout << "5. Boolean value: " << myBool1 << std::endl;
	

	return 0;
}
