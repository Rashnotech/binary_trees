#include "binary_trees.h"
/**
 * binary_tree_balance - a function that measures the balance factor
 * of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance
 * factor
 *
 * Return: an integer value (balance factor) otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t _height_r, _height_l;

	if (!tree)
		return (0);
	_height_r = binary_tree_height(tree->right);
	_height_l = binary_tree_height(tree->left);
	return (_height_r - _height_l);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_height > right_height ? left_height : right_height);
}
