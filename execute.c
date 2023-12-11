#include "shell.h"

/**
 * my_execute - Execute a command using fork and execvp.
 * @command: An array of strings representing the command and its arguments.
 * @argv: The command-line arguments, typically passed from the main function.
 * Return: The exit status of the child process.
 */
int my_execute(char **command, char **argv)
{
	pid_t child;
	int status;

	child = fork();
	if (child == -1)
	{
		perror("fork");
		return (-1);
	}
	if (child == 0)
	{
		if (execve(command[0], command, environ) == -1)
		{
			perror(argv[0]);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(child, &status, 0);
		free(command);
	}
	return (WEXITSTATUS(status));
}
