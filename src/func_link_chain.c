/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-thibaut.tran
** File description:
** link_chain.c
*/

#include "../include/my.h"
#include "../include/link_list.h"

my_list_t *add_element(my_list_t *list, int nb, int pos)
{
    my_list_t *prev = list;
    my_list_t *curr = list;
    int i = 0;
    my_list_t *cell = create_cell(nb);
    if (list == NULL)
        return (cell);
    if (pos == 0) {
        cell->next = list;
        return (cell);
    }
    for (; i < pos; i += 1) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = cell;
    cell->next = curr;
    return (list);
}

int get_element(my_list_t *list, int pos)
{
    int i = 0;
    if (list == 0)
        return (84);
    while (i < pos) {
        list = list->next;
        i += 1;
    }
    return (list->nb);
}

my_list_t *set_element_at(my_list_t *list, int nb, int pos)
{
    int i = 0;
    my_list_t *cell = create_cell(nb);
    my_list_t *prev = list;
    my_list_t *curr = list;
    if (list == NULL)
        return (cell);
    if (pos == 0) {
        cell->next = list;
        return (cell);
    }
    for (; i < pos; i += 1) {
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
    int i = 0;
    if (list == NULL)
    return (NULL);
    if (pos == 0) {
        list = free_first_element(list);
        return list;
    }
    while (i < pos) {
        prev = curr;
        curr = curr->next;
        i += 1;
    }
    prev->next = curr->next;
    free(curr);
    return (list);
}

void my_show_link_list(my_list_t *list)
{
    while(list != NULL) {
        my_put_nbr(list->nb);
        my_putstr(" -> ");
        list = list->next;
    }
    my_putstr("NULL");
}