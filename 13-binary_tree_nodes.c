#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to root node
 * Return: number of these nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	return (0);
}
