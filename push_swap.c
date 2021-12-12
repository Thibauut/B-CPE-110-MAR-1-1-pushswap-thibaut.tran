/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-thibaut.tran
** File description:
** push_swap.c
*/

#include "include/link_list.h"
#include "include/my.h"

int main(int ac, char **av)
{
    int bin = 0, i = 1, count = 0, nb = 0;
    my_list_t *list_a = NULL;
    my_list_t *list_b = NULL;
    if (ac == 1)
        return (84);
    if (ac == 2) {
        my_putchar('\n');
        return (0);
    }
    while (i < ac) {
        nb = my_getnbr(av[i]);
        list_a = add_element(list_a, nb, (i - 1));
        count += 1;
        i += 1;
    }
    my_radix(list_a, list_b, count);
    return 0;
}