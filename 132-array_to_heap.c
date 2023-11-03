#include "binary_trees.h"

/**
 * array_to_heap - builds a max inary heap tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: element in an array
 * Return: pointer to the root node of the created binary heap else NULL
 */
heap_t *array_to_heap(int *array, size_t size)
{
unsigned int i;
heap_t *root = NULL;
for (i = 0; i < size; i++)
	heap_insert(&root, array[i]);
return (root);
}
