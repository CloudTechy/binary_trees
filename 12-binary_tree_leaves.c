#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a binary tree
 * @tree: binary tree
 * Return: size_t int
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree)
	{
		s += (tree->left == NULL && tree->right == NULL) ? 1 : 0;
		s += binary_tree_leaves(tree->left);
		s += binary_tree_leaves(tree->right);
	}
	return (s);
}

