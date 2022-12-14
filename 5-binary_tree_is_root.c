#include "binary_trees.h"
/**
 * binary_tree_is_root- function to check a binary tree node is root
 * @node: pointer to the tree node
 * Return: NULL if an a error occurs
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
