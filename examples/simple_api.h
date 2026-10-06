#ifndef SIMPLE_API_H
#define SIMPLE_API_H

#define SUCCESS 0
#define FAILURE -1

#include <stdlib.h>
#include <stdbool.h>

typedef struct plate_t
{
    void * p_next; /* A pointer to the next plate being stored */
} plate_t;

typedef struct plate_container_t
{
    void * p_plate; /* A pointer to the plate at the top of the container */
} plate_container_t;

plate_container_t * create_plate_container (void);
int                 add_plate (plate_container_t * p_container);
int                 remove_plate (plate_container_t * p_container);
int                 destroy_plate_container (plate_container_t * p_container);

#endif // SIMPLE_API_H

/*** end of file ***/
