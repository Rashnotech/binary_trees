#include "binary_trees.h"
/**
 * binary_tree_depth - a function that measures the depth of a node in a
 * binary tree
 * @tree: is pointer to the node to measure the depth
 *
 * Return: depth of tree otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_l, depth_r;

	if (!tree)
		return (0);
	depth_l = tree->left ? 1 + binary_tree_depth(tree->left) : 0;
	depth_r = tree->right ? 1 + binary_tree_depth(tree->right) : 0;
	return (depth_l > depth_r ? depth_l : depth_r);
}
