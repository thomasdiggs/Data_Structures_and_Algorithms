/* 
 * Binary Search Algorithm
 * 
 * Binary Search is an efficient algorithm for finding an item from a sorted list of items.
 * It works by repeatedly dividing in half the portion of the list that could contain the item,
 * until you've narrowed down the possible locations to just one.
 * 
 * Characteristics:
 * - It is a divide-and-conquer algorithm that requires the list to be sorted before the search begins.
 * - Time Complexity: O(log_2 n) in the worst and average case, where n is the number of elements.
 * - Space Complexity: O(1) for the iterative version and O(log n) for the recursive version due to call stack.
 */


#include <stdio.h>


int binary_search(int* array, int length, int value)
{
    int left = 0;
    int middle;
    int right = length - 1;

    while (left <= right)
    {
        middle = left + (right - left) / 2;
        if (value == array[middle])
            return middle;
        else if (value < array[middle])
            right = middle - 1;
        else
            left = middle + 1;
    }
    
    return -1;
}


int main(void)
{
    int array[] = {1, 3, 5, 7, 9, 12, 14, 15, 17, 20};

    /* int* pointerToArray is a pointer to the location in memory of the first element of the array */
    int* pointer_to_array = array;
    printf("Pointer to array: %p\n", pointer_to_array);

    /* %zu is the format specifier for size_t
     * size_t is an unsigned integer type that is the result of the sizeof keyword
     * sizeof() returns the size of the array in bytes
     * sizeof(array) returns the size of the array in bytes
     * sizeof(array[0]) returns the size of the first element of the array in bytes
     * sizeof(array) / sizeof(array[0]) returns the length of the array
     */
    printf("Size of array: %zu\n", sizeof(array));
    printf("Size of array[0]: %zu\n", sizeof(array[0]));
    int length = sizeof(array) / sizeof(array[0]);
    printf("Length of array: %d\n", length);


    int search_value = 17;
    int index_of_value = binary_search(array, length, search_value);
    if (index_of_value == -1)
        printf("Value not found\n");
    else
        printf("Index of %d is %d\n", search_value, index_of_value);

    search_value = 3;
    index_of_value = binary_search(array, length, search_value);
    if (index_of_value == -1)
        printf("Value not found\n");
    else
        printf("Index of %d is %d\n", search_value, index_of_value);
    
    search_value = 2;
    index_of_value = binary_search(array, length, search_value);
    if (index_of_value == -1)
        printf("Value not found\n");
    else
        printf("Index of %d is %d\n", search_value, index_of_value);

    return 0;
}