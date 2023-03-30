#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: first string
 * @s2: second string
 * Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int m;

	for (m = 0; s1[m] != '\0'  ||  s2[m] != '\0'; y++)
	{
		if (s1[m] != s2[m])
			return (s1[m] - s2[m]);
	}
	return (0);
}
