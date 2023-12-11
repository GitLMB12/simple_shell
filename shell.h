#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <sys/wait.h>

#define DELIM " \t\n"
extern char **environ;

char *read_line(void);
char **tokenizer(char *line);
int my_execute(char **command, char **argv);

char *my_strdup(const char *source);
size_t my_strlen(const char *str);
char *my_strcat(const char *str1, const char *str2);
char *my_strcpy(char *ef, const char *src);
int my_strcmp(const char *str1, const char *str2);
void frepf(char **arr);




#endif
