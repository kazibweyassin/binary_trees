#include "binary_trees.h"

size_t h_helper(const binary_tree_t *tree, size_t acc);

/**
 * binary_tree_height - find the height of a node
 * @tree: the tree
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (h_helper(tree, 0) - 1);
}

/**
 * get_max - get the max of two vals
 * @a: a
 * @b: b
 * Return: the max
 */
size_t get_max(size_t a, size_t b)
{
	if (b > a)
		return (b);
	return (a);
}

/**
 * h_helper - recursive helper with accumulator
 * @tree: the tree
 * @acc: the accumulator
 * Return: the maximum height of a tree
 */
size_t h_helper(const binary_tree_t *tree, size_t acc)
{
	size_t tmp, a, b;

	if (tree == NULL)
		return (acc);
	tmp = acc + 1;
	a = h_helper(tree->left, tmp);
	b = h_helper(tree->right, tmp);
	return (get_max(a, b));
}
