#include "shell.h"
/**
* main - the simple shell
* @argc: is the number of arguments
* @argv: is the array of arguments
*
* Return: 0
*/
int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{


        if (!argc)
                return (0);
        prompt(argv[0]);
        return (0);
}
