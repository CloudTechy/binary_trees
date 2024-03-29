#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: node to check
 * Return: integer 1 if true or 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
