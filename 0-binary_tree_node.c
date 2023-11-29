#include "binary_trees.h"

/**
 * binary_tree_node - create binary tree node
 * @parent: pointer to parent node
 * @value: value of new node
 * Return: pointer to the new node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;
	new->n = value;

	return (new);
}
