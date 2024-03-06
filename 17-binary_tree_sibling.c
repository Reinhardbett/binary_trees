#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a node
 * @node: node to find its sibling
 *
 * Return: pointer to the sibling node, NULL if
 * node or parent is NULL, and NULL if node
 * has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right && node->parent->right != node)
		return (node->parent->right);
	if (node->parent->left && node->parent->left != node)
		return (node->parent->left);
	return (NULL);
}
