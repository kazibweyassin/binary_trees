#include "binary_trees.h"

size_t s_helper(const binary_tree_t *tree);

/**
 * binary_tree_size - finds  the size of a tree
 * @tree: the tree
 * Return: the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (s_helper(tree));
}

/**
 * s_helper - recursive helper with accumulator
 * @tree: the tree
 * Return: the size of a tree
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
