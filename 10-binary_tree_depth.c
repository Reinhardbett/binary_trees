#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node
 * @tree: the node whose depth we will measure
 *
 * Return: 0 if tree is NULL otherwise depth value
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	/*Check if tree pointer is NULL*/
	if (tree == NULL)
		return (0);
	if (tree->parent)
		/*Count iterations till root pointer*/
		depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (depth);
}
