#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a tree inorderly
 * @tree: root node of tree to traverse
 * @func: function to apply to each node
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
