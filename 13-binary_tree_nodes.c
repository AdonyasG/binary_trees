#include "binary_trees.h"
/**
 * binary_tree_nodes- function to check binary tree node
 * which atleast have one child
 * @tree: pointer to the node
 * Return: NULL if an a error occurs
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	count += ((tree->left || tree->right) ? 1 : 0);
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->left);
	return (count);
}
