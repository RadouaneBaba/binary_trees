#include "binary_trees.h"

/**
 * binary_tree_size - measure size of tree
 * @tree: pointer to root of tree
 * Return: size of binary
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
