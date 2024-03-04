#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least one child
 * @tree: pointer to root node of tree
 *
 * Return: 0 if tree is NULL, otherwise total
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree == NULL)
		return (0);
	/*Check if one child exists*/
	if (tree->left || tree->right)
		total += 1;
	total += binary_tree_nodes(tree->left);
	total += binary_tree_nodes(tree->right);
	return (total);
}
