#include "binary_trees.h"

/**
  * binary_tree_sibling - Sibling of a node to be found
  * @node: Finding sibling
  * Return: pointer to the sibling node. If node or parent is NULL return NULL.
  * NULL if the node has no siblings.
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
