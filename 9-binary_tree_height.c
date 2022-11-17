#include "binary_trees.h"
#include "helper.c"
/**
 * binary_tree_height- function to calculate a binary tree depth
 * @tree: pointer to the root node
 * Return: NULL if an a error occurs
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a = 0;
	size_t b = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	a = 1 + binary_tree_height(tree->left);
	b = 1 + binary_tree_height(tree->right);
	return (max(a, b));
}
