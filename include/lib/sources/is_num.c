/*
** EPITECH PROJECT, 2017
** is_num.c
** File description:
** is_num.c
*/

#include "basic.h"

int is_num(char x)
{
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}
