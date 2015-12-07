/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#define SIZE 31
int compare(char *b, char *w)
{
	int i = 0, j = 0;
	char z[100];
	for (; b[i] != '\0'; i++)
	{
		if (b[i] == ' ')
		{
			z[j] = '\0';
			if (strcmp(z, w) == 0)
			{
				return 1;
			}
			j = 0;
		}
		else
			z[j++] = b[i];
	}
	z[j] = '\0';
	if (strcmp(z, w) == 0)
	{
		return 1;
	}
	return 0;
}
char ** commonWords(char *a, char *b)
{
	char **c, w[100];
	if (a == NULL || b == NULL)
		return NULL;
	c = (char**)malloc(100 * 100);
	int i = 0, j = 0, k = 0, flag = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ' ')
		{
			if (flag == 0)
				continue;
			if (strcmp(w, " ") == 0)
				continue;
			w[j] = '\0';
			if (compare(b, w))
			{
				c[k] = (char*)malloc(strlen(w) + 1);
				strcpy(c[k], w);
				k++;
			}
			j = 0;
			flag = 0;
		}
		else
		{
			flag = 1;
			w[j++] = a[i];
		}

	}
	w[j] = '\0';
	if (compare(b, w) && flag)
	{
		c[k] = (char*)malloc(strlen(w) + 1);
		strcpy(c[k], w);
		k++;
	}
	c[k] = '\0';
	printf("%d\n", k);
	if (k == 0)
		return NULL;
	return c;
}