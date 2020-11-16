/*
** EPITECH PROJECT, 2017
** get_next_line.h
** File description:
** get_next_line.h
*/

#ifndef GET_NEXT_LINE_H_
#define GET_NEXT_LINE_H_

#define READ_SIZE 1

char *get_next_line(const int fd);
char *add(char *line, int deal, char *buf, int *begin);
char *my_strncpy(char *dest, char *src, int n);

#endif /* GET_NEXT_LINE_H_ */
