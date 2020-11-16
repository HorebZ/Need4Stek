/*
** EPITECH PROJECT, 2017
** my_strdup.c
** File description:
** my_strdup.c
*/

#include <stdlib.h>
#include "basic.h"

char *my_strdup(char *str)
{
	int i = 0;
	char *dup;

	dup = malloc(sizeof(char) * (my_strlen(str) + 1));
	if (dup == NULL)
		return (NULL);
	for (; str[i] != '\0'; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}
