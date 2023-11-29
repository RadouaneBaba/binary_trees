#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse tree left->right->root
 * @tree: pointer to root node
 * @func: func to call on each node
 */


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	func(tree->n);
}
