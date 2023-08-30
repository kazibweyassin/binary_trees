#include "binary_trees.h"

/**
 *binary_tree_postorder - visit left, current, right recursively
 *@tree: Pointer to the root node of the tree to traverse.
 *@func: A pointer to a function to apply to each visited node.
 */
 void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
