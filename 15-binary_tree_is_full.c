#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if tree is full
 * @tree: pointer to the tree
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		if (tree->left->left == NULL && tree->left->right == NULL)
			return (1);
	}
	return (0);
	if (tree->right)
	{
		if (tree->right->left == NULL && tree->right->right == NULL)
			return (1);
	}
	return (0);
}
