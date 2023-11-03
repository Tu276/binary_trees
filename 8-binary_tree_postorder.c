#include "binary_trees.h"


/**
 * binary_tree_inorder - uses post-order traversal to parse a binary tree
 * @tree: pointer to the root node
 * @func: a pointer to a function for calling nodes.
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
