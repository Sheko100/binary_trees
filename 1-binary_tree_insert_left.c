#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: the parent of the created node
 * @value: the node value
 *
 * Return: pointer to the new node on success
 * NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		printf("value: %d\n", new_node->left->n);
	}

	parent->left = new_node;

	return (new_node);
}
