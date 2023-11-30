#include "binary_trees.h"

/**
 * binary_tree_height - measure height of tree
 * @tree: pointer to root node of tree
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_tree_height, right_tree_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_tree_height = binary_tree_height(tree->left);
	right_tree_height = binary_tree_height(tree->right);
	if (left_tree_height > right_tree_height)
		return (left_tree_height + 1);
	return (right_tree_height + 1);
}
