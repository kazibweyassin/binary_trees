#include "binary_trees.h"

int get_h(const binary_tree_t *tree, int acc);
/**
 * binary_tree_balance - measure the balance for a binary tree
 * @tree: the binary tree
 * Return: the balance factor, 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int  left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = get_h(tree->left, 0);
	right_height = get_h(tree->right, 0);

	return (left_height - right_height);
}

/**
 * get_h - gets the height of a tree
 * @tree: the pointer to the  tree
 * @acc: an accumulator
 * Return: the height of a tree
 */
int get_h(const binary_tree_t *tree, int acc)
{
	int tmp, a, b;

	if (tree == NULL)
		return (acc);
	tmp = acc + 1;
	a = get_h(tree->left, tmp);
	b = get_h(tree->right, tmp);

	if (b > a)
		return (b);
	return (a);
}
