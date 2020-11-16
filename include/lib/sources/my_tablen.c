/*
** EPITECH PROJECT, 2017
** my_tablen.c
** File description:
** my_tablen.c
*/

#include <stdlib.h>
#include "basic.h"

int my_tablen(char **tab)
{
	int i = 0;

	if (tab == NULL)
		return (0);
	for (i = 0; tab[i]; i++);
	return (i);
}
