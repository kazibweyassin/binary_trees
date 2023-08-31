#include "binary_trees.h"

/**
 * binary_tree_is_full -checks if a binary tree is full (proper)
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if full, 0 otherwise, 0 if NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *left_node;
	binary_tree_t *right_node;

	if (tree == NULL)
		return (0);

	left_node = tree->left;
	right_node = tree->right;
	if ((left_node && !right_node) || (right_node && !left_node))
		return (0);

	if (left_node && right_node)
		return (binary_tree_is_full(left_node) && binary_tree_is_full(right_node));

	return (1);
}
