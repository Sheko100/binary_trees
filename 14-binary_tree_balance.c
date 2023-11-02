#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node
 *
 * Return: the balance factor
 * 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftheight = 0;
	int rightheight = 0;
	int fac = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		leftheight++;

	if (tree->right != NULL)
		rightheight++;

	fac = leftheight - rightheight;

	fac += binary_tree_balance(tree->left);
	fac -= binary_tree_balance(tree->right);

	return (fac);
}
