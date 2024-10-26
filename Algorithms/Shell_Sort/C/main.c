/*
 * Shell Sort Algorithm
 * 
 * Shell Sort is an in-place comparison-based sorting algorithm.
 * It generalizes insertion sort by allowing the exchange of items that are far apart.
 * The algorithm uses a sequence of gaps to determine which elements to compare and move.
 * The gaps are reduced over time, eventually leading to a final pass with a gap of 1,
 * which is effectively an insertion sort.
 * 
 * Characteristics:
 * - Stability: Not stable
 * - Time Complexity: 
 *   - Best Case: O(n log n)
 *   - Average Case: Depends on the gap sequence, commonly O(n^(3/2)) or O(n^(4/3))
 *   - Worst Case: O(n^2)
 * - Space Complexity: O(1) (in-place)
 */


#include <stdio.h>


void shell_sort(int* array, int length)
{
    for (int gap = length / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < length; i++)
        {
            int element = array[i];
            int j = i;
            while (j >= gap && array[j - gap] > element)
            {
                array[j] = array[j - gap];
                j -= gap;
            }
            array[j] = element;
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

    shell_sort(array, length);

    printf("Sorted:");
    for (int i = 0; i < length; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");

    return 0;
}