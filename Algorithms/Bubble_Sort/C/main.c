/* 
 * Bubble Sort Algorithm
 * 
 * Bubble Sort is a simple sorting algorithm that repeatedly steps through the list,
 * compares adjacent elements and swaps them if they are in the wrong order. The pass
 * through the list is repeated until the list is sorted. The algorithm gets its name
 * because smaller elements "bubble" to the top of the list.
 * 
 * Time Complexity: O(n^2) in the worst and average case, where n is the number of elements.
 * Space Complexity: O(1) as it is an in-place sorting algorithm.
 */


#include <stdio.h>


void bubble_sort(int* array, int length)
{
    int unsorted_index = length - 1;
    for (int i = 0; i < unsorted_index; unsorted_index--)
    {
        for (int j = 0; j < unsorted_index; j++)
        {
            if (array[j] > array[j + 1])
            {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}


int main(void)
{
    int array[] = {20, 35, -15, 7, 55, 1, -22, 15, 18, 30};
    int length = sizeof(array) / sizeof(array[0]);

    printf("Unsorted array\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    bubble_sort(array, length);

    printf("Sorted array\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}