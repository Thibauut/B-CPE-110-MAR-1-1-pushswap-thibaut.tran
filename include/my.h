/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** my.h
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

#ifndef MY_H_
#define MY_H_

void my_put_nbr(int nb);
void my_putchar(char c);
void my_putstr(char *str);
int nb_to_binary(unsigned int nb);
char *my_strdup(char *src);
int my_strlen(char *str);
void my_put_long(int nb);
int my_getnbr(char *str);
char *my_itoa(int nb);

#endif