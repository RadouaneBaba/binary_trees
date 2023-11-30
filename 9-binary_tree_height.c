#include "binary_trees.h"

/**
 * longest_tree_path - calculate longest path to the leaf
 * @tree: node to get path of
 * @length: gets longest path
 * @path: calculate path to each leaf
 */

void longest_tree_path(const binary_tree_t *tree, int *length, int *path)
{
	if (tree == NULL)
		return;
	if (tree->left == NULL && tree->right == NULL)
	{
		if (*path > *length)
		{
			*length = *path;
			*path = 0;
		}
	}
	else
	{
		(*path)++;
		longest_tree_path(tree->left, length, path);
		longest_tree_path(tree->right, length, path);
	}
}
/**
 * binary_tree_height - measure height of tree
 * @tree: pointer to root node of tree
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int path = 0;
	int height = 0;

	if (tree == NULL)
		return (0);

	longest_tree_path(tree, &height, &path);
	return (height--);
}
