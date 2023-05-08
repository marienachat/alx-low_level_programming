#include "main.h"
#include <stdlib.h>
/**
* read_textfile- Read text file print to STDOUT
* @filename: text file to read
* @letters: number's letters to be read
* Return: w- actual number of bytes read and printed
*        0 when function fails or filename is NULL
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *c;
ssize_t f, w, tt;
/*ssize_t w;*/
/*ssize_t t;*/
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
c = malloc(sizeof(char) * letters);
tt = read(f, c, letters);
w = write(STDOUT_FILENO, c, tt);
free(c);
close(f);
return (w);
}
