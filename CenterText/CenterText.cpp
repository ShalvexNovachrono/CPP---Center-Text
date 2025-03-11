
//// This program will print the text in the center of the line of characters

#include <iostream>
#include <string>
using namespace std;

/// <summary>
/// This function will print a line of character with a specific length
/// </summary>
/// <param name="character"></param>
/// <param name="length"></param>
void RepeatPrintThisCharacter(char character, int length) {
	for (size_t i = 0; i < length; i++) {
		cout << character;
	}
}

/// <summary>
/// This function will print the text in the center of the line
/// </summary>
/// <param name="text"></param>
/// <param name="padding"></param>
void PrintText(string text, int padding) {
	RepeatPrintThisCharacter(' ', padding);
	cout << text << endl;
}

int main()
{
	int padding = 4; // This is the padding of the text because their is 4 "*" before and after the text "John Smith"
	string text;


	cout << "Enter text: ";
	getline(cin, text); // This is to get the text from the user and "getline" is used because it can get the whole line of text including spaces

	size_t Length = text.length() + padding * 2; // The length of the line of characters is based on the length of the text and the padding which is in the front and at the back of the text

	RepeatPrintThisCharacter('*', Length);
	cout << endl; // This is to make the text in the center of the line because this method/function "RepeatPrintThisCharacter" does not print new line after printing the line of characters
	PrintText(text, padding);
	RepeatPrintThisCharacter('*', Length);
}
