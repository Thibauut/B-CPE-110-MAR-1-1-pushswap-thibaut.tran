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
    int i = 2147483648, pow = 1, j = 0, k = 0;
    int list_a_len = 0, list_b_len = 0;
    while (pow != i) {
        list_a_len = list_len(list_a);
        while (j < list_a_len) {
            if ((list_a->nb & pow) != 0)
                pb(&list_a, &list_b), rb(&list_b);
            else
                ra (&list_a);
            j += 1;
        }
        j = 0;
        list_b_len = list_len(list_b);
        while (k < list_b_len) {
            pa(&list_a, &list_b), ra(&list_a);
            k += 1;
        }
        k = 0;
        pow = pow * 2;
    }
    my_putstr("\nl_a : "), my_show_link_list(list_a);
}