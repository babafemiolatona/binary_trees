#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: if tree is NULL, return 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_st_height, right_st_height;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_st_height = binary_tree_height(tree->left);
		right_st_height = binary_tree_height(tree->right);
		return (1 + (left_st_height > right_st_height ?
		left_st_height : right_st_height));
	}
}
