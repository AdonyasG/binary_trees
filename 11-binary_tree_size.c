#include "binary_trees.h"
/**
 * binary_tree_size- function to check a binary tree size
 * @tree: pointer to the root node
 * Return: NULL if an a error occurs
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t num = 1;

	if (tree == NULL)
		return (0);
	num += binary_tree_size(tree->left);
	num += binary_tree_size(tree->right);
	return (num);
}
