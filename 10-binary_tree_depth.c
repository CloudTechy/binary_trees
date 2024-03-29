#include "binary_trees.h"

/**
 * binary_tree_depth - gets the depth of a binary tree
 * @tree: binary tree
 * Return: size_t int
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t p = 0;

		p = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
		return (p);
	}
	return (0);
}
