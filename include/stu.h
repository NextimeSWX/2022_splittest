/*
 * E89 Pedagogical & Technical Lab
 * project:     Rev
 * created on:  2022-11-22 - 09:48 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: stu.h
 */

#ifndef STU_H_
#define STU_H_

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <fcntl.h>
#include <unistd.h>

char **split(const char *str, char token);
void split_delete(char **sp);
void split_print(char **sp);
unsigned int split_size(const char **sp);

#endif
