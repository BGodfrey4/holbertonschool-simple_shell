/**
* main - the simple shell
* @argc: is the number of arguments
* @argv: is the array of arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{


        if (!argc)
        return (0);
        prompt(argv[0]);
        return (0);
}
