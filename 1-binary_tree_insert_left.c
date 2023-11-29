#include "binary_trees.h"

/**
 * binary_tree_insert_left - inser left child
 * @parent: pointer to the node to insert to
 * @value: value of the child
 * Return: pointer to the node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	if (parent == NULL)
	{
		free(new);
		return (NULL);
	}

	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
		new->parent = parent;
		new->right = NULL;
	}
	else
	{
		new->left = NULL;
		new->right = NULL;
		new->parent = parent;
		parent->left = new;
	}

	return (NULL);
}
