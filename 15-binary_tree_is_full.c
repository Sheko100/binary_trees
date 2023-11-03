#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node
 *
 * Return: 1 if the binary tree is full
 * 0 otherwise or if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int isfull = 0;

	if (tree == NULL)
		return (isfull);

	if (tree->left == NULL && tree->right == NULL)
		isfull = 1;

	if (tree->left != NULL && tree->right != NULL)
		isfull = (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	return (isfull);
}
