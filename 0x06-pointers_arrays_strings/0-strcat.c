#include "main.h"
int _strlen(char *);
/*
 * _strcat - This function concatenates two strings
 * @src: the source string
 * @dest: the destination
 * Return: a pointer to the result
 */
char *_strcat(char *dest, char *src)
{
	char tmp[100];
	char *p = tmp;
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);
	int i, j;

	for (i = 0; i <= dest_len; i++)
	{
		tmp[i] = dest[i];
	}
	for (i = 0, j = 1; i <= src_len; i++, j++)
	{
		tmp[dest_len + j] = src[i];
	}
	return (p);
}



/*
 * _strlen - This function gets the length of a string
 * Return: the length
 * @src: the string
 */
int _strlen(char *src)
{
	int i, len;

	i = len = 0;
	while (src[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}