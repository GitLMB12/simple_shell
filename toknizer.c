#include "shell.h"

/**
 * tokenizer - splits a string into words. Repeat delimiters are ignored.
 * @line: the input string
 *
 * This function tokenizes the input string and returns an array of strings.
 * The tokens are separated by the specified delimiter.
 *
 * Return: a pointer to an array of strings, or NULL on failure
 */
char **tokenizer(char *line)
{
	char *token = NULL;
	char *tmp = NULL;
	char **command = NULL;
	int cpt = 0, i = 0;

	if (!line)
	{
		return (NULL);
	}
	tmp = my_strdup(line);
	token = strtok(tmp, DELIM);
	if (token == NULL)
	{
		return (NULL);
	}
	while (token)
	{
		cpt++;
		token = strtok(NULL, DELIM);
	}
	free(tmp);
	command = malloc(sizeof(char *) * (cpt + 1));
	if (!command)
	{
		free(line);
		return (NULL);
	}
	token = strtok(line, DELIM);
	while (token)
	{
		command[i] = my_strdup(token);
		token = strtok(NULL, DELIM);
		i++;
	}
	free(line);
	line = NULL;
	command[i] = NULL;
	return (command);
}
