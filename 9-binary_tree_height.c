#include "binary_trees.h"
#include "helper.c"
/**
 * binary_tree_height- function to calculate a binary tree depth
 * @tree: pointer to the root node
 * Return: NULL if an a error occurs
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (1 + max(binary_tree_height(tree->left),
			binary_tree_height(tree->right)));
}
