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
	int _height_r, _height_l;

	if (!tree)
		return (0);
	_height_r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	_height_l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	return (_height_r - _height_l);
}
