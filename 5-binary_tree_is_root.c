#include "binary_trees.h"

/**
 * 
 * @node: Pointer to the node to check.
 *
 * Return: If the node is a root - 1.
 *         Else - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}