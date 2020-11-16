/*
** EPITECH PROJECT, 2017
** get_next_line.c
** File description:
** get_next_line.c
*/

#include <stdlib.h>
#include <unistd.h>
#include "basic.h"
#include "get_next_line.h"

char *get_next_line(const int fd)
{
	static char buf[READ_SIZE];
	static int stock = 0;
	static int begin = 0;
	char *line = 0;
	int deal = 0;

	for (; 42; deal++) {
		if (stock <= begin) {
			begin = 0;
			if ((stock = read(fd, buf, READ_SIZE)) == 0)
				return (line);
			if (stock == -1)
				return (NULL);
			deal = 0;
		}
		if (buf[begin + deal] == '\n')
			return (line = add(line, deal, buf, &begin));
		if ((begin + deal) == (stock - 1))
			line = add(line, deal + 1, buf, &begin);
	}
}

char *add(char *line, int deal, char *buf, int *begin)
{
	char *new;
	int oldlen;

	line != 0 ? (oldlen = my_strlen(line)) : (oldlen = 0);
	new = malloc((oldlen + deal + 1) * sizeof(*new));
	if (!new)
		return (NULL);
	line != 0 ? (my_strncpy(new, line, oldlen)) :
	(my_strncpy(new, "", oldlen));
	new[oldlen + deal] = 0;
	my_strncpy(new + oldlen, buf + *begin, deal);
	line ? free(line) : (void)line;
	*begin += (deal + 1);
	return (new);
}

char *my_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	n < i ? dest[i] = '\0' : 0;
	return (dest);
}
