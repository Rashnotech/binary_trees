#include "binary_trees.h"
/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: an integer value otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_r, h_l;

	if (!tree)
		return (0);
	h_r = binary_tree_height(tree->right);
	h_l = binary_tree_height(tree->left);
	if (h_l == h_r)
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	return (0);
}
