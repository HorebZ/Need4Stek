/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** my_getnbr.c
*/

#include "basic.h"

int my_getnbr(char const *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 0;
	while (str[i] != '\0' && str[i] == '-') {
		sign++;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9') {
		nb *= 10;
		nb += str[i++] - '0';
	}
	if (sign % 2 == 1)
		nb *= -1;
	return (nb);
}
