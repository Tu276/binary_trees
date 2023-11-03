#include "binary_trees.h"


/**
 * binary_tree_is_root -  check if it's a  root node
 * @node: node to check
 * Return: 1 if leaf, else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);

}
