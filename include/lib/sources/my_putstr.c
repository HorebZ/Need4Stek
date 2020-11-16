/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** my_putstr.c
*/

#include <unistd.h>
#include "basic.h"

void my_putstr(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
		write(1, &str[i], 1);
}
