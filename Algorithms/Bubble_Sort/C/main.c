/* 
 * Bubble Sort Algorithm
 * 
 * Bubble Sort is a simple sorting algorithm that repeatedly steps through the list,
 * compares adjacent elements and swaps them if they are in the wrong order. The pass
 * through the list is repeated until the list is sorted. The algorithm gets its name
 * because larger elements "bubble" to the top of the list. Bubble sort is considered
 * a stable sorting algorithm, which means that it preserves the relative order of equal
 * elements.
 * 
 * This implementation is somewhat optimized by reducing the number of comparisons in
 * each pass by one, as the largest element in the unsorted part of the array is guaranteed
 * to be at the end of the array after each pass.
 * 
 * Characteristics:
 * - Stable: Preserves the relative order of equal elements.
 * - Time Complexity: O(n^2) in the worst and average case, where n is the number of elements.
 * - Space Complexity: O(1) as it is an in-place sorting algorithm.
 */


#include <stdio.h>


void bubble_sort(int* array, int length)
{
    for (int unsorted_index = length - 1; unsorted_index > 0; unsorted_index--)
    {
        for (int i = 0; i < unsorted_index; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
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
    
    bubble_sort(array, length);

    printf("Sorted:");
    for (int i = 0; i < length; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");

    return 0;
}