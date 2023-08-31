#include "binary_trees.h"

/**
 * binary_tree_sibling - Returns the sibling of a node.
 * @node: The node we are looking to find the sibling.
 * Return: Pointer to the sibiling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || !node->parent)
		return (NULL);
	if (node->parent && node->parent->left != node)
		return (node->parent->left);
	return (node->parent->right);
}
