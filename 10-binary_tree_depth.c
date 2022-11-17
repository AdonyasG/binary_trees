#include "binary_trees.h"
/**
 * binary_tree_depth- function to check a binary tree height
 * @tree: pointer to the tree node
 * Return: NULL if an a error occurs
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
	{
		return (1 + (binary_tree_depth(tree->parent)));
	}
	return (0);
}
