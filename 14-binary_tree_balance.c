#include "binary_trees.h"

/**
  * binary_tree_balance - It measures the balance of a binary tree.
  * @tree: A pointer to the root node of the tree to measure.
  * Return: 0 if tree is NULL
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
