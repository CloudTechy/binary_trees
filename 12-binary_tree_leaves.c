#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a binary tree
 * @tree: binary tree
 * Return: size_t int
 */
leaves_t binary_tree_leaves(const binary_tree_t *tree)
{
	leaves_t s = 0;

	if (tree)
	{
		s += 1;
		s += binary_tree_leaves(tree->left);
		s += binary_tree_leaves(tree->right);
	}
}

