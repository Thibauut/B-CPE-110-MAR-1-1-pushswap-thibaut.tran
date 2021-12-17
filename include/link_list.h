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

typedef struct my_s {
    int i;
    int j;
    int k;
} my_t;

#ifndef LINK_LIST_
#define LINK_LIST_

int list_len(my_list_t *list);
void my_show_link_list(my_list_t *list);
int get_element(my_list_t *list, int pos);
my_list_t *create_cell(int nb);
my_list_t *free_list(my_list_t *list);
my_list_t *add_element(my_list_t *list, int nb, int pos);
my_list_t *set_element_at(my_list_t *list, int nb, int pos);
my_list_t *free_element_at(my_list_t *list, int pos);
my_list_t *free_first_element(my_list_t *list);
my_list_t *pb(my_list_t **list_a, my_list_t **list_b);
my_list_t *pa(my_list_t **list_a, my_list_t **list_b);
my_list_t *rb(my_list_t **list_b, int b_len);
my_list_t *ra(my_list_t **list_a, int a_len);
my_list_t *my_radix(my_list_t *list_a, my_list_t *list_b, int count);
my_list_t *my_radix_neg(my_list_t *list_a, my_list_t *list_b, int count);

#endif
