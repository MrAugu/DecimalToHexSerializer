#include <CharUtils.h>
#include <iostream>
#include <string>

char* decimalToHex(unsigned int integer, unsigned int padding = 0)
{
	unsigned int currentResult = integer;
	unsigned int amountOfDivisons = 0;

	if (padding == 0) {
		while (currentResult != 0)
		{
			currentResult /= 16;
			amountOfDivisons += 1;
		}
	}
	else {
		amountOfDivisons = padding;
	}

	char* hexString = new char[amountOfDivisons];
	hexString[amountOfDivisons] = '\0';
	for (int i = 0; i < (int)amountOfDivisons; i++)
	{
		hexString[i] = 'X';
	}

	currentResult = integer;
	unsigned int currentModulo = 0;
	unsigned int position = 0;

	while (currentResult != 0)
	{
		currentModulo = currentResult % 16;
		currentResult /= 16;
		hexString[position] = intToChar(currentModulo);
		position += 1;
	}

	for (int i = 0; i < amountOfDivisons; i++)
	{
		if (hexString[i] == 'X')
		{
			hexString[i] = '0';
		}
		else {
			continue;
		}
	}

	std::reverse(hexString, hexString + std::strlen(hexString));

	return hexString;
}
