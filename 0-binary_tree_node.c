#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 * @parent:parent node
 * @value: value of the node
 * Return: new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	new_tree = malloc(sizeof(binary_tree_t));
	if (new_tree == NULL)
		return (NULL);
	new_tree->n = value;
	new_tree->parent = parent;
	new_tree->left = NULL;
	new_tree->right = NULL;
	if (parent == NULL)
	{
		return (new_tree);
	}
	if (parent->left == NULL)
	{
		parent->left = new_tree;
		return (new_tree);
	}
	if (parent->right == NULL)
	{
		parent->right = new_tree;
		return (new_tree);
	}
	free(new_tree);
	return (NULL);
}
