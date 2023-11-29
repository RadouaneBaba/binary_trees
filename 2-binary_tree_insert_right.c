#include "binary_trees.h"

/**
 * binary_tree_insert_right - inser right child
 * @parent: pointer to the node to insert to
 * @value: value of the child
 * Return: pointer to the node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	if (parent == NULL)
	{
		free(new);
		return (NULL);
	}

	new->left = NULL;
	new->parent = parent;
	new->n = value;
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
		parent->right = new;
	}
	else
	{
		new->right = NULL;
		parent->right = new;
	}

	return (new);
}
