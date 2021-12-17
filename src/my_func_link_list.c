/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-thibaut.tran
** File description:
** link_chain.c
*/

#include "../include/my.h"
#include "../include/link_list.h"

int get_element(my_list_t *list, int pos)
{
    if (list == 0)
        return (84);
    for (int i = 0; i < pos; i += 1)
        list = list->next;
    return (list->nb);
}

my_list_t *set_element_at(my_list_t *list, int nb, int pos)
{
    my_list_t *cell = create_cell(nb);
    my_list_t *prev = list;
    my_list_t *curr = list;
    if (list == NULL)
        return (cell);
    if (pos == 0) {
        cell->next = list;
        return (cell);
    }
    for (int i = 0; i < pos; i += 1) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = cell;
    cell->next = curr;
    return (list);
}

my_list_t *free_first_element(my_list_t *list)
{
    if (list == NULL)
        return (NULL);
    my_list_t *tmp = list;
    list = tmp->next;
    return (list);
}

my_list_t *free_element_at(my_list_t *list, int pos)
{
    my_list_t *prev = list;
    my_list_t *curr = list;
    if (list == NULL)
        return (NULL);
    if (pos == 0) {
        list = free_first_element(list);
        return list;
    }
    for (int i = 0; i < pos; i += 1) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    free(curr);
    return (list);
}