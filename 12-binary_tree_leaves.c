#include "binary_trees.h"

size_t s_helper(const binary_tree_t *tree);

/**
 * binary_tree_leaves - Count the number of leaf nodes in a binary tree.
 * @tree: Pointer to the root node of the tree to count leaves.
 * Return: The number of leaf nodes in the binary tree, or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (s_helper(tree));
}

/**
 * s_helper - recursive helper with accumulator
 * @tree: Pointer to the root node of the tree to count leaves.
 * Return: The number of leaf nodes in the binary tree, or 0 if tree is NULL.
 */
size_t s_helper(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);
	a = s_helper(tree->left);
	b = s_helper(tree->right);
	return (a + b + 1);
}
