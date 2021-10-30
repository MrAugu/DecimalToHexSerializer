#include <iostream>
#include <string>
#include <HexUtils.h>

using namespace std;

int main()
{
	cout << ">> Convert DecimaL -> Hexadecimal" << endl;

	cout << ">> ------------------------------" << endl;
	cout << ">> Enter a number: ";

	int decimalNumber;
	cin >> decimalNumber;

	cout << ">> ------------------------------" << endl;
	cout << ">> The hexadecimal number is: " << decimalToHex(decimalNumber) << endl;	
}
