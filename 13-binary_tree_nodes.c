#include "binary_trees.h"

/**
  * binary_tree_nodes - At least 1 child to be counted in a node.
  * @tree: A pointer to the root node of a tree
  * Return: Tree is NULL then return 0
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
