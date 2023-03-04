#include <iostream>
#include "Header.h"
using namespace std;
int findValue(char ch)
{
	return static_cast <int>(ch) - 48;
}
int main() {
	
		// Declaration, inputting, and validation of binary string
		string binary;
		do
		{
			cout << "Enter binary string: ";
			getline(cin, binary);
		} while (binary.find_first_not_of("01") < binary.size());
		// Initialization and calculation of decimal integer
		int base = 2;
		int decimal = 0;
		while (!binary.empty())
		{
			decimal *= base;
			char ch = popFront(binary);
			decimal += findValue(ch);
		}
		cout << "Decimal value: " << decimal;
		return 0;
	
}