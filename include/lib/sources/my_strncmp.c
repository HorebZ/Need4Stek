/*
** EPITECH PROJECT, 2017
** my_strncmp.c
** File description:
** my_strncmp.c
*/

#include <stdlib.h>
#include <unistd.h>
#include "basic.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
	int i = -1;
	int j = -1;

	while (s1[++i] != '\0' && s2[++j] != '\0' && i != n) {
		if (s1[i] < s2[j])
			return (1);
		if (s1[i] > s2[j])
			return (-1);
	}
	if ((s1[i] == '\0' && s2[j] == '\0') || i == n)
		return (0);
	else
		return (s1[i] - s2[j]);
}
