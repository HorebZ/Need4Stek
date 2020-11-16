/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** my_strcpy.c
*/

#include "basic.h"

char *my_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
