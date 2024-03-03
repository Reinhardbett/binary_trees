#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a tree
 * @tree: root node of tree to measure
 *
 * Return: 0 if tree is NULL otherwise int height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;
	/*Check if tree is NULL*/
	if (tree == NULL)
		return (0);
	if (tree)
	{
		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	}
	/*Pick highest return value*/
	return ((l > r) ? l : r);
}
