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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node
 *
 * Return: the balance factor
 * 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftheight = 0, rightheight = 0;
	int fac = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		leftheight = get_tree_height(tree->left);
		leftheight++;
	}
	if (tree->right != NULL)
	{
		rightheight = get_tree_height(tree->right);
		rightheight++;
	}

	fac = leftheight - rightheight;

	return (fac);
}
