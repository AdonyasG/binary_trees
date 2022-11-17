#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds a uncle of anode
 * @node: pointer to a node to find a string
 * Return: pointer to the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent && node->parent->parent->left &&
			node->parent->parent->right)
	{
		if (node->parent == node->parent->parent->left)
			return (node->parent->parent->right);
		return (node->parent->parent->left);
	}
	return (NULL);
}
