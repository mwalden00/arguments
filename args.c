#include "args.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char ** parse_args(char * line) 
{
	char ** args = malloc(10 * sizeof(char *));
	char * curr = line;
	int i = 0;
	while (curr) {
		args[i] = strsep(&curr, " ");
		i++;
	}
	return args;
}

int main() 
{
	printf("Attempting to parse_args(\"ls -l -a\")\n");
	char line[100] = "ls -l -a";
	char ** args = parse_args(line);
	execvp(args[0], args);
	return 0;
}