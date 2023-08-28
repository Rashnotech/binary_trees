#include "binary_trees.h"
/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: an integer to put in the new node
 *
 * Return: a pointer to the new node on success otherwise NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	if (parent)
	{
		if (value <= parent->n)
			parent->left = node;
		else
			parent->right = node;
	}
	return (node);
}
