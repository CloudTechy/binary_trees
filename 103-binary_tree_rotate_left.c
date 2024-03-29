#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Left-rotates a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *anchor, *aux;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	anchor = tree->right;
	aux = anchor->left;
	anchor->left = tree;
	tree->right = aux;
	if (aux != NULL)
		aux->parent = tree;
	aux = tree->parent;
	tree->parent = anchor;
	anchor->parent = aux;
	if (aux != NULL)
	{
		if (aux->left == tree)
			aux->left = anchor;
		else
			aux->right = anchor;
	}

	return (anchor);
}
