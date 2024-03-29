#include "binary_trees.h"

/**
 * binary_tree_delete - delete entire binary tree
 * @tree: root node of the tree
 *
 * Return: nothing even if tree is NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		/*Use postorder traversal*/
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
