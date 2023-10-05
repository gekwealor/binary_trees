#include "binary_trees.h"

/**
  * binary_trees_ancestor - Missing lowest common ancestor.
  * @first: the first node pointer
  * @second: the second node pointer
  * Return: A pointer to the lowest common ancestor
  * if no one was found, then NULL.
  */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)

{
	size_t depth_first, depth_second;

	if (!first || !second)
		return (NULL);

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}
	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}
	return ((binary_tree_t *)first);
}

/**
  * binary_tree_depth - Measures the depth of a node
  * @tree: node to calculate the depth
  * Return: depth of the node, 0 if NULL
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
