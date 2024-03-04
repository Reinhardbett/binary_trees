#include "binary_trees.h"

/**
 * binary_tree_balance - measure the tree's balance factor
 * @tree: root node of the tree
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	}
	return (l - r);
}
