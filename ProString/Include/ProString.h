
#ifndef PROSTRING_H
#define PROSTRING_H

// Includes
#include <string>

// Moded Using
using String = std::string;

// Code Here

// String Array
// Include The Normal
String Array[2] = {
	"abcdefghijklmnopqrstuvwxyz `~!@#$%^&*()_-+=|[]{};:/?.>,<1234567890",
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ `~!@#$%^&*()_-+=|[]{};:/?.>,<1234567890"
};

// String Coded
// Include The Code
String Coded[2] = {
	"dfzohicmpynzwuteavgkjloqsr !&`~$^@#+%-*|(;_)=/:.[>],{}?<5012943678",
	"DFZOHICMPYNZWUTEAVGKJLOQSR !&`~$^@#+%-*|(;_)=/:.[>],{}?<5012943678"
};

// CodeIT Function
// To Code Text Letters And Make It Unreadable
String CodeIT(String str) {
	const int len = str.length();
	int currentChar = 0;

	for (int counter = 0; counter < len; counter++) {
		currentChar = 0;

		while (true) {
			if (str[counter] == Array[0][currentChar]) {
				str[counter] = Coded[0][currentChar];
				break;
			}
			else if (str[counter] == Array[1][currentChar]) {
				str[counter] = Coded[1][currentChar];
				break;
			}
			else {
				currentChar++;
				if (currentChar > 65) { break; }
			}
		}
	}

	return str;
}

// UncodeIT Function
// To Uncode Text Letters And Make It Readable again
String UncodeIT(String str) {
	const int len = str.length();
	int currentChar = 0;

	for (int counter = 0; counter < len; counter++) {
		currentChar = 0;

		while (true) {
			if (str[counter] == Coded[0][currentChar]) {
				str[counter] = Array[0][currentChar];
				break;
			}
			else if (str[counter] == Coded[1][currentChar]) {
				str[counter] = Array[1][currentChar];
				break;
			}
			else {
				currentChar++;
				if (currentChar > 65) { break; }
			}
		}
	}

	return str;
}

// Coded Function
// Include The Two Functions ( if true ( UncodeIT ) : false ( CodeIT ) ) 
String coded(bool CODED, String str) {
	if (CODED) { return UncodeIT(str); }
	if (!CODED) { return CodeIT(str); }
}

// End Code

#endif // PROSTRING_H
