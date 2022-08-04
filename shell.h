#ifndef SHELL_H
#define SHELL_H

typedef struct path
{
	char *dir;
	struct path *next;
} 	path_t;

extern char **environ;
path_t *main_path;
path_t *env;

/* Libraries */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>

int main(int argc, char **argv)



#endif /* SHELL_H */
