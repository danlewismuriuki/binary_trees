#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 *@tree: pointer to the root node of the tree to measure the size.
 * Return: if tree is NULL, must return 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s_left, s_right;

	if (tree == NULL)
	{
		return (0);
	}

	s_left = binary_tree_size(tree->left);
	s_right = binary_tree_size(tree->right);
	return (1 + s_left + s_right);

}
