#include "binary_trees.h"
/**
 * binary_tree_size - Calculates the size of a binary tree.
 * @tree: Pointer to the root of the tree.
 * Return: Size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);
	count = 1;
	if (tree->left || tree->right)
	{
		count += binary_tree_size(tree->left);
		count += binary_tree_size(tree->right);
	}
	return (count);
}
