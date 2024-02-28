#include "binary_trees.h"
/**
* array_to_avl - builds an AVL tree from an array
* @array: pointer to the first element of the array to be converted
* @size: number of elements in the array
* Return: pointer to the root node of the created AVL tree, or NULL on failure
*/
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t i;

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		if (avl_insert(&tree, array[i]) == NULL)
		{
			free(tree);
			return (NULL);
		}
	}
	return (tree);
}
