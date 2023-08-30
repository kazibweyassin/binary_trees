#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checsk if a node is a leaf
 * @node: Pointer to the node to check.
 * Return: 1 if node, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left || node->right)
		return (0);
	return (1);
}
