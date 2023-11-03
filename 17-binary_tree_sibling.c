#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to a node to find its sibling
 *
 * Return: a pointer to the sibling node
 * NULL if parent or node or the sibling is NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL, *parent = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	sibling = parent->right != node ? parent->right : parent->left;

	return (sibling);
}
