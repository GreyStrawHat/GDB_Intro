#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define FAILURE         1
#define SUCCESS         2
#define MAX_BUFFER_SIZE 32

typedef struct Person
{
    char * eye_color;
    int    age;
    bool   has_pets;
} Person;

typedef struct node_t
{
    int             value;
    struct node_t * p_next;
} node_t;

int
main()
{
    int exit_code = SUCCESS;
    int x = FAILURE;

    char buffer_0[MAX_BUFFER_SIZE];
    char buffer_1[MAX_BUFFER_SIZE] = { 0 };

    node_t * p_some_node = (node_t *)malloc(sizeof(node_t));

    struct Person * John = malloc(sizeof(Person));
    John->age            = 37;
    John->eye_color      = "Brown";
    John->has_pets       = true;

    free(John);

    int num = 1337;

    char * hardcoded = "This is a hardcoded string.\n";

    puts(hardcoded);
    John = NULL;

    return exit_code;
}