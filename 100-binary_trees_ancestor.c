#include "binary_trees.h"

/**
  * binary_trees_ancestor - Should find the lowest common ancestors.
  * @first: First node pointer
  * @second: Second node pointer
  * Return: A pointer of the lowest common ancestor
  * if no ancestor, then NULL.
  */
binary_tree_t *binary_trees_ancestor(const binary_tree_t
		*first, const binary_tree_t *second)
{
	binary_tree_t *mummy, *daddy;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mummy = first->parent, daddy = second->parent;
	if (first == daddy || !mummy || (!mummy->parent && daddy))
		return (binary_trees_ancestor(first, daddy));
	else if (mummy == second || !daddy || (!daddy->parent && mummy))
		return (binary_trees_ancestor(mummy, second));
	return (binary_trees_ancestor(mummy, daddy));
}
