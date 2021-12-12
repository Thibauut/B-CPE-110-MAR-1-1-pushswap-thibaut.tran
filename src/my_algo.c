/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-thibaut.tran
** File description:
** my_sort.c
*/

#include "../include/my.h"
#include "../include/link_list.h"

my_list_t *my_radix(my_list_t *list_a, my_list_t *list_b, int count)
{
    int list_b_len = 0;
    for (int i = 31, l = 0, pow = 1, j = 0, k = 0; l != i; l+= 1, pow *= 2) {
        j = 0, k = 0;
        for (; j < count; j += 1) {
            if ((list_a->nb & pow) != 0)
                pb(&list_a, &list_b), rb(&list_b);
            else
                ra (&list_a);
        }
        list_b_len = list_len(list_b);
        for (; k < list_b_len; k += 1)
            pa(&list_a, &list_b), ra(&list_a);
    }
    my_radix_neg(list_a, list_b, count);
}

my_list_t *my_radix_neg(my_list_t *list_a, my_list_t *list_b, int count)
{
    int list_b_len = 0;
    for (int i = 32, l = 0, pow = 1, j = 0, k = 0; l != i; l += 1, pow *= 2) {
        j = 0, k = 0;
        for (; j < count; j += 1) {
            if ((list_a->nb & pow) < 0)
                pb(&list_a, &list_b), list_b_len += 1;
            else
                ra (&list_a);
        }
        for (; k < list_b_len ; k += 1)
            pa(&list_a, &list_b);
    }
    my_putstr("rb\n");
}