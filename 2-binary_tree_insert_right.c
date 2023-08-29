#include "binary_trees.h"
/**
 * binary_tree_insert_right - a function that inserts a node as the right
 * child of another node
 * @parent: a pointer to the node to insert the right child
 * @value: an integer value to store in the new node
 *
 * Return: a new node pointer on success otherwise NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return(NULL);
	new_node->n = value;
	new_node->left = new_node->right = NULL;
	if (parent->n > value)
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		parent->right = new_node;
	}
	return (parent);
}

