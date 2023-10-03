#include "binary_trees.h"

/**
  * binary_trees_ancestor - Should find the lowest common ancestors.
  * @first: First node pointer
  * @second: Second node pointer
  * Return: A pointer of the lowest common ancestor
  * if no ancestor, then NULL.
  */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)
{
	size_t base_first, base_second;

	if (!first || !second)
		return (NULL);

	base_first = binary_tree_base(first);
	base_second = binary_tree_base(second);

	while (base_first > base_second)
	{
		first = first->parent;
		base_first--;
	}
	while (base_second > base_first)
	{
		second = second->parent;
		base_second--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
  * binary_tree_base - measures the base of a node
  * @tree: Node to calculate the depth of node
  * Return: base of the node, 0 if NULL
  */
size_t binary_tree_base(const binary_tree_t *tree)
{
	size_t base = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		base++;
		tree = tree->parent;
	}

	return (base);
}


