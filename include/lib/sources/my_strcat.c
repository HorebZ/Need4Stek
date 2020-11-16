/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** my_strcat.c
*/

#include "basic.h"

char *my_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0')
		dest[i++] = src[n++];
	dest[i] = '\0';
	return (dest);
}
