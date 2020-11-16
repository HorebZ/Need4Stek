/*
** EPITECH PROJECT, 2017
** my_str_to_wordtab.c
** File description:
** my_str_to_wordtab.c
*/

#include <stdlib.h>
#include "basic.h"

int word_count(char const *str, char *sep)
{
	int i = 0;
	int nb = 0;

	while (str[i]) {
		if (str[i] == sep[0])
			nb++;
		i++;
	}
	return (nb + 1);
}

char **my_str_to_wordtab(char *str, char *sep)
{
	char **tab = malloc(sizeof(char *) * (word_count(str, sep) + 2));
	int i = 0;
	int j = 0;
	int k;

	while (str[i] != '\0') {
		k = -1;
		if ((tab[j] = malloc(sizeof(char) *
			(256))) == NULL)
			return (NULL);
		while (str[i] != '\0' && (str[i] != sep[0]))
			tab[j][++k] = str[i++];
		tab[j][++k] = '\0';
		if (tab[j][0] != '\0')
			j++;
		if (str[i] != '\0')
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
