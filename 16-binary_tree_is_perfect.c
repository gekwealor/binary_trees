#include "binary_trees.h"

/**
  * binary_tree_is_perfect - Perfect binary inspection
  * @tree: A pointer to the root node of the tree
  * Return: When tree is NULL, return 0
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = int is_power_recursion(2, height + 1);
	return (power - 1 == nodes);

}

/**
  * is_power_recursion - Returns the value of x raised to the power of y
  * @x: Exponentiate the value
  * @y: Power to raise x
  * Return: x to the power of y, or -1 if y is negative
  */

unsigned char is_power_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * is_power_recursion(x, y - 1));
}

/**
  * binary_tree_size - Size of the binary tree to be measured.
  * @tree: Size of tree to be measured
  * Return: 0 if tree is NULL
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
  * binary_tree_height - The height of a binary tree to be measured.
  * @tree: Height of the tree measured
  * Return: 0 if height is NULL
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r = 0;
	size_t height_l = 0;

	if (tree == NULL)
		return (0);

	height_l = tree->right ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->left ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
