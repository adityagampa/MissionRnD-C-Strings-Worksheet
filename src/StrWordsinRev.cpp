/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <stdio.h>
#include <string.h>
char *reverse(char *s, int p, int n)
{
	int i = 0, j = n - 1, k = 0;
	char temp;
	for (i = p; k<(n - p) / 2; i++, j--, k++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	return s;
}
void str_words_in_rev(char *s, int n)
{
	int i = 0, j = 0;
	char temp;
	s = reverse(s, 0, n);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			s = reverse(s, j, i);
			j = i + 1;
		}
	}
	s = reverse(s, j, i);
	printf("%s", s);
}
