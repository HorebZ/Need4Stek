/*
** EPITECH PROJECT, 2017
** n4s.h
** File description:
** n4s.h
*/

#ifndef N4S_H_
#define N4S_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define START "start_simulation\n"
#define STOP "stop_simulation\n"
#define CLEAR "Track Cleared"
#define LIDAR "get_info_lidar\n"
#define FWD "car_forward:"
#define BWD "car_backward:"
#define WDIR "wheels_dir:"
#define SPEED 0.5

typedef struct infos {
	double left;
	double right;
	double mid;
	double speed;
} infos_t;

int launch_ia(infos_t *info, char **tab);
void control_speed(infos_t *info);
void set_speed(double value);
void set_direction(double value, int neg);
int detect_end(char *str);

#endif /* !N4S_H_ */
