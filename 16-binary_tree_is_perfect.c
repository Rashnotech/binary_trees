#include "binary_trees.h"
/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: an integer value otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);
	if (size & (size + 1))
		return (0);
	return (1);
}


/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The size of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
