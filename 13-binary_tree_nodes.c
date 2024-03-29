#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes of a binary tree
 * @tree: binary tree
 * Return: size_t int
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree)
	{
		s += (tree->left == NULL && tree->right == NULL) ? 0 : 1;
		s += binary_tree_nodes(tree->left);
		s += binary_tree_nodes(tree->right);
	}
	return (s);
}

