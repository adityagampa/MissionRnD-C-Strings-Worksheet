/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include<stdlib.h>
#include<string.h>
char KthIndexFromEnd(char *s, int k)
{
	int l;
	if (s != NULL)
		l = strlen(s);
	return s == NULL || s == ""  || k<0 || k>l ? '\0' : s[l - k - 1];
}
