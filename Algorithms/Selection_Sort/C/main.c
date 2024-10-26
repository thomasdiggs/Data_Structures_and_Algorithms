/*
 * Selection Sort Algorithm
 *
 * Selection Sort is a comparison-based sorting algorithm that divides the input list into two parts:
 * the sublist of items already sorted, which is built up from left to right at the front of the list,
 * and the sublist of items remaining to be sorted that occupy the rest of the list. Initially, the 
 * sorted sublist is empty and the unsorted sublist is the entire input list. The algorithm proceeds 
 * by finding the largest element in the unsorted sublist, exchanging it with the leftmost unsorted 
 * element, and moving the sublist boundaries one element to the right.
 *
 * Characteristics:
 * - Unstable: Swapping elements can change the relative order of equal elements.
 * - Time Complexity: O(n^2) due to the nested loops iterating over the list.
 * - Space Complexity: O(1) as it only requires a constant amount of additional memory space.
 */


#include <stdio.h>


void selection_sort(int* array, int length)
{
    for (int index_of_last_unsorted = length - 1; index_of_last_unsorted > 0; index_of_last_unsorted--)
    {
        int index_of_largest = 0;
        for (int j = 1; j <= index_of_last_unsorted; j++)
        {
            if (array[j] > array[index_of_largest])
            {
                index_of_largest = j;
            }
        }
        int temp = array[index_of_last_unsorted];
        array[index_of_last_unsorted] = array[index_of_largest];
        array[index_of_largest] = temp;
    }
}


int main(void)
{
    int array[] = { 20, 35, -15, 7, 55, 1, -22 };
    int length = sizeof(array) / sizeof(array[0]);

    printf("Unsorted:");
    for (int i = 0; i < length; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");

    selection_sort(array, length);

    printf("Sorted:");
    for (int i = 0; i < length; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");

    return 0;
}