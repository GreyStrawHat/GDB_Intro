#include <stdio.h>
#include <stdlib.h>

#define FAILURE 1
#define SUCCESS 0
#define MAX_BUFFER_SIZE 32

int main()
{
    int exit_code = SUCCESS;

    char buffer_0[MAX_BUFFER_SIZE];
    char buffer_1[MAX_BUFFER_SIZE] = {0};

    int num = 1337;

    char * hardcoded = "This is a hardcoded string.\n";

    puts(hardcoded);

    return exit_code;
}