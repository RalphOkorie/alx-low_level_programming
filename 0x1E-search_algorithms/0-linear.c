#include "search_algos.h"
/**
	* linear_search - This uses the linear search algo,
	*                to search for a value sequentially
	* @array: This is a pointer to an array
	* @size: Length of numbers in the array
	* @value: This is the value to be searched for
	* Return: Returns index of value (1st occurence) or -1, if not found
	*/
int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {  // Check for NULL array
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}
