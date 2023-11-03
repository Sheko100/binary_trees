#include "binary_trees.h"
#include <stdio.h>

/**
 * get_tree_height - gets the binary tree height
 * @tree: a pointer to the binary tree root node
 *
 * Return: the binary tree height
 */

int get_tree_height(binary_tree_t *tree)
{
	int leftheight = 0, rightheight = 0, height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		leftheight++;
		rightheight++;
	}

	leftheight += get_tree_height(tree->left);
	rightheight += get_tree_height(tree->right);

	height = leftheight > rightheight ? leftheight : rightheight;
	return (height);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node
 *
 * Return: 1 if the binary tree is perfect
 * 0 otherwise or if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int isperfect = 0;
	int leftheight = 0, rightheight = 0;

	if (tree == NULL)
		return (isperfect);

	leftheight = get_tree_height(tree->left);
	rightheight = get_tree_height(tree->right);

	if (leftheight == 1 && leftheight == rightheight)
		return (1);

	return (isperfect);
}
