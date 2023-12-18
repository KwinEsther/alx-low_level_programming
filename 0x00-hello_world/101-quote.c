#include <unistd.h>
#include <string.h>
/**
 * main- entry point
 *
 * Return: 1
 */
int main(void)
{
char word[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(2, word, strlen(word));
return (1);
}
