#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root of the current node.
 * Return: The difference between branches.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lefty, righty;

	if (tree == NULL)
		return (0);
	lefty = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	righty = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (lefty - righty);
}

/**
 * binary_tree_height - function that calculates the height
 * @tree: input tree
 * Return: return value
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rty, lty;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	lty = binary_tree_height(tree->left) + 1;
	rty = binary_tree_height(tree->right) + 1;

	if (rty > lty)
		return (rty);
	return (lty);
}
