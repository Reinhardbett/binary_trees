#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves in a tree
 * @tree: pointer to root node of tree
 *
 * Return: 0 if tree is NULL, otherwise count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	/*Check if root is leaf*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (count);
}
