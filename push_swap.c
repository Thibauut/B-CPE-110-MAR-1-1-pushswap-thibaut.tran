/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-thibaut.tran
** File description:
** push_swap.c
*/

#include "include/link_list.h"
#include "include/my.h"

my_list_t *if_empty_list(void)
{
    return (NULL);
}

int main(int ac, char **av)
{
    int bin = 0, i = 1;
    my_list_t *list_a = NULL;
    my_list_t *list_b = NULL;
    if (list_a == NULL)
        if_empty_list();
    while (i < ac) {
        int nb = my_getnbr(av[i]);
        list_a = add_element(list_a, nb, (i - 1));
        i += 1;
    }
    my_sort(list_a, list_b);
    return 0;
}

my_list_t *my_sort(my_list_t *list_a, my_list_t *list_b)
{
    int pow = 1;
    int len = 0, max_len = 0;
    int element = 0;
    int first_elem = 0, last_elem = 0, size = list_len(list_a);
    int j = 0, list_size = list_len(list_a);
    while (j != list_size) {
        if (list_a->nb & pow != 0) {
            // pb
            element = get_element(list_a, 0);
            list_b = set_element_at(list_b, element, 0);
            list_a = free_element_at(list_a, 0);
            write(1, "pb ", 3);

            // rb
            size = (list_len(list_b) - 1);
            if (size > 0) {
                first_elem = get_element(list_b, 0);
                last_elem = get_element(list_b, size);
                list_b = free_element_at(list_b, 0);
                list_b = free_element_at(list_b, size - 1);
                list_b = set_element_at(list_b, first_elem, size - 1);
                list_b = set_element_at(list_b, last_elem, 0);
            write(1, "rb ", 3);
            }
        }
        else {
            // ra
            size = (list_len(list_a) - 1);
            if (size > 0) {
                first_elem = get_element(list_a, 0);
                last_elem = get_element(list_a, size);
                list_a = free_element_at(list_a, 0);
                list_a = free_element_at(list_a, size - 1);
                list_a = set_element_at(list_a, last_elem, 0);
                list_a = set_element_at(list_a, first_elem, size);
            write(1, "ra ", 3);
            }
        }
        j += 1;
    }
    int list_size2 = list_len(list_b), k = 0;
    while (k != list_size2) {
        // pa
        element = get_element(list_b, 0);
        list_a = set_element_at(list_a, element, 0);
        list_b = free_element_at(list_b, 0);
        write(1, "pa ", 3);
        // ra
        size = (list_len(list_a) - 1);
        if (size > 0) {
            first_elem = get_element(list_a, 0);
            last_elem = get_element(list_a, size);
            list_a = free_element_at(list_a, 0);
            list_a = free_element_at(list_a, size - 1);
            list_a = set_element_at(list_a, last_elem, 0);
            list_a = set_element_at(list_a, first_elem, size);
        write(1, "ra ", 3);
        }
        k += 1;
    }
    my_putstr("\nl_a : "), my_show_link_list(list_a);
    my_putchar('\n');
    my_putstr("l_b : "), my_show_link_list(list_b);
}