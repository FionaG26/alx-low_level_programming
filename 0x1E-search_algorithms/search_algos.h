#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct list_s
{
    int n;
    struct list_s *next;
} list_t;

/*function that searches for a value in an array using the linear search algorithm*/
int linear_search(int *array, size_t size, int value);
/*function that searches for a value in a sorted array of integers using the binary search algorithm*/
int binary_search(int *array, size_t size, int value);
/*function that searches for a value in a sorted array of integers using the Jump search algorithm*/
int jump_search(int *array, size_t size, int value);
/*function that searches for a value in a sorted array of integers using the Interpolation search algorithm*/
int interpolation_search(int *array, size_t size, int value);
/*function that searches for a value in a sorted array of integers using the Exponential search algorithm*/
int exponential_search(int *array, size_t size, int value);
/*function that searches for a value in a sorted array of integers*/
int advanced_binary(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
