#include "binary_trees.h"

/**
  * binary_tree_is_leaf - Verifies if a tree is a leaf or not
  * @node: A pointer for the node to check
  * Return: should return 1 if node is a leaf, otherwise 0
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
