#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent node
 * @value: the node value
 *
 * Return: pointer to the new node on success
 * NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent != NULL && (parent->right == NULL || parent->left == NULL))
		new_node->parent = parent;

	return (new_node);
}
