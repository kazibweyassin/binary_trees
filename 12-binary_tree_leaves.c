#include "binary_trees.h"

size_t leaves_helper(const binary_tree_t *tree);

/**
 * binary_tree_leaves - Count the number of leaf nodes in a binary tree.
 * @tree: Pointer to the root node of the tree to count leaves.
 * Return: The number of leaf nodes in the binary tree, or 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    return (leaves_helper(tree));
}

/**
 * leaves_helper - Recursive helper function to count leaf nodes.
 * @tree: Pointer to the root node of the tree to count leaves.
 * Return: The number of leaf nodes in the binary tree, or 0 if tree is NULL.
 */
size_t leaves_helper(const binary_tree_t *tree)
{
    size_t a, b;

    if (tree == NULL)
        return (0);
    if (tree->left == NULL && tree->right == NULL)
        return (1); // This node is a leaf
    a = leaves_helper(tree->left);
    b = leaves_helper(tree->right);
    return (a + b);
}
