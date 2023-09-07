#include "binary_trees.h"
/**
 * binary_tree_rotate_right - a function that performs a right-rotation
 * on a binary tree
 * @tree: a pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root, *temp;

	if (!tree || !tree->left)
		return (tree);
	new_root = tree->left;
	temp = new_root->right;
	new_root->right = tree;
	tree->left = temp;
	if (tree->parent)
	{
		if (tree->parent->right == tree)
			tree->parent->right = new_root;
		else
			tree->parent->left = new_root;
	}
	new_root->parent = tree->parent;
	tree->parent = new_root;
	if (!new_root->parent)
		return (new_root);
	return (tree);
}
