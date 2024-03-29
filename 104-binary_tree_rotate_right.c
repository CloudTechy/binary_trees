#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Right-rotates a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *anchor, *aux;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	anchor = tree->left;
	aux = anchor->right;
	anchor->right = tree;
	tree->left = aux;
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
