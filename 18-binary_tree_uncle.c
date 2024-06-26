#include "binary_trees.h"

/**
 *
 * @node: pointer to the node to find the uncle of.
 *
 * Return: If node is NULL or has no uncle, NULL.
 *         Else, pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}