/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-thibaut.tran
** File description:
** func_op.c
*/

#include "../include/my.h"
#include "../include/link_list.h"

my_list_t *pb(my_list_t *list_a, my_list_t *list_b)
{
    int element = 0;
    element = get_element(list_a, 0);
    list_b = set_element_at(list_b, element, 0);
    list_a = free_element_at(list_a, 0);
}

my_list_t *pa(my_list_t *list_a, my_list_t *list_b)
{
    int element = 0;
    element = get_element(list_b, 0);
    list_a = set_element_at(list_a, element, 0);
    list_b = free_element_at(list_b, 0);
}

my_list_t *rb(my_list_t *list_a, my_list_t *list_b)
{
    int first_elem = 0;
    int last_elem = 0;
    int size = (list_len(list_b) - 1);
    if (size > 0) {
        first_elem = get_element(list_b, 0);
        last_elem = get_element(list_b, size);
        list_b = free_element_at(list_b, 0);
        list_b = free_element_at(list_b, size - 1);
        list_b = set_element_at(list_b, first_elem, size - 1);
        list_b = set_element_at(list_b, last_elem, 0);
    }
}

my_list_t *ra(my_list_t *list_a, my_list_t *list_b)
{
    int first_elem = 0;
    int last_elem = 0;
    int size = (list_len(list_a) - 1);
    if (size > 0) {
        first_elem = get_element(list_a, 0);
        last_elem = get_element(list_a, size);
        list_a = free_element_at(list_a, 0);
        list_a = free_element_at(list_a, size - 1);
        list_a = set_element_at(list_a, last_elem, 0);
        list_a = set_element_at(list_a, first_elem, size);
    }
}