#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * Return: The number of nodes in the tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
