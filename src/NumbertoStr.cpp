/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float n, char *s, int d)
{
	int j = n, i = 0, len = 0, flag = 0;
	if (n<0)
	{
		s[i++] = '-';
		n = n*-1;
		j = n;
		flag = 1;
	}
	float dec;
	dec = n - j;
	char temp;
	while (j>0)
	{
		s[i] = j % 10 + 48;
		j = j / 10;
		i++;
	}
	s[i] = '\0';
	len = i;
	for (j = flag, i = i - 1; j<=len / 2; i--, j++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	if (d != 0)
	{
		s[len] = '.';
		len++;
		for (i = 0; i<d; i++)
		{
			dec = dec * 10;
		}
		j = dec;
		s[len + d] = '\0';
		while (j>0)
		{
			d--;
			s[len + d] = j % 10 + 48;
			j = j / 10;
			i++;

		}
	}
}