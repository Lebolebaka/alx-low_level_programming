#include "main.h"
/**
 * _strchr - prints from the first occurrence of a char.
 * @st: source string
 * @c: tested char
 *
 * Return: new string.
 */
char *_strchr(char *st, char c)
{
	while (*st != '\0')
	{
		if (*st == c)
		{
			return (st);

		}
		else
			st++;
	}
	if (*st == c)
		return (st);
	else
		return (0);
}
