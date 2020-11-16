/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** my_strlen.c
*/

#include "basic.h"

int my_strlen(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++);
	return (i);
}
