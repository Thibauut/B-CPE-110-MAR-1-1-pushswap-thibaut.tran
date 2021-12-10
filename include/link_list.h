/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-thibaut.tran
** File description:
** link_list.h
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

typedef struct my_list_s {
    int nb;
    struct my_list_s *next;
} my_list_t;

#ifndef LINK_LIST_
#define LINK_LIST_

my_list_t *if_empty_list(void);
my_list_t *create_cell(int nb);
my_list_t *add_element(my_list_t *list, int nb, int pos);
void my_show_link_list(my_list_t *list);
my_list_t *free_list(my_list_t *list);
int list_len(my_list_t *list);
my_list_t *my_sort(my_list_t *list_a, my_list_t *list_b);
int get_element(my_list_t *list, int pos);
my_list_t *set_element_at(my_list_t *list, int nb, int pos);
my_list_t *free_element_at(my_list_t *list, int pos);
my_list_t *free_first_element(my_list_t *list);

my_list_t *pb(my_list_t *list_a, my_list_t *list_b);
my_list_t *pa(my_list_t *list_a, my_list_t *list_b);
my_list_t *rb(my_list_t *list_a, my_list_t *list_b);
my_list_t *ra(my_list_t *list_a, my_list_t *list_b);

#endif