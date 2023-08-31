#include "binary_trees.h"

/**
 * binary_tree_uncle - Returns the uncle of a node.
 * @node: The node we are looking to find the uncle.
 * Return: Pointer to the uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *avail;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	avail = node->parent;

	if (avail->parent && avail->parent->right != avail)
		return (common->parent->right);
	if (avail->parent && avail->parent->left != avail)
		return (avail->parent->left);
	return (NULL);
}
