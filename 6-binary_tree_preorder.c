#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree preorderly
 * @tree: root node of the tree to traverse
 * @func: the function to apply to each node we traverse
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
