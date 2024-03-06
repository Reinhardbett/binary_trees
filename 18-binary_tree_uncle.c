#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: node to find its uncle
 *
 * Return: pointer to the uncle node, NULL if
 * node or parent is NULL, and NULL if node
 * has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || parent->parent == NULL)
		return (NULL);
	/*Find the sibling of the node's parent*/
	if (parent->parent->right && parent->parent->right != parent)
		return (parent->parent->right);
	if (parent->parent->left && parent->parent->left != parent)
		return (parent->parent->left);
	return (NULL);
}
