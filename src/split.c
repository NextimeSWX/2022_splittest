/*
 * E89 Pedagogical & Technical Lab
 * project:     Split
 * created on:  2023-05-21 - 17:57 +0200
 * 1st author:  NextimeSWX - nextime
 * description: split.c
 */

#include "stu.h"

char **split(const char *str, char token)
{
    char **tab;
    char *liste;
    int size;
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    size = 0;
    if (str == NULL)
        return (NULL);
    while (str[i] != '\0') {
        if (str[i] == token)
            size += 1;
        i += 1
            }
    i = 0;
    tab = malloc(sizeof(char) * size + 2);
    tab[size + 2] = '\0';
    while (str[i] != '\0') {
        while (str[i] != token) {
            liste[k] = str[i];
            i += 1;
            k += 1;
        }
        tab[j] = strdup(liste);
        k = 0;
        j += 1;
        i += 1;
    }
    free(liste);
    return (tab);
}
