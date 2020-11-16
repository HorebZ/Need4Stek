/*
** EPITECH PROJECT, 2017
** basic.h
** File description:
** basic.h
*/

#ifndef BASIC_H_
#define BASIC_H_

void my_putchar(char c);
int my_strlen(char *str);
void my_putstr(char *str);
char *my_strcat(char *dest, char *src);
char *my_strdup(char *str);
int my_strcmp(char *s1, char *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char **my_str_to_wordtab(char *str, char *sep);
int my_tablen(char **tab);
int is_num(char x);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char *src);
int is_a_sep(char x, char sep);

#endif /* BASIC_H_ */
