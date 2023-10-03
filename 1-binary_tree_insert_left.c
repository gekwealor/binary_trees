#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - A new_node at the left to be inserted
 * Also existing left to the new_node left to be removed.
 * @parent: The root node
 * @value: The data in the new_node
 * Return: new_node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
