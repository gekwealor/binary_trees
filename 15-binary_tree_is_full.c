#include "binary_trees.h"

/**
  * binary_tree_is_full - It checks for full binary tree
  * @tree: A pointer to the root node
  * Return: O if tree is NULL
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
