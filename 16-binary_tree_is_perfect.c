#include "binary_trees.h"

int is_full_tree(const binary_tree_t *tree);
int calculate_max_depth(const binary_tree_t *tree, int depth_so_far);
int check_leaf_levels(const binary_tree_t *tree, int max_depth, int current_depth);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 otherwise, 0 if NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_full, max_depth, same_levels;

	if (tree == NULL)
		return (0);

	is_full = is_full_tree(tree);
	max_depth = calculate_max_depth(tree, 0);
	same_levels = check_leaf_levels(tree, max_depth, 0);
	return (is_full && same_levels);
}

/**
 * is_full_tree - return 1 if the tree is full
 * @tree: the tree
 * Return: 1 if full, 0 otherwise, 0 if NULL
 */
int is_full_tree(const binary_tree_t *tree)
{
	binary_tree_t *left_child;
	binary_tree_t *right_child;

	if (tree == NULL)
		return (0);

	left_child = tree->left;
	right_child = tree->right;
	if ((left_child && !right_child) || (right_child && !left_child))
		return (0);

	if (left_child && right_child)
		return (is_full_tree(left_child) && is_full_tree(right_child));

	return (1);
}

/**
 * calculate_max_depth - calculates the max depth of the tree
 * @tree: the node to get the depth from
 * @depth_so_far: the depth calculated so far
 * Return: the max depth
 */
int calculate_max_depth(const binary_tree_t *tree, int depth_so_far)
{
	int left_depth, right_depth;

	if (tree == NULL)
		return (depth_so_far);

	left_depth = calculate_max_depth(tree->left, depth_so_far + 1);
	right_depth = calculate_max_depth(tree->right, depth_so_far + 1);

	if (right_depth > left_depth)
		return (right_depth);

	return (left_depth);
}

/**
 * check_leaf_levels - checks if all leaves are at the same level
 * @tree: the tree
 * @max_depth: the max depth in the tree
 * @current_depth: the current depth during traversal
 * Return: 1 if all leaves are at the same level, 0 otherwise
 */
int check_leaf_levels(const binary_tree_t *tree, int max_depth, int current_depth)
{
	int left_check, right_check;

	if (tree == NULL)
	{
		if (current_depth == max_depth)
			return (1);
		return (0);
	}

	left_check = check_leaf_levels(tree->left, max_depth, current_depth + 1);
	right_check = check_leaf_levels(tree->right, max_depth, current_depth + 1);

	return (left_check && right_check);
}
