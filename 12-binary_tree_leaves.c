#include "binary_trees.h"
/**
 * binary_tree_leaves - a function that counts the leaves in a tree
 * @tree: a pointer to the root node of the tree
 * Description: to count the number of leave in a tree
 *
 * Return: an integer value of the count otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		count++;
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}
