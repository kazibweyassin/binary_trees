#include "binary_trees.h"

/**
 * binary_tree_sibling - returns a sibling to a node
 * @node: the node we are trying to analayse 
 * Return: a sibling or NULL if not possible
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
