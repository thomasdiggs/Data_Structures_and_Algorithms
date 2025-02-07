/*
 * Merge Sort Algorithm
 * 
 * Merge Sort is a divide-and-conquer sorting algorithm.
 * It recursively divides the array into two halves until each subarray has one element,
 * then merges sorted subarrays back together to form the final sorted array.
 * Merge Sort is known for its efficiency and predictable O(n log n) time complexity.
 * 
 * Characteristics:
 * - Stability: Stable
 * - Time Complexity: O(n log n)
 * - Space Complexity: O(n) (requires additional storage for merging)
 */

#include <stdio.h>

void merge_sort() {
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

    merge_sort(array);

    printf("Sorted:");
    for (int i = 0; i < length; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");

    return 0;
}