// Compile this file and run the trivial program to see 
// which cpp standard the compiler defualts to.

#include <iostream>

/*
	199711 for C++98
	201103 for C++11
	201402 for C++14
	201703 for C++17
*/

int main(){
	std::cout << __cplusplus << std::endl;
	return 0;
}
