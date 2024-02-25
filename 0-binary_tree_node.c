#include "binary_trees.h"

/**
 *binary_tree_node - create a binary tree node
 *
 *@parent: the parent of the new node we will create
 *@value: the value our new node will store
 *
 *Return: the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*Create a new node or NULL on failure*/
	binary_tree_t *newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);
	/*Assign parent*/
	newNode->parent = parent;
	/*Make sure it has no children when created*/
	newNode->left = NULL;
	newNode->right = NULL;
	/*Assign value*/
	newNode->n = value;
	/*Return new node*/
	return (newNode);
}
