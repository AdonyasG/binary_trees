#include "binary_trees.h"
/**
 * max- helper func
 * @a: variable to compute
 * @b: variable to compute
 * Return: computed val
 */
size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}
/**
 * binary_tree_heightt- function to calculate a binary tree depth
 * @tree: pointer to the root node
 * Return: NULL if an a error occurs
 */
size_t binary_tree_heightt(const binary_tree_t *tree)
{
	size_t a = 0;
	size_t b = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		a++;
	if (tree->right != NULL)
		b++;
	a = 1 + binary_tree_heightt(tree->left);
	b = 1 + binary_tree_heightt(tree->right);
	return (max(a, b));
}
