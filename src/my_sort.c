/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-thibaut.tran
** File description:
** my_sort.c
*/

#include "../include/my.h"
#include "../include/link_list.h"

my_list_t *my_sort(my_list_t *list_a, my_list_t *list_b)
{
    int pow = 1, j = 0, k = 0;
    int list_a_len = list_len(list_a), list_b_len = 0;
    while (j != list_a_len) {
        if (list_a->nb & pow != 0)
            pb(&list_a, &list_b), rb(&list_a, &list_b);
        else
            ra (&list_a, &list_b);
        j += 1;
    }
    list_b_len = list_len(list_b);
    if (list_b != NULL) {
        while (k != list_b_len) {
            pa(&list_a, &list_b), ra(&list_a, &list_b);
            k += 1;
        }
    }
}