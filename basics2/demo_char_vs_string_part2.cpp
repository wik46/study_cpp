/* **************************************************************************************
 * Filename: demo_char_vs_string_part2.cpp
 * Author: Wikus Jansen van Rensburg
 * Last Modified: March 23, 2021
 * Series: demo_data_types 
 * Description: This program is the part of in a series on various datatypes
 *    		available for the programmer in C++. 
 * **************************************************************************************/

#include <iostream>
#include <string>     
#include <typeinfo> // Use to egt information of the variable types.

// -------------------------------------------
// C-style String vs std::string class: PART 2
// -------------------------------------------
/*
	Now, what did C++ bring to the table?	
	See introduced the notion of classes. (User defined data type.)
*/

int main(){

	// There are a lot of ways we can create a string using the C++ type std::string.
	std::string str1 = "Method 1"; /* The assignements operator converts the const char*. */
	std::string str2("Method 2"); /* Using a string constructor.*/	
	std::string str_copy( str1 );  /* Copying str1 to str_copy. */
	
			
	// Conversion between c_style string and std::string.
	const char* c_style = str1.c_str();	

	// You can use type_info class to investigate the types.
	std::cout << typeid(int).name() << std::endl;
	std::cout << "str1: " <<  str1 << ", " << typeid(str1).name() << std::endl;
	std::cout << "str2: " <<  str2 << std::endl;
	std::cout << "str_copy: " <<  str_copy << std::endl;
	std::cout << "c_style: " <<  c_style << ", "<< typeid(c_style).name() << std::endl;
	
	return 0;	
}


// Side note: std::basic_string is a templated class. We derived std::string
//		from std::basic_string with " basic_string<char> string"
