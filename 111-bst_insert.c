#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree.
 * @tree: A double pointer to the root node of the BST to insert the value.
 * @value: The value to store in the node.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *curr_node, *new_node;

	if (tree != NULL)
	{
		curr_node = *tree;

		if (curr_node == NULL)
		{
			new_node = binary_tree_node(curr_node, value);
			if (new_node == NULL)
				return (NULL);
			return (*tree = new_node);
		}

		if (value < curr_node->n) /* insert in left subtree */
		{
			if (curr_node->left != NULL)
				return (bst_insert(&curr_node->left, value));

			new_node = binary_tree_node(curr_node, value);
			if (new_node == NULL)
				return (NULL);
			return (curr_node->left = new_node);
		}
		if (value > curr_node->n) /* insert in right subtree */
		{
			if (curr_node->right != NULL)
				return (bst_insert(&curr_node->right, value));

			new_node = binary_tree_node(curr_node, value);
			if (new_node == NULL)
				return (NULL);
			return (curr_node->right = new_node);
		}
	}
	return (NULL);
}
