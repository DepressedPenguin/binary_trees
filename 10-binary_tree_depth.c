#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node whose depth is to be measured.
 *
 * This function calculates the depth of a given node in a binary tree. The depth
 * is defined as the number of edges on the path from the given node to the root
 * of the tree. The root node has a depth of 0. If the provided node is NULL, the
 * function returns 0. If the provided node is the root itself, its depth will be 0.
 *
 * @return: The depth of the given node. If the node is NULL, the depth is 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    if (tree->parent != NULL)
        return (1 + binary_tree_depth(tree->parent));
    return (0);
}
