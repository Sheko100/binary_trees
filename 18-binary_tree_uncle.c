#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to a node to find its uncle
 *
 * Return: a pointer to the uncle node
 * NULL if parent or node or the sibling is NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL, *parent = NULL;
	binary_tree_t *grandparent = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->parent == NULL)
		return (NULL);

	grandparent = parent->parent;

	uncle = grandparent->right != parent ? grandparent->right : grandparent->left;

	return (uncle);
}
