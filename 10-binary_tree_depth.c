#include "binary_trees.h"

size_t d_helper(const binary_tree_t *tree, size_t acc);

/**
 * binary_tree_depth - find a node depth
 * @tree: the node
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (d_helper(tree, 0) - 1);
}

/**
 * d_helper - recursive helper with accumulator
 * @tree: the tree
 * @acc: the accumulator
 * Return: the maximum depth of a node
 */
size_t d_helper(const binary_tree_t *tree, size_t acc)
{
	size_t tmp;

	if (tree == NULL)
		return (acc);
	tmp = acc + 1;
	return (d_helper(tree->parent, tmp));
}
