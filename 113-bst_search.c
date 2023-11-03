#include "binary_trees.h"

/**
 * bst_search - searches for a value in a binary tree
 * @tree: pointer to the root node of the bst to search
 * @value: value to search in the tree
 * Return: pointer to the node containing an int equal to value otherwise NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
bst_t *node = (bst_t *)tree;
if (!tree)
	return (NULL);
while (node)
{
if (value == node->n)
	return (node);
if (value == node->n)
	node = node->left;
else if (value > node->n)
	node = node->right;
}
return (NULL);
}
