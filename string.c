#include "shell.h"

/**
 * my_strdup - duplicates a string
 * @source: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *my_strdup(const char *source)
{
	char *des;
	unsigned int length;
	unsigned int i;

	if (source == NULL)
	{
		return (NULL);
	}
	length = 0;

	while (source[length])
	{
		length++;
	}
	des = malloc((length + 1) * sizeof(char));

	if (des == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (source[i])
	{
		des[i] = source[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}
/**
 * my_strcmp - performs lexicogarphic comparison of two strangs.
 * @str1: the first strang
 * @str2: the second strang
 *
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int my_strcmp(const char *str1, const char *str2)
{
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}
	if (*str1 != '\0')
	{
		return (1);
	}
	else if (*str2 != '\0')
	{
		return (-1);
	}
	return (0);
}
/**
 * my_strlen - returns the length of a string
 * @str: the string whose length to check
 *
 * Return: integer length of string
 */
size_t my_strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	{
		length++;
	}
	return (length);
}
/**
 * my_strcat - concatenates two strings
 * @str1: the destination buffer
 * @str2: the source buffer
 *
 * Return: pointer to destination buffer
 */
char *my_strcat(const char *str1, const char *str2)
{
	size_t len1 = my_strlen(str1);
	size_t len2 = my_strlen(str2);
	size_t j;
	char *result = malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	my_strcpy(result, str1);
	j = 0;
	while (str2[j])
	{
		result[len1 + j] = str2[j];
		j++;
	}
	result[len1 + len2] = '\0';
	return (result);
}
/**
 * my_strcpy - copies a string
 * @ef: the destination
 * @src: the source
 *
 * Return: pointer to destination
 */
char *my_strcpy(char *ef, const char *src)
{
	size_t i = 0;

	while ((ef[i] = src[i]))
	{
		i++;
	}
	return (ef);
}
