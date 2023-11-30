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

/**
 * check_complete - check if binary tree is complete
 * @tree: poniter to root
 * @index: index of curr node
 * @size: size of root
 * Return: true 1 or false 0
 */
int check_complete(const binary_tree_t *tree, size_t index, size_t size)
{
	if (tree == NULL)
		return (1);
	if (index >= size)
		return (0);
	return (check_complete(tree->left, 2 * index + 1, size) &&
			check_complete(tree->right, 2 * index + 2, size));
}
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root
 * Return: 0 on false 1 on true
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (check_complete(tree, 0, binary_tree_size(tree)));
}
