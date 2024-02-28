#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a tree
 * @tree: root node of tree to measure
 *
 * Return: 0 if tree is NULL otherwise int height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/*Check if tree is NULL*/
	if (tree == NULL)
		return (-1);
	int leftdepth = binary_tree_height(tree->left);
	int rightdepth = binary_tree_height(tree->right);
	/*Pick highest return value*/
	if (leftdepth > rightdepth)
		/*Increment return value with every iteration*/
		return (1 + leftdepth);
	return (1 + rightdepth);
}
