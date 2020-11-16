/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main.c
*/

#include "get_next_line.h"
#include "basic.h"
#include "n4s.h"

static void init_struct(infos_t *info)
{
    info->left = 0;
    info->mid = 0;
    info->right = 0;
    info->speed = SPEED;
    write(1, START, my_strlen(START));
}

int init_movement(infos_t *info)
{
    char *s;
    char **tab;

    set_speed(info->speed);
    while (42) {
        write(1, LIDAR, my_strlen(LIDAR));
        s = get_next_line(0);
        if (detect_end(s)) {
            free(s);
            exit(0);
        }
        tab = my_str_to_wordtab(s, ":");
        free(s);
        if (my_strcmp(tab[1], "OK") == 0)
            launch_ia(info, tab);
    }
    return (0);
}

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    infos_t info;
    char   *s;

    init_struct(&info);
    s = get_next_line(0);
    if (detect_end(s)) {
        free(s);
        exit(0);
    }
    free(s);
    if (init_movement(&info) != 0)
        return (84);
    return (0);
}
