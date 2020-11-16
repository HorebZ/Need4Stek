/*
** EPITECH PROJECT, 2017
** detect_end.c
** File description:
** detect_end.c
*/

#include <unistd.h>
#include "basic.h"
#include "n4s.h"

int detect_end(char *str)
{
	if (my_strcmp(str, CLEAR) == 0) {
		write(1, STOP, my_strlen(STOP));
		return (1);
	}
	return (0);
}
