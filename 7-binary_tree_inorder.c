#include "binary_trees.h"

/**
  * binary_tree_inorder - A tree with inorder to traverse
  * @tree: A pointer to the root node to the tree to traverse
  * @func: A function of a pointer to call each node.
  */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
