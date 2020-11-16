/*
** EPITECH PROJECT, 2017
** ia.c
** File description:
** ia.c
*/


#include "n4s.h"

static void go_left(infos_t *info)
{
	static double wheels_dir[6] = {0.33, 0.3, 0.22, 0.18, 0.03, 0.01};
	static int range[5] = {400, 500, 700, 1020, 1350};
	int i;

	for (i = 0; i <= 4;) {
		if (info->mid < range[i]) {
			set_direction(wheels_dir[i], 0);
			i = 10;
		} else
			i++;
	}
	if (i == 5)
		set_direction(wheels_dir[i], 0);
}

static void go_right(infos_t *info)
{
	static double wheels_dir[6] = {0.33, 0.3, 0.22, 0.18, 0.03, 0.01};
	static int range[5] = {400, 500, 700, 1020, 1350};
	int i;

	for (i = 0; i <= 4;) {
		if (info->mid < range[i]) {
			set_direction(wheels_dir[i], 1);
			i = 10;
		} else
			i++;
	}
	if (i == 5)
		set_direction(wheels_dir[i], 1);
}

int launch_ia(infos_t *info, char **tab)
{
	info->left = atof(tab[3]);
	info->mid = atof(tab[19]);
	info->right = atof(tab[34]);
	info->left > info->right ?
	go_left(info) : go_right(info);
	if (detect_end(tab[35]))
		exit(0);
	return (0);
}

void control_speed(infos_t *info)
{
	static double speed[8] = {1.0, 0.8, 0.62, 0.5, 0.4, 0.3, 0.2, 0.1};
	static int indicator_mid[7] = {2500, 2000, 1500, 1000, 500, 400, 300};
	int i;

	for (i = 0; i <= 6;) {
		if (info->mid > indicator_mid[i]) {
			set_speed(speed[i]);
			i = 10;
		} else
			i++;
	}
	if (i == 7)
		set_speed(speed[i]);
}
