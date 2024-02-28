#include "main.h"

/**
 * _strchr - Locate character in string
 * @str: String to be searched
 * @c: Character to be located
 *
 * Return: Pointer to the first occurrence of character in str,
 *         otherwise NULL if not found
 */
char *_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

/**
 * _strdup - Duplicate a string
 * @str: Source string to be duplicated
 *
 * Return: Pointer to the newly allocated string, otherwise NULL
 */
char *_strdup(const char *str)
{
	size_t length = _strlen(str);
	char *duplicate;

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	if (duplicate == NULL)
		return (NULL);

	_strcpy(duplicate, str);
	return (duplicate);
}

/**
 * _strcmp - Compare two strings
 * @str1: First string
 * @str2: Second string
 *
 * Return: Integer value representing the comparison result
 */
int _strcmp(const char *str1, const char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}

/**
 * _atoi - Convert a string to an integer
 * @str: String to convert
 *
 * Return: Resulting integer
 */
int _atoi(const char *str)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (str[i] == ' ')
		i++;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

/**
 * _strncmp - Compare at most n characters of two strings
 * @s1: First string
 * @s2: Second string
 * @n: Max number of characters to compare
 *
 * Return: Integer representing the comparison result
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	for (i = 0; i < n && s1[i] && s2[i] && s1[i] == s2[i]; i++)
		;

	return (i == n ? 0 : (s1[i] - s2[i]));
}
