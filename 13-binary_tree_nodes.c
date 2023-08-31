#include "binary_trees.h"

size_t child_helper(const binary_tree_t *tree);

/**
 * binary_tree_nodes - find thie nodes of a tree with at least one child
 * @tree: the tree
 * Return: the node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (child_helper(tree));
}

/**
 * child_helper - recursive helper with accumulator
 * @tree: the tree
 * Return: the nodes of a tree with at least one child
 */
size_t child_helper(const binary_tree_t *tree)
{
	size_t tmp, a, b;

	if (tree == NULL)
		return (0);
	tmp = 0;
	if (tree->left || tree->right)
		tmp = 1;
	a = child_helper(tree->left);
	b = child_helper(tree->right);
	return (a + b + tmp);
}
