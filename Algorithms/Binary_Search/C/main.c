#include <stdio.h>

int BinarySearch(int* array, int length, int value)
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
    int* pointerToArray = array;
    printf("Pointer to array: %p\n", pointerToArray);

    /* %zu is the format specifier for size_t
    *  size_t is an unsigned integer type that is the result of the sizeof keyword
    *  sizeof() returns the size of the array in bytes
    *  sizeof(array) returns the size of the array in bytes
    *  sizeof(array[0]) returns the size of the first element of the array in bytes
    *  sizeof(array) / sizeof(array[0]) returns the length of the array
    */
    printf("Size of array: %zu\n", sizeof(array));
    printf("Size of array[0]: %zu\n", sizeof(array[0]));
    int length = sizeof(array) / sizeof(array[0]);
    printf("Length of array: %d\n", length);


    int searchValue = 17;
    int indexOfValue = BinarySearch(array, length, searchValue);
    if (indexOfValue == -1)
        printf("Value not found\n");
    else
        printf("Index of %d is %d\n", searchValue, indexOfValue);

    searchValue = 3;
    indexOfValue = BinarySearch(array, length, searchValue);
    if (indexOfValue == -1)
        printf("Value not found\n");
    else
        printf("Index of %d is %d\n", searchValue, indexOfValue);
    
    searchValue = 2;
    indexOfValue = BinarySearch(array, length, searchValue);
    if (indexOfValue == -1)
        printf("Value not found\n");
    else
        printf("Index of %d is %d\n", searchValue, indexOfValue);

    return 0;
}