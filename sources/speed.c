/*
** EPITECH PROJECT, 2017
** speed.c
** File description:
** speed.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include "basic.h"
#include "n4s.h"

void set_speed(double value)
{
	char *s;

	write(1, FWD, my_strlen(FWD));
	dprintf(1, "%.2f", value);
	write(1, "\n", my_strlen("\n"));
	s = get_next_line(0);
	if (detect_end(s) == 1) {
		free(s);
		exit(0);
	}
	free(s);
}
