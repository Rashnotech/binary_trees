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
