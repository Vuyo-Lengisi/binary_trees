#include "binary_trees.h"

/**
 
 * @parent: pointer to the node insert the left-child in.
 * @value: value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Else - pointer to the new node.
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
