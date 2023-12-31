#include "binary_trees.h"
#include <stddef.h>

/**
  * binary_tree_depth - A function that measures the depth of a node
  * in a binary tree
  * @tree: A node to measure depth in a pointer
  * Return: 0 if tree is NULL.
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
