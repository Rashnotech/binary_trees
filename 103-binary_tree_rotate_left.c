#include "binary_trees.h"
/**
 * binary_tree_rotate_left - a function that performs a left-rotation
 * on binary tree
 * @tree: a pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root, *temp;

	if (!tree || !tree->right)
		return (tree);
	new_root = tree->right;
	temp = new_root->left;
	new_root->left = tree;
	tree->right = temp;
	if (tree->parent)
	{
		if (tree->parent->left == tree)
			tree->parent->left = new_root;
		else
			tree->parent->right = new_root;
	}
	new_root->parent = tree->parent;
	tree->parent = new_root;

	if (!new_root->parent)
		return (new_root);
	return (tree);
}
