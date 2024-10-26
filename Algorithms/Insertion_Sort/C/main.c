/*
 * Insertion Sort Algorithm
 *
 * Insertion Sort is a simple comparison-based sorting algorithm that builds the final sorted array 
 * one item at a time. It is much less efficient on large lists than more advanced algorithms such as 
 * quicksort, heapsort, or merge sort. However, it has the advantage of being simple to implement and 
 * efficient for small data sets or nearly sorted data.
 *
 * Characteristics:
 * - Stable: Maintains the relative order of equal elements.
 * - Time Complexity: O(n^2) in the average and worst case due to the nested loops iterating over the list.
 * - Space Complexity: O(1) as it only requires a constant amount of additional memory space.
 */


#include <stdio.h>


void insertion_sort(int* array, int length)
{
    for (int index_of_first_unsorted = 1; index_of_first_unsorted < length; index_of_first_unsorted++)
    {
        int element_to_insert = array[index_of_first_unsorted];
        int i = index_of_first_unsorted;
        while (i > 0 && array[i - 1] > element_to_insert)
        {
            array[i] = array[i - 1];
            i--;
        }
        array[i] = element_to_insert;
    }
}


int main(void)
{
    int array[] = {64, -10, 25, 0, 22, 11, 90, 5, 50, 10};
    int length = sizeof(array) / sizeof(array[0]);
    
    printf("Unsorted array: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    insertion_sort(array, length);

    printf("Sorted array: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}