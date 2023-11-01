#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to binary tree root node
 *
 * Return: binary tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftheight = 0;
	int rightheight = 0;
	size_t height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		leftheight++;
		rightheight++;
	}

	leftheight += binary_tree_height(tree->left);
	rightheight += binary_tree_height(tree->right);

	height = leftheight > rightheight ? leftheight : rightheight;

	return (height);
}
