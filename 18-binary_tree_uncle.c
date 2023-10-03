#include "binary_trees.h"

/**
  * binary_tree_uncle - Finding uncle in a node
  * @node: Node to find missing uncle
  * Return: A pointer of the missing node.
  * NULL if node is NULL and has no uncle.
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
