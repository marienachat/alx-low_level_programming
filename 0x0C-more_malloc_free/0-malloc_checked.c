#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked : allocates memory using malloc
* @b : int
* Return: array initialise or NULL
*/
void *malloc_checked(unsigned int b)
{
int *a = malloc(b);
if (a == 0)
exit(98);
return (a);
}
