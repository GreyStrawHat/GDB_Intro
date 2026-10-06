#include "simple_api.h"

plate_container_t *
create_plate_container(void)
{
    plate_container_t * ret_val = NULL;

    ret_val = calloc(1, sizeof(plate_container_t));
    if (NULL == ret_val)
    {
        goto EXIT;
    }

EXIT:
    return ret_val;
}

int
add_plate(plate_container_t * p_container)
{
    int ret_val = FAILURE;

    if (NULL == p_container)
    {
        goto EXIT;
    }

    plate_t * p_plate = calloc(1, sizeof(plate_t));
    if (NULL == p_plate)
    {
        goto EXIT;
    }

    p_plate->p_next      = p_container->p_plate;
    p_container->p_plate = p_plate;

    ret_val = SUCCESS;

EXIT:
    return ret_val;
}

int
remove_plate(plate_container_t * p_container)
{
    int ret_val = FAILURE;

    if (NULL == p_container)
    {
        goto EXIT;
    }

    plate_t * p_old_plate = p_container->p_plate;
    p_container->p_plate  = p_old_plate->p_next;

    free(p_old_plate);
    p_old_plate = NULL;

    ret_val = SUCCESS;
EXIT:
    return ret_val;
}
int
destroy_plate_container(plate_container_t * p_container)
{
    int ret_val = FAILURE;

    if (NULL == p_container)
    {
        goto EXIT;
    }

    free(p_container);

EXIT:
    return ret_val;
}