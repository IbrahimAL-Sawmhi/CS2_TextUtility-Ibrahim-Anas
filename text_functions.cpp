#include <iostream>
#include <cstring>
#include "text_functions.h"


int getWordCount(char[] cstring, int length)
{
	int counter = 0;

	if (length == 0)
		return counter;
	if (!isspace(cstring[0]))
		counter++;
	
	for (int i = 1; i < length; i++)
	{
		if (isspace(int(cstring[i - 1])) && (!isspace(int(cstring[i]))))
		{
			counter++;
			continue;
		}
	}

	return counter;
}
