#include "binary_trees.h"

/*
 * binary_tree_insert_left - insert node as left child
 *
 * @parent: node to insert left child in
 * @value: value the new node will store
 *
 * Return: new node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/*Declare the new node*/
	binary_tree_t *newNode;

	/*Always check if pointer is NULL before using it*/
	/*Check if parent pointer is NULL*/
	if (parent == NULL)
		return (NULL);
	/*Assign new node our parent*/
	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);
	/*Avoid segmentation error*/
	/*Check if parent's left child is not NULL*/
	if (parent->left != NULL)
	{
		/*Assign the left-child the newNode as parent*/
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	/*If NULL assign the node as the left child*/
	parent->left = newNode;
	return (newNode);
}
