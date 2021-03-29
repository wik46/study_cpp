/* ************************************************************************************ 
 * Author: Wikus Jansen van Rensburg
 * Last Modified: March 20, 2021
 * Description: This is a very basic program that demonstrates how to output a string
 * 		of characters (sentence) in cpp.
 * Target Audience: Beginner
 * ***********************************************************************************/

/* Step 1: Printing a sequence of charaters ('a', '3', ' ', '&' ...) to the
		the screen is a difficult job for the computer. We are not going to write
		the code needed for the entire process. Because it is such a common 
		task, C++ provides us with libaries that contain the code. A library is
		previously written code that programmer use over and over to perform
		common tasks.
*/

// #include: Pre-processor directive.
// iostream: Name of the library that we want to use. (must be inside < >, brackets.)
#include <iostream>

// Our program always start from the main function. Every program must have a main function.
int main(){

	// A few things to notice here:
	// 1. cout: This is the name of the funcction that outputs the string.
	// 2. std: Stands for 'standard'. It is an object called a namespace. 
	//	   You will not cover it in this course, but see the slide .................
	std::cout << "I am a string. And everything between the quotation marks will be the output."
	<< std::endl;


	// This is where our function stops, and therefore this program stops. The value
	// 0 is the output we receive to say that the task done by this program was a success
	// and if other programs need to run after this one, we know this one did its job.
	return 0;
}
