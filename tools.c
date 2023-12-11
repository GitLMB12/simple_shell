#include "shell.h"

/**
 * frepf - Frees memory allocated for a string array.
 * @arr: The string array to be freed.
 */
void frepf(char **arr)
{
	int i;

	if (!arr)
		return;
	for (i = 0; arr[i]; i++)
	{
		printf("%s\n", arr[i]);
		free(arr[i]), arr[i] = NULL;
	}
	free(arr), arr = NULL;
}
