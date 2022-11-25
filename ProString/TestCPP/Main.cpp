
#include "ProString.h"
#include <iostream>
#include <conio.h>

int main(int argc, const char* argv[]) {

	// Code
	String input = "empty";

	while (true) {
		std::cout << " enter : ", std::cin >> input;
		input = CodeIT(input);
		std::cout << " after coding your Text : " << input << std::endl;
		input = UncodeIT(input);
		std::cout << " Uncode It again :)) Here : " << input << std::endl;
		std::cout << std::endl;
		
		if (input == "exit")return 0;

		std::cout << "  [ [ second one ] [ 2 ] ]\n";

		std::cout << std::endl;
		std::cout << " enter : ", std::cin >> input;
		input = coded(false, input);
		std::cout << " after coding your Text : " << input << std::endl;
		input = coded(true, input);
		std::cout << " Uncode It again : Here : " << input << std::endl;
		std::cout << std::endl;

		if (input == "exit")return 0;
	}

	// End
	const char PAUSE = _getch();

	return 0;
}