#include "binary_trees.h"
#include <stddef.h>

/**
  * binary_tree_leaves - A function that counts the leaves on a tree
  * @tree: A pointer to the root node
  * Return: No leaf, return NULL
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
