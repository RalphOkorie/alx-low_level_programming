#include "search_algos.h"
/**
	* linear_search - This uses the linear search algo,
	*                to search for a value sequentially
	* @array: This is a pointer to an array
	* @size: Length of numbers in the array
	* @value: This is the value to be searched for
	* Return: Returns index of value (1st occurence) or -1, if not found
	*/
int linear_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		int temp, n = size;

		for (temp = 0; temp < n; temp++)
		{
			printf("Value checked array[%d] = [%d]\n", temp, array[temp]);
			if (array[temp] == value)
				return (temp);
		}
	}
return (-1);
}
