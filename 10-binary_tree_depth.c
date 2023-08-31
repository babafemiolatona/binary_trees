#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_depth - checks for the depth of a ndoe
 * @tree: input tree
 * Return: depth
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int number;

	if (tree == NULL)
		return (0);
	for (number = 0; tree && tree->parent; number++)
		tree = tree->parent;
	return (number);
}
