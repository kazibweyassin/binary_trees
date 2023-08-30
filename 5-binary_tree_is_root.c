#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root node.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a root, 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0); /* Not a root if the node is NULL */

	if (node->parent == NULL)
		return (1); /* Root node if the parent pointer is NULL */

	return (0); /* Not a root if the parent pointer is not NULL */
}
