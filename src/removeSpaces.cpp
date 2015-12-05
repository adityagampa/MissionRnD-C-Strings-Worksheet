/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<string.h>
#include<stdlib.h>
char removeSpaces(char *s)
{
	int i = 0, j = 0;
	if (s==NULL || strcmp(s, "") == 0)
		return '\0';
	for (; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{

		}
		else
			s[j++] = s[i];
	}
	s[j] = '\0';
	return *s;
}