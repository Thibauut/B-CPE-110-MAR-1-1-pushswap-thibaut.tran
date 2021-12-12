/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-thibaut.tran
** File description:
** init_link_chain.c
*/

#include "../include/my.h"
#include "../include/link_list.h"

my_list_t *create_cell(int nb)
{
    my_list_t *cell = malloc(sizeof(my_list_t));
    if (cell == NULL)
        return (NULL);
    cell->nb = nb;
    cell->next = NULL;
    return (cell);
}

my_list_t *add_element(my_list_t *list, int nb, int pos)
{
    my_list_t *prev = list;
    my_list_t *curr = list;
    my_list_t *cell = create_cell(nb);
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

my_list_t *free_list(my_list_t *list)
{
    my_list_t *tmp = NULL;
    for (; list != NULL;) {
        tmp = list->next;
        free(list);
        list = tmp;
    }
    my_putchar('\n');
}

void my_show_link_list(my_list_t *list)
{
    while(list != NULL) {
        my_put_nbr(list->nb);
        my_putstr(" | ");
        list = list->next;
    }
}

int list_len(my_list_t *list)
{
    int i = 0;
    while (list != NULL) {
        i += 1;
        list = list->next;
    }
    return (i);
}