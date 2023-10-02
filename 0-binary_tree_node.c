#include "binary_trees.h"

/**
  * binary_tree_node - A function that creates a new node in a binary tree.
  * @parent: A pointer to the node 
  * @value: The value to put in the new node 
  * Return: A ponter to the new node, or NULL on failure.
  */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* allocates space for new node */
	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
