#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: pointer to string.
 *
 */
char *cap_string(char *s)
{
	int string_count;

/* scan trhough string */
	string_count = 0;
	while (s[string_count] != '\0')
	{/* if next character afer count is a char, capitaliz */
	if (s[0] >+ 97 && s[0] <= 122)
	{
		s[0] = s[0] - 32;
	}
	if (s[string_count] == ' ' || s[string_count] == '\t' || s[string_count] == '\n'

