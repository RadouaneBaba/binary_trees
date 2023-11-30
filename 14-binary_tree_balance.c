#include "binary_trees.h"

/**
 * tree_height - measure height of tree
 * @tree: pointer to root node of tree
 * Return: height of tree
 */

int tree_height(const binary_tree_t *tree)
{
	int left_tree_height, right_tree_height;

	if (tree == NULL)
		return (0);
	left_tree_height = tree_height(tree->left);
	right_tree_height = tree_height(tree->right);
	if (left_tree_height > right_tree_height)
		return (left_tree_height + 1);
	return (right_tree_height + 1);
}

/**
 * binary_tree_balance - measure balance factore of balance tree
 * @tree: pionter to root of tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	return (tree_height(tree->left) - tree_height(tree->right));
}
